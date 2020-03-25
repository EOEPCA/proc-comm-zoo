#!/usr/bin/env bash

DOCKERIMAGE=centos/devtoolset-7-toolchain-centos7

docker pull ${DOCKERIMAGE}
if [ "$?" -ne 0 ]
then
	echo "Docker pull failed"	
    exit 1
fi

chmod +x scripts/zoo.sh

FOLDER=/work/build
if [ ! -z "${RUNFOLDER}" ]
then
	FOLDER=${RUNFOLDER}
fi

echo "RUN SCRIPTS"
docker run --rm --user root --env FOLDER=${FOLDER} -v $PWD:/work ${DOCKERIMAGE} /work/scripts/zoo.sh
if [ $? -ne 0 ]
then
	echo "Build scripts failed"
	exit 2
fi

# docker build --rm -t eoepca-zoo:1.0 .
# if [ $? -ne 0 ]
# then
# 	echo "build Docker image  failed"
# 	exit 3
# fi








