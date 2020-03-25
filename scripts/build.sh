#!/usr/bin/env bash

DOCKERIMAGE=centos/devtoolset-7-toolchain-centos7

docker pull ${DOCKERIMAGE}
if [ "$?" -ne 0 ]
then
	echo "Docker pull failed"	
    exit 1
fi

#echo "RUN SCRIPTS"
#docker run --rm --user root -v $PWD:/work -v /tmp/output:/output  ${DOCKERIMAGE} /work/scripts/zoo.sh
#if [ $? -ne 0 ]
#then
#	echo "Build scripts failed"
#	exit 2
#fi

docker build --rm -t eoepca-zoo:1.0 .
if [ $? -ne 0 ]
then
	echo "Docker image  failed"
	exit 3
fi








