
#include <ngx_config.h>
#include <ngx_core.h>



extern ngx_module_t  ngx_core_module;
extern ngx_module_t  ngx_errlog_module;
extern ngx_module_t  ngx_conf_module;
extern ngx_module_t  ngx_live_module;
extern ngx_module_t  ngx_rtmp_module;
extern ngx_module_t  ngx_rtmp_dynamic_module;
extern ngx_module_t  ngx_rtmp_dynamic_core_module;
extern ngx_module_t  ngx_rtmp_core_module;
extern ngx_module_t  ngx_rtmp_cmd_module;
extern ngx_module_t  ngx_rtmp_codec_module;
extern ngx_module_t  ngx_rtmp_access_module;
extern ngx_module_t  ngx_rtmp_live_module;
extern ngx_module_t  ngx_live_record_module;
extern ngx_module_t  ngx_live_relay_module;
extern ngx_module_t  ngx_live_relay_rtmp_module;
extern ngx_module_t  ngx_live_relay_static_module;
extern ngx_module_t  ngx_live_relay_simple_module;
extern ngx_module_t  ngx_rtmp_exec_module;
extern ngx_module_t  ngx_rtmp_notify_module;
extern ngx_module_t  ngx_live_relay_inner_module;
extern ngx_module_t  ngx_rtmp_log_module;
extern ngx_module_t  ngx_rtmp_limit_module;
extern ngx_module_t  ngx_rtmp_hls_module;
extern ngx_module_t  ngx_rtmp_dash_module;
extern ngx_module_t  ngx_rtmp_shared_module;
extern ngx_module_t  ngx_rtmp_record_module;
extern ngx_module_t  ngx_rtmp_gop_module;
extern ngx_module_t  ngx_rtmp_monitor_module;
extern ngx_module_t  ngx_mpegts_live_module;
extern ngx_module_t  ngx_mpegts_gop_module;
extern ngx_module_t  ngx_hls_live_module;
extern ngx_module_t  ngx_client_module;
extern ngx_module_t  ngx_http_client_module;
extern ngx_module_t  ngx_process_slot_module;
extern ngx_module_t  ngx_stream_zone_module;
extern ngx_module_t  ngx_http_dynamic_module;
extern ngx_module_t  ngx_openssl_module;
extern ngx_module_t  ngx_regex_module;
extern ngx_module_t  ngx_events_module;
extern ngx_module_t  ngx_event_core_module;
extern ngx_module_t  ngx_kqueue_module;
extern ngx_module_t  ngx_event_multiport_module;
extern ngx_module_t  ngx_event_timer_module;
extern ngx_module_t  ngx_dynamic_conf_module;
extern ngx_module_t  ngx_event_resolver_module;
extern ngx_module_t  ngx_dynamic_resolver_module;
extern ngx_module_t  ngx_http_module;
extern ngx_module_t  ngx_http_core_module;
extern ngx_module_t  ngx_http_log_module;
extern ngx_module_t  ngx_http_upstream_module;
extern ngx_module_t  ngx_http_static_module;
extern ngx_module_t  ngx_http_autoindex_module;
extern ngx_module_t  ngx_http_index_module;
extern ngx_module_t  ngx_http_mirror_module;
extern ngx_module_t  ngx_http_try_files_module;
extern ngx_module_t  ngx_http_auth_basic_module;
extern ngx_module_t  ngx_http_access_module;
extern ngx_module_t  ngx_http_limit_conn_module;
extern ngx_module_t  ngx_http_limit_req_module;
extern ngx_module_t  ngx_http_geo_module;
extern ngx_module_t  ngx_http_map_module;
extern ngx_module_t  ngx_http_split_clients_module;
extern ngx_module_t  ngx_http_referer_module;
extern ngx_module_t  ngx_http_rewrite_module;
extern ngx_module_t  ngx_http_ssl_module;
extern ngx_module_t  ngx_http_proxy_module;
extern ngx_module_t  ngx_http_fastcgi_module;
extern ngx_module_t  ngx_http_uwsgi_module;
extern ngx_module_t  ngx_http_scgi_module;
extern ngx_module_t  ngx_http_memcached_module;
extern ngx_module_t  ngx_http_empty_gif_module;
extern ngx_module_t  ngx_http_browser_module;
extern ngx_module_t  ngx_http_upstream_hash_module;
extern ngx_module_t  ngx_http_upstream_ip_hash_module;
extern ngx_module_t  ngx_http_upstream_least_conn_module;
extern ngx_module_t  ngx_http_upstream_random_module;
extern ngx_module_t  ngx_http_upstream_keepalive_module;
extern ngx_module_t  ngx_http_upstream_zone_module;
extern ngx_module_t  ndk_http_module;
extern ngx_module_t  ngx_coolkit_module;
extern ngx_module_t  ngx_http_set_misc_module;
extern ngx_module_t  ngx_http_form_input_module;
extern ngx_module_t  ngx_http_encrypted_session_module;
extern ngx_module_t  ngx_http_lua_upstream_module;
extern ngx_module_t  ngx_http_array_var_module;
extern ngx_module_t  ngx_http_memc_module;
extern ngx_module_t  ngx_http_redis2_module;
extern ngx_module_t  ngx_http_redis_module;
extern ngx_module_t  ngx_rtmp_stat_module;
extern ngx_module_t  ngx_rtmp_sys_stat_module;
extern ngx_module_t  ngx_rtmp_control_module;
extern ngx_module_t  ngx_http_flv_live_module;
extern ngx_module_t  ngx_hls_http_module;
extern ngx_module_t  ngx_mpegts_http_module;
extern ngx_module_t  ngx_http_dynamic_core_module;
extern ngx_module_t  ngx_http_trace_module;
extern ngx_module_t  ngx_http_write_filter_module;
extern ngx_module_t  ngx_http_header_filter_module;
extern ngx_module_t  ngx_http_chunked_filter_module;
extern ngx_module_t  ngx_http_range_header_filter_module;
extern ngx_module_t  ngx_http_gzip_filter_module;
extern ngx_module_t  ngx_http_postpone_filter_module;
extern ngx_module_t  ngx_http_ssi_filter_module;
extern ngx_module_t  ngx_http_charset_filter_module;
extern ngx_module_t  ngx_http_userid_filter_module;
extern ngx_module_t  ngx_http_headers_filter_module;
extern ngx_module_t  ngx_http_broadcast_module;
extern ngx_module_t  ngx_http_inner_proxy_module;
extern ngx_module_t  ngx_http_echo_module;
extern ngx_module_t  ngx_http_xss_filter_module;
extern ngx_module_t  ngx_http_srcache_filter_module;
extern ngx_module_t  ngx_http_lua_module;
extern ngx_module_t  ngx_http_headers_more_filter_module;
extern ngx_module_t  ngx_http_rds_json_filter_module;
extern ngx_module_t  ngx_http_rds_csv_filter_module;
extern ngx_module_t  ngx_http_copy_filter_module;
extern ngx_module_t  ngx_http_range_body_filter_module;
extern ngx_module_t  ngx_http_not_modified_filter_module;
extern ngx_module_t  ngx_stream_module;
extern ngx_module_t  ngx_stream_core_module;
extern ngx_module_t  ngx_stream_log_module;
extern ngx_module_t  ngx_stream_proxy_module;
extern ngx_module_t  ngx_stream_upstream_module;
extern ngx_module_t  ngx_stream_write_filter_module;
extern ngx_module_t  ngx_stream_ssl_module;
extern ngx_module_t  ngx_stream_limit_conn_module;
extern ngx_module_t  ngx_stream_access_module;
extern ngx_module_t  ngx_stream_geo_module;
extern ngx_module_t  ngx_stream_map_module;
extern ngx_module_t  ngx_stream_split_clients_module;
extern ngx_module_t  ngx_stream_return_module;
extern ngx_module_t  ngx_stream_set_module;
extern ngx_module_t  ngx_stream_upstream_hash_module;
extern ngx_module_t  ngx_stream_upstream_least_conn_module;
extern ngx_module_t  ngx_stream_upstream_random_module;
extern ngx_module_t  ngx_stream_upstream_zone_module;
extern ngx_module_t  ngx_stream_ssl_preread_module;
extern ngx_module_t  ngx_stream_lua_module;

