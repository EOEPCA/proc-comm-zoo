#!/usr/bin/env bash

DOCKERIMAGE=centos/devtoolset-7-toolchain-centos7

docker pull ${DOCKERIMAGE}
if [ "$?" -ne 0 ]
then
	echo "Docker pull ${DOCKERIMAGE} failed"	
    exit 1
fi

if [ -z "${LOCAL_SERVICE_NAME}" ]
then
	LOCAL_SERVICE_NAME="proc-comm-zoo"
fi

if [ -z "${buildTag}" ]
then
	buildTag="1.0"
fi

chmod +x scripts/zoo.sh

FOLDER="/work/build"
if [ ! -z "${RUNFOLDER}" ]#RUNFOLDER is set
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

if [ -z "${BUILD_ONLY}" ]
then #BUILD_ONLY is not set

	docker build --rm -t ${LOCAL_SERVICE_NAME}:${buildTag} .
	if [ $? -ne 0 ]
	then
		echo "build Docker image  failed"
		exit 3
	fi

fi










