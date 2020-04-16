#!/usr/bin/env bash

if [ ! -f /zooservices/GetStatus.zcfg ]
then
	cp /opt/t2service/GetStatus.zcfg  /zooservices/
fi

if [ ! -f  /zooservices/wps_status.zo ]
then
	cp /opt/t2service/wps_status.zo  /zooservices/
fi

ldconfig

/usr/sbin/httpd -DFOREGROUND