ngx_module_t *ngx_modules[] = {
    &ngx_core_module,
    &ngx_errlog_module,
    &ngx_conf_module,
    &ngx_live_module,
    &ngx_rtmp_module,
    &ngx_rtmp_dynamic_module,
    &ngx_rtmp_dynamic_core_module,
    &ngx_rtmp_core_module,
    &ngx_rtmp_cmd_module,
    &ngx_rtmp_codec_module,
    &ngx_rtmp_access_module,
    &ngx_rtmp_live_module,
    &ngx_live_record_module,
    &ngx_live_relay_module,
    &ngx_live_relay_rtmp_module,
    &ngx_live_relay_static_module,
    &ngx_live_relay_simple_module,
    &ngx_rtmp_exec_module,
    &ngx_rtmp_notify_module,
    &ngx_live_relay_inner_module,
    &ngx_rtmp_log_module,
    &ngx_rtmp_limit_module,
    &ngx_rtmp_hls_module,
    &ngx_rtmp_dash_module,
    &ngx_rtmp_shared_module,
    &ngx_rtmp_record_module,
    &ngx_rtmp_gop_module,
    &ngx_rtmp_monitor_module,
    &ngx_mpegts_live_module,
    &ngx_mpegts_gop_module,
    &ngx_hls_live_module,
    &ngx_client_module,
    &ngx_http_client_module,
    &ngx_process_slot_module,
    &ngx_stream_zone_module,
    &ngx_http_dynamic_module,
    &ngx_openssl_module,
    &ngx_regex_module,
    &ngx_events_module,
    &ngx_event_core_module,
    &ngx_kqueue_module,
    &ngx_event_multiport_module,
    &ngx_event_timer_module,
    &ngx_dynamic_conf_module,
    &ngx_event_resolver_module,
    &ngx_dynamic_resolver_module,
    &ngx_http_module,
    &ngx_http_core_module,
    &ngx_http_log_module,
    &ngx_http_upstream_module,
    &ngx_http_static_module,
    &ngx_http_autoindex_module,
    &ngx_http_index_module,
    &ngx_http_mirror_module,
    &ngx_http_try_files_module,
    &ngx_http_auth_basic_module,
    &ngx_http_access_module,
    &ngx_http_limit_conn_module,
    &ngx_http_limit_req_module,
    &ngx_http_geo_module,
    &ngx_http_map_module,
    &ngx_http_split_clients_module,
    &ngx_http_referer_module,
    &ngx_http_rewrite_module,
    &ngx_http_ssl_module,
    &ngx_http_proxy_module,
    &ngx_http_fastcgi_module,
    &ngx_http_uwsgi_module,
    &ngx_http_scgi_module,
    &ngx_http_memcached_module,
    &ngx_http_empty_gif_module,
    &ngx_http_browser_module,
    &ngx_http_upstream_hash_module,
    &ngx_http_upstream_ip_hash_module,
    &ngx_http_upstream_least_conn_module,
    &ngx_http_upstream_random_module,
    &ngx_http_upstream_keepalive_module,
    &ngx_http_upstream_zone_module,
    &ndk_http_module,
    &ngx_coolkit_module,
    &ngx_http_set_misc_module,
    &ngx_http_form_input_module,
    &ngx_http_encrypted_session_module,
    &ngx_http_lua_upstream_module,
    &ngx_http_array_var_module,
    &ngx_http_memc_module,
    &ngx_http_redis2_module,
    &ngx_http_redis_module,
    &ngx_rtmp_stat_module,
    &ngx_rtmp_sys_stat_module,
    &ngx_rtmp_control_module,
    &ngx_http_flv_live_module,
    &ngx_hls_http_module,
    &ngx_mpegts_http_module,
    &ngx_http_dynamic_core_module,
    &ngx_http_trace_module,
    &ngx_http_write_filter_module,
    &ngx_http_header_filter_module,
    &ngx_http_chunked_filter_module,
    &ngx_http_range_header_filter_module,
    &ngx_http_gzip_filter_module,
    &ngx_http_postpone_filter_module,
    &ngx_http_ssi_filter_module,
    &ngx_http_charset_filter_module,
    &ngx_http_userid_filter_module,
    &ngx_http_headers_filter_module,
    &ngx_http_broadcast_module,
    &ngx_http_inner_proxy_module,
    &ngx_http_echo_module,
    &ngx_http_xss_filter_module,
    &ngx_http_srcache_filter_module,
    &ngx_http_lua_module,
    &ngx_http_headers_more_filter_module,
    &ngx_http_rds_json_filter_module,
    &ngx_http_rds_csv_filter_module,
    &ngx_http_copy_filter_module,
    &ngx_http_range_body_filter_module,
    &ngx_http_not_modified_filter_module,
    &ngx_stream_module,
    &ngx_stream_core_module,
    &ngx_stream_log_module,
    &ngx_stream_proxy_module,
    &ngx_stream_upstream_module,
    &ngx_stream_write_filter_module,
    &ngx_stream_ssl_module,
    &ngx_stream_limit_conn_module,
    &ngx_stream_access_module,
    &ngx_stream_geo_module,
    &ngx_stream_map_module,
    &ngx_stream_split_clients_module,
    &ngx_stream_return_module,
    &ngx_stream_set_module,
    &ngx_stream_upstream_hash_module,
    &ngx_stream_upstream_least_conn_module,
    &ngx_stream_upstream_random_module,
    &ngx_stream_upstream_zone_module,
    &ngx_stream_ssl_preread_module,
    &ngx_stream_lua_module,
    NULL
};

