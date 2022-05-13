export KERNEL_BITS=64
.PHONY: all install clean

all:
	cd /Users/bytedance/code/xbc_nginx/nginx/build/LuaJIT-2.1-20210510 && $(MAKE) TARGET_STRIP=@: CCDEBUG=-g XCFLAGS='-DLUAJIT_ENABLE_LUA52COMPAT -fno-stack-check' CC=cc MACOSX_DEPLOYMENT_TARGET='11.6' PREFIX=/Users/bytedance/nginx/luajit
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-cjson-2.1.0.8 && $(MAKE) DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_CMODULE_DIR=/Users/bytedance/nginx/lualib LUA_MODULE_DIR=/Users/bytedance/nginx/lualib CJSON_CFLAGS="-g -fpic" CJSON_LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-signal-0.03 && $(MAKE) DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_LIB_DIR=/Users/bytedance/nginx/lualib LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-redis-parser-0.13 && $(MAKE) DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_LIB_DIR=/Users/bytedance/nginx/lualib LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-rds-parser-0.06 && $(MAKE) DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_LIB_DIR=/Users/bytedance/nginx/lualib LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/nginx-1.19.9 && $(MAKE)

install: all
	mkdir -p $(DESTDIR)/Users/bytedance/nginx/
	-cp /Users/bytedance/code/xbc_nginx/nginx/COPYRIGHT $(DESTDIR)/Users/bytedance/nginx/
	cd /Users/bytedance/code/xbc_nginx/nginx/build/LuaJIT-2.1-20210510 && $(MAKE) install TARGET_STRIP=@: CCDEBUG=-g XCFLAGS='-DLUAJIT_ENABLE_LUA52COMPAT -fno-stack-check' CC=cc MACOSX_DEPLOYMENT_TARGET='11.6' PREFIX=/Users/bytedance/nginx/luajit DESTDIR=$(DESTDIR)
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-cjson-2.1.0.8 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_CMODULE_DIR=/Users/bytedance/nginx/lualib LUA_MODULE_DIR=/Users/bytedance/nginx/lualib CJSON_CFLAGS="-g -fpic" CJSON_LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-signal-0.03 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_LIB_DIR=/Users/bytedance/nginx/lualib LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-redis-parser-0.13 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_LIB_DIR=/Users/bytedance/nginx/lualib LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-rds-parser-0.06 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/Users/bytedance/code/xbc_nginx/nginx/build/luajit-root/Users/bytedance/nginx/luajit/include/luajit-2.1 LUA_LIB_DIR=/Users/bytedance/nginx/lualib LDFLAGS='-bundle -undefined dynamic_lookup' CC=cc
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-dns-0.22 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-memcached-0.16 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-redis-0.29 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-mysql-0.24 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-string-0.14 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-upload-0.10 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-websocket-0.08 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-lock-0.08 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-lrucache-0.11 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-core-0.1.22 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-upstream-healthcheck-0.06 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-limit-traffic-0.07 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-resty-shell-0.03 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/lua-tablepool-0.02 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/Users/bytedance/nginx/lualib INSTALL=/Users/bytedance/code/xbc_nginx/nginx/build/install
	cd /Users/bytedance/code/xbc_nginx/nginx/build/opm-0.0.6 && /Users/bytedance/code/xbc_nginx/nginx/build/install bin/* $(DESTDIR)/Users/bytedance/nginx/bin/
	cd /Users/bytedance/code/xbc_nginx/nginx/build/resty-cli-0.28 && /Users/bytedance/code/xbc_nginx/nginx/build/install bin/* $(DESTDIR)/Users/bytedance/nginx/bin/
	cp /Users/bytedance/code/xbc_nginx/nginx/build/resty.index $(DESTDIR)/Users/bytedance/nginx/
	cp -r /Users/bytedance/code/xbc_nginx/nginx/build/pod $(DESTDIR)/Users/bytedance/nginx/
	cd /Users/bytedance/code/xbc_nginx/nginx/build/nginx-1.19.9 && $(MAKE) install DESTDIR=$(DESTDIR)
	mkdir -p $(DESTDIR)/Users/bytedance/nginx/site/lualib $(DESTDIR)/Users/bytedance/nginx/site/pod $(DESTDIR)/Users/bytedance/nginx/site/manifest
	ln -sf /Users/bytedance/nginx/nginx/sbin/nginx $(DESTDIR)/Users/bytedance/nginx/bin/openresty

clean:
	rm -rf build *.exe *.dll openresty-*
