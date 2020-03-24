#!/usr/bin/env bash

DOCKERIMAGE=centos/devtoolset-7-toolchain-centos7

docker pull ${DOCKERIMAGE}
if [ "$?" -ne 0 ]
then
	echo "Docker pull failed"	
    exit 1
fi


mkdir  -p /tmp/output

echo "RUN SCRIPTS"
docker run --rm --user root -v $PWD:/work -v /tmp/output:/output  ${DOCKERIMAGE} /work/scripts/zoo.sh




