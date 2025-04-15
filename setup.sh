#!/bin/bash
set -e

mkdir -p vego/bin
mkdir -p vego/downloads
mkdir -p vego/engine

curl -L -o vego/downloads/Tiled-1.11.2-x86_64.AppImage "https://github.com/mapeditor/tiled/releases/download/v1.11.2/Tiled-1.11.2-x86_64.AppImage"
chmod +x vego/downloads/Tiled-1.11.2-x86_64.AppImage

curl -L -o vego/downloads/cmake-4.0.0-rc4-linux-x86_64.tar.gz "https://github.com/Kitware/CMake/releases/download/v4.0.0-rc4/cmake-4.0.0-rc4-linux-x86_64.tar.gz"
tar -xzf vego/downloads/cmake-4.0.0-rc4-linux-x86_64.tar.gz -C vego/bin --strip-components=1

if ! command -v gcc &> /dev/null; then
    echo "GCC not found. Attempting to install..."
    if command -v apt &> /dev/null; then
        sudo apt update && sudo
