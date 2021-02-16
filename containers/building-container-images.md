# Introduction

This document provides common commands for building container images. It covers scenarios for building single-architecture containers and multi-architecture containers using available build toolkits.

## Prerequisites
Some of the commands below are experimental features of Docker. To enable those, user:
```
export DOCKER_CLI_EXPERIMENTAL=enabled
```

## Using `buildx` for multi-arch builds

### Creating a multi-architecture builder

1. Create the builder
   ```
   docker buildx create --name <builder_name>
   ```
   Example:
   ```
   docker buildx create --name multiarchbuilder
   ```
2. Select the builder
   ```
   docker buildx use <builder_name>
   ```
   Example:
   ```
   docker buildx use multiarchbuilder
   ```
3. Build and push the image
   ```
   docker buildx build --platform <list_of_platforms> -t <image_tag> . --push
   ```
   Example:
   ```
   docker buildx build --platform linux/arm,linux/arm64,linux/amd64 -t testrepo/hello-multiarch:v1.0 . --push
   ```
   **Note:** You have to use either the `--push` option to push the resulting image to a repository or the `--load` option to load it into Docker. If you don't use any of those options, the image will only be available in the build cache.
4. Verify the manifest of the image
   ```
   docker manifest inspect <image_tag>
   ```
   Example:
   ```
   docker manifest inspect testrepo/hello-multiarch:v1.0
   ```