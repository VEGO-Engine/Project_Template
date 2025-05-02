#!/bin/bash

mkdir vego/
cd vego

mkdir downloads/

curl -L 'https://github.com/adonis0147/devel-env/releases/download/v2024.05/install_toolchain_x86_64.sh' -o downloads/install_toolchain_x86_64.sh

bash downloads/install_toolchain_x86_64.sh bin/
export PATH="$(pwd)/bin/compiler/bin:${PATH}"
