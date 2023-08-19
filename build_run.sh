#!/bin/bash

# ensure build-dir created
mkdir -p build
# remove previous builds
rm -rf build/*

# build & run
gcc example.c -o build/example && ./build/example
