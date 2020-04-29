#!/usr/bin/env bash

if [ ! -f /zooservices/GetStatus.zcfg ]; then
  cp -f /opt/t2service/GetStatus.zcfg /zooservices/
  cp -f /opt/t2service/wps_status.zo /zooservices/
fi

if [ ! -f /zooservices/main.cfg ]; then
  cp -f /etc/zoo-project/* /zooservices/
fi

ldconfig

/usr/sbin/httpd -DFOREGROUND
