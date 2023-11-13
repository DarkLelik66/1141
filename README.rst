.. image:: misc/logo.gif
  :alt: Angie logo
  :target: https://angie.software/en/

Angie
=====

Angie is an efficient, powerful and scalable web server, that was forked from
nginx by some of its former core devs, with intention to extend functionality
far beyond original version.

Angie is a drop-in replacement for nginx, so you can use existing nginx
configuration without major changes.

`Documentation Site <https://angie.software/en/>`_
-----------------------------------------------
`Changes <CHANGES>`_
--------------------

```
./configure  --prefix=/etc/angie --conf-path=/etc/angie/angie.conf --error-log-path=/var/log/angie/error.log --http-log-path=/var/log/angie/access.log --lock-path=/run/angie.lock --modules-path=/usr/lib/angie/modules --pid-path=/run/angie.pid --sbin-path=/usr/sbin/angie --http-client-body-temp-path=/var/cache/angie/client_temp --http-fastcgi-temp-path=/var/cache/angie/fastcgi_temp --http-proxy-temp-path=/var/cache/angie/proxy_temp --http-scgi-temp-path=/var/cache/angie/scgi_temp --http-uwsgi-temp-path=/var/cache/angie/uwsgi_temp --user=angie --group=angie --with-file-aio --with-http_addition_module --with-http_auth_request_module --with-http_dav_module --with-http_flv_module --with-http_gunzip_module --with-http_gzip_static_module --with-http_mp4_module --with-http_random_index_module --with-http_realip_module --with-http_secure_link_module --with-http_slice_module --with-http_ssl_module --with-http_stub_status_module --with-http_sub_module --with-http_v2_module --with-http_v3_module --with-mail --with-mail_ssl_module --with-stream --with-stream_realip_module --with-stream_ssl_module --with-stream_ssl_preread_module --with-threads --with-ld-opt='-DNGX_HTTP_UPSTREAM_CHECK,-Wl,-Bsymbolic-functions -flto=auto -ffat-lto-objects -flto=auto -Wl,-z,relro -Wl,-z,now' --add-module=./nginx_upstream_check_module/ --add-module=./nginx-ntlm-module/
```
