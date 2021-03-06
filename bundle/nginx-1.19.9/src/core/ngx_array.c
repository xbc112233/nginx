
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#include <ngx_config.h>
#include <ngx_core.h>

#define ASAN_ARRAY_ANNOTATE 1

#if defined(__SANITIZE_ADDRESS__)
#include <sanitizer/asan_interface.h>
#endif

#if ASAN_ARRAY_ANNOTATE && defined(__SANITIZE_ADDRESS__)

static inline void
ARRAY_CREATE_ANNOTATION(ngx_array_t *a)
{
    __sanitizer_annotate_contiguous_container(
        a->elts,
        (u_char*)a->elts + a->size * a->nalloc,
        (u_char*)a->elts + a->size * a->nalloc,
        (u_char*)a->elts + a->size * a->nelts
    );
}

static inline void
ARRAY_REMOVE_ANNOTATION(ngx_array_t *a)
{
    __sanitizer_annotate_contiguous_container(
        a->elts,
        (u_char*)a->elts + a->size * a->nalloc,
        (u_char*)a->elts + a->size * a->nelts,
        (u_char*)a->elts + a->size * a->nalloc
    );
}

static inline void
ARRAY_EXTEND_ANNOTATION(ngx_array_t *a, ngx_uint_t n)
{
    __sanitizer_annotate_contiguous_container(
        a->elts,
        (u_char*)a->elts + a->size * a->nalloc,
        (u_char*)a->elts + a->size * a->nelts,
        (u_char*)a->elts + a->size * (a->nelts + n)
    );
}

#else

#define ARRAY_CREATE_ANNOTATION(a)
#define ARRAY_REMOVE_ANNOTATION(a)
#define ARRAY_EXTEND_ANNOTATION(a, n)

#endif

ngx_array_t *
ngx_array_create(ngx_pool_t *p, ngx_uint_t n, size_t size)
{
    ngx_array_t *a;

    a = ngx_palloc(p, sizeof(ngx_array_t));
    if (a == NULL) {
        return NULL;
    }

    if (ngx_array_init(a, p, n, size) != NGX_OK) {
        return NULL;
    }

    return a;
}


void
ngx_array_destroy(ngx_array_t *a)
{
    ngx_pool_t  *p;

    p = a->pool;

    ARRAY_REMOVE_ANNOTATION(a);

    if ((u_char *) a->elts + a->size * a->nalloc == p->d.last) {
        p->d.last -= a->size * a->nalloc;
#if defined(__SANITIZE_ADDRESS__)
        __asan_poison_memory_region(p->d.last, p->d.end - p->d.last);
#endif
    }

    if ((u_char *) a + sizeof(ngx_array_t) == p->d.last) {
        p->d.last = (u_char *) a;
#if defined(__SANITIZE_ADDRESS__)
        __asan_poison_memory_region(p->d.last, p->d.end - p->d.last);
#endif
    }
}


void *
ngx_array_push(ngx_array_t *a)
{
    void        *elt, *new;
    size_t       size;
    ngx_pool_t  *p;

#if defined(__SANITIZE_ADDRESS__)
    if (a->nelts == 0) {
        ARRAY_CREATE_ANNOTATION(a);
    }
#endif

    if (a->nelts == a->nalloc) {

        /* the array is full */

        size = a->size * a->nalloc;

        p = a->pool;

        ARRAY_REMOVE_ANNOTATION(a);

        if ((u_char *) a->elts + size == p->d.last
            && p->d.last + a->size <= p->d.end)
        {
            /*
             * the array allocation is the last in the pool
             * and there is space for new allocation
             */
#if defined(__SANITIZE_ADDRESS__)
            __asan_unpoison_memory_region(p->d.last, a->size);
#endif
            p->d.last += a->size;
            a->nalloc++;
        } else {
            /* allocate a new array */
            new = ngx_palloc(p, 2 * size);
            if (new == NULL) {
                return NULL;
            }

            ngx_memcpy(new, a->elts, size);
            a->elts = new;
            a->nalloc *= 2;
        }

        ARRAY_CREATE_ANNOTATION(a);
    }

    ARRAY_EXTEND_ANNOTATION(a, 1);

    elt = (u_char *) a->elts + a->size * a->nelts;
    a->nelts++;

    return elt;
}


void *
ngx_array_push_n(ngx_array_t *a, ngx_uint_t n)
{
    void        *elt, *new;
    size_t       size;
    ngx_uint_t   nalloc;
    ngx_pool_t  *p;

    size = n * a->size;

#if defined(__SANITIZE_ADDRESS__)
    if (a->nelts == 0) {
        ARRAY_CREATE_ANNOTATION(a);
    }
#endif

    if (a->nelts + n > a->nalloc) {

        /* the array is full */

        p = a->pool;

        ARRAY_REMOVE_ANNOTATION(a);

        if ((u_char *) a->elts + a->size * a->nalloc == p->d.last
            && p->d.last + size <= p->d.end)
        {
            /*
             * the array allocation is the last in the pool
             * and there is space for new allocation
             */
#if defined(__SANITIZE_ADDRESS__)
            __asan_unpoison_memory_region(p->d.last, size);
#endif
            p->d.last += size;
            a->nalloc += n;

        } else {
            /* allocate a new array */

            nalloc = 2 * ((n >= a->nalloc) ? n : a->nalloc);

            new = ngx_palloc(p, nalloc * a->size);
            if (new == NULL) {
                return NULL;
            }

            ngx_memcpy(new, a->elts, a->nelts * a->size);
            a->elts = new;
            a->nalloc = nalloc;
        }

        ARRAY_CREATE_ANNOTATION(a);
    }

    ARRAY_EXTEND_ANNOTATION(a, n);

    elt = (u_char *) a->elts + a->size * a->nelts;
    a->nelts += n;

    return elt;
}
