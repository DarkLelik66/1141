
default:	build

clean:
	rm -rf Makefile objs

.PHONY:	default clean

build:
	$(MAKE) -f objs/Makefile

install:
	$(MAKE) -f objs/Makefile install

modules:
	$(MAKE) -f objs/Makefile modules

upgrade:
	/usr/sbin/angie -t

	kill -USR2 `cat /run/angie.pid`
	sleep 1
	test -f /run/angie.pid.oldbin

	kill -QUIT `cat /run/angie.pid.oldbin`

.PHONY:	build install modules upgrade
