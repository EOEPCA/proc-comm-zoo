FROM centos/devtoolset-7-toolchain-centos7

USER root
# 
RUN yum install -y epel-release
RUN yum update -y
RUN yum install -y   zlib-devel libxml2 libxml2-devel bison openssl  python-devel subversion libxslt-devel libcurl-devel  gdal-devel proj-devel libuuid-devel openssl-devel fcgi-devel wget unzip autoconf flex

#install zoo
RUN yum install -y httpd \
	&& mkdir -p /var/www/zoo-bin/ /var/www/data/ /etc/zoo-project/ /var/www/html/res \
	&& mkdir -p /zooservices &&  chmod 777 /zooservices \
	&& mkdir -p /var/www/fcgi/ /var/www/html/zoo \
	&& chown -R apache:apache /var/www/zoo-bin/ /var/www/zoo-bin/ /var/www/data/ \
	&& echo "/usr/local/lib" > /etc/ld.so.conf.d/zoo.conf && ldconfig \
	&& mkdir -p /opt/t2build/  /opt/t2service/ /opt/t2scripts/ \
	&& mkdir -p /var/www/zoo-bin/ /var/www/html/zoo/

COPY build/zoo-project-1.7.0/zoo-project/zoo-kernel/zoo_loader.cgi /var/www/zoo-bin/zoo_loader.cgi
COPY build/zoo-project-1.7.0/zoo-project/zoo-kernel/libzoo_service.so /usr/local/lib/libzoo_service.so 
COPY assets/zoo/httpd/htaccess /var/www/html/zoo/.htaccess
COPY assets/zoo/httpd/zoo.conf	/etc/httpd/conf.d/zoo.conf
COPY build/demo/updateStatus.xsl /var/www/data/updateStatus.xsl
COPY assets/main.cfg /etc/zoo-project/main.cfg
COPY build/demo/GetStatus.zcfg /opt/t2service/GetStatus.zcfg 
COPY build/demo/wps_status.zo /opt/t2service/wps_status.zo
COPY scripts/entrypoint.sh /opt/t2scripts/entrypoint.sh 

RUN chown -R apache:apache /var/www /opt/t2build \
	&& chmod +x /var/www/zoo-bin/zoo_loader.cgi \
	&& ln -s /usr/local/lib/libzoo_service.so /usr/local/lib/libzoo_service.so.1.5

ENTRYPOINT ["/opt/t2scripts/entrypoint.sh"]


