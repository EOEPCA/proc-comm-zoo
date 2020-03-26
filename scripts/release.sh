#!/usr/bin/env bash

set -euov pipefail

source travis/variables.sh

echo "$DOCKER_PASSWORD" | docker login -u "$DOCKER_USERNAME" --password-stdin

pullTag=${EOEPCA_DOCKERIMAGE}:${buildTag}
releaseTag=${EOEPCA_DOCKERIMAGE}:release_${buildTag}
latestTag=${EOEPCA_REPOSITORY}/${SERVICE_NAME}:latest

docker pull ${pullTag}

docker tag ${pullTag} ${releaseTag}
docker push ${releaseTag}

docker tag ${pullTag} ${latestTag}
docker push ${latestTag}
