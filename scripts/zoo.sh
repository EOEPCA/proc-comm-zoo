#!/usr/bin/env bash


FOLDER='/output'

cd ${FOLDER}

yum install -y epel-release

yum update -y

yum install -y   zlib-devel libxml2 libxml2-devel bison openssl  python-devel subversion libxslt-devel libcurl-devel  gdal-devel proj-devel libuuid-devel openssl-devel fcgi-devel wget unzip autoconf flex

yum install -y httpd

wget "http://zoo-project.org/dl/zoo-project-1.7.0.zip"

cp /work/assets/libfcgi-2.4.0.orig.tar.gz .

tar -zxvf libfcgi-2.4.0.orig.tar.gz 

unzip zoo-project-1.7.0.zip

cd  ${FOLDER}/zoo-project-1.7.0/thirds/cgic206
make libcgic.a
make install
cd ${FOLDER}/zoo-project-1.7.0/zoo-project/zoo-kernel/

autoconf 

./configure  --with-fastcgi=/opt/app-root/src/libfcgi-2.4.0.orig/OUT/lib --with-xml2config=/usr/bin/xml2-config  --with-cgi-dir=/var/www/cgi-bin --with-etc-dir=yes --sysconfdir=/etc/zoo-project


make 
make install 
ln -s  libzoo_service.so   libzoo_service.so.1.5 

echo "************************************************************"
echo "Build status service and demo"
HERE=$PWD
cd ${FOLDER}/zoo-project-1.7.0/zoo-project/zoo-services/utils/status
make 
mkdir -p ${FOLDER}/demo
rsync -av cgi-env/* ${FOLDER}/demo 

cd ${HERE}
echo "************************************************************"


mkdir -p /etc/zoo-project/
cp main.cfg /etc/zoo-project/

export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:.

echo "*************************************************************"
echo "RUN local test"
./zoo_loader.cgi "service=WPS&version=1.0.0&request=GetCapabilities"
echo "-------------------------------------------------------------"

