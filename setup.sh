#!/bin/bash
set -e

mkdir -p vego/bin
mkdir -p vego/downloads
mkdir -p vego/engine

curl -L -o vego/downloads/cmake-4.0.1-linux-x86_64.tar.gz "https://github.com/Kitware/CMake/releases/download/v4.0.1/cmake-4.0.1-linux-x86_64.tar.gz"
tar -xzf vego/downloads/cmake-4.0.1-linux-x86_64.tar.gz -C vego/bin --strip-components=1

curl -L -o jaihudsigz "https://ftp.gwdg.de/pub/misc/gcc/releases/gcc-14.2.0/gcc-14.2.0.tar.gz"

echo "Please download the Tiled mapeditor from the following link: https://github.com/mapeditor/tiled/releases/tag/v1.11.2" 
xdg-open "https://github.com/mapeditor/tiled/releases/tag/v1.11.2"