char *ngx_module_names[] = {
    "ngx_core_module",
    "ngx_errlog_module",
    "ngx_conf_module",
    "ngx_live_module",
    "ngx_rtmp_module",
    "ngx_rtmp_dynamic_module",
    "ngx_rtmp_dynamic_core_module",
    "ngx_rtmp_core_module",
    "ngx_rtmp_cmd_module",
    "ngx_rtmp_codec_module",
    "ngx_rtmp_access_module",
    "ngx_rtmp_live_module",
    "ngx_live_record_module",
    "ngx_live_relay_module",
    "ngx_live_relay_rtmp_module",
    "ngx_live_relay_static_module",
    "ngx_live_relay_simple_module",
    "ngx_rtmp_exec_module",
    "ngx_rtmp_notify_module",
    "ngx_live_relay_inner_module",
    "ngx_rtmp_log_module",
    "ngx_rtmp_limit_module",
    "ngx_rtmp_hls_module",
    "ngx_rtmp_dash_module",
    "ngx_rtmp_shared_module",
    "ngx_rtmp_record_module",
    "ngx_rtmp_gop_module",
    "ngx_rtmp_monitor_module",
    "ngx_mpegts_live_module",
    "ngx_mpegts_gop_module",
    "ngx_hls_live_module",
    "ngx_client_module",
    "ngx_http_client_module",
    "ngx_process_slot_module",
    "ngx_stream_zone_module",
    "ngx_http_dynamic_module",
    "ngx_openssl_module",
    "ngx_regex_module",
    "ngx_events_module",
    "ngx_event_core_module",
    "ngx_kqueue_module",
    "ngx_event_multiport_module",
    "ngx_event_timer_module",
    "ngx_dynamic_conf_module",
    "ngx_event_resolver_module",
    "ngx_dynamic_resolver_module",
    "ngx_http_module",
    "ngx_http_core_module",
    "ngx_http_log_module",
    "ngx_http_upstream_module",
    "ngx_http_static_module",
    "ngx_http_autoindex_module",
    "ngx_http_index_module",
    "ngx_http_mirror_module",
    "ngx_http_try_files_module",
    "ngx_http_auth_basic_module",
    "ngx_http_access_module",
    "ngx_http_limit_conn_module",
    "ngx_http_limit_req_module",
    "ngx_http_geo_module",
    "ngx_http_map_module",
    "ngx_http_split_clients_module",
    "ngx_http_referer_module",
    "ngx_http_rewrite_module",
    "ngx_http_ssl_module",
    "ngx_http_proxy_module",
    "ngx_http_fastcgi_module",
    "ngx_http_uwsgi_module",
    "ngx_http_scgi_module",
    "ngx_http_memcached_module",
    "ngx_http_empty_gif_module",
    "ngx_http_browser_module",
    "ngx_http_upstream_hash_module",
    "ngx_http_upstream_ip_hash_module",
    "ngx_http_upstream_least_conn_module",
    "ngx_http_upstream_random_module",
    "ngx_http_upstream_keepalive_module",
    "ngx_http_upstream_zone_module",
    "ndk_http_module",
    "ngx_coolkit_module",
    "ngx_http_set_misc_module",
    "ngx_http_form_input_module",
    "ngx_http_encrypted_session_module",
    "ngx_http_lua_upstream_module",
    "ngx_http_array_var_module",
    "ngx_http_memc_module",
    "ngx_http_redis2_module",
    "ngx_http_redis_module",
    "ngx_rtmp_stat_module",
    "ngx_rtmp_sys_stat_module",
    "ngx_rtmp_control_module",
    "ngx_http_flv_live_module",
    "ngx_hls_http_module",
    "ngx_mpegts_http_module",
    "ngx_http_dynamic_core_module",
    "ngx_http_trace_module",
    "ngx_http_write_filter_module",
    "ngx_http_header_filter_module",
    "ngx_http_chunked_filter_module",
    "ngx_http_range_header_filter_module",
    "ngx_http_gzip_filter_module",
    "ngx_http_postpone_filter_module",
    "ngx_http_ssi_filter_module",
    "ngx_http_charset_filter_module",
    "ngx_http_userid_filter_module",
    "ngx_http_headers_filter_module",
    "ngx_http_broadcast_module",
    "ngx_http_inner_proxy_module",
    "ngx_http_echo_module",
    "ngx_http_xss_filter_module",
    "ngx_http_srcache_filter_module",
    "ngx_http_lua_module",
    "ngx_http_headers_more_filter_module",
    "ngx_http_rds_json_filter_module",
    "ngx_http_rds_csv_filter_module",
    "ngx_http_copy_filter_module",
    "ngx_http_range_body_filter_module",
    "ngx_http_not_modified_filter_module",
    "ngx_stream_module",
    "ngx_stream_core_module",
    "ngx_stream_log_module",
    "ngx_stream_proxy_module",
    "ngx_stream_upstream_module",
    "ngx_stream_write_filter_module",
    "ngx_stream_ssl_module",
    "ngx_stream_limit_conn_module",
    "ngx_stream_access_module",
    "ngx_stream_geo_module",
    "ngx_stream_map_module",
    "ngx_stream_split_clients_module",
    "ngx_stream_return_module",
    "ngx_stream_set_module",
    "ngx_stream_upstream_hash_module",
    "ngx_stream_upstream_least_conn_module",
    "ngx_stream_upstream_random_module",
    "ngx_stream_upstream_zone_module",
    "ngx_stream_ssl_preread_module",
    "ngx_stream_lua_module",
    NULL
};

