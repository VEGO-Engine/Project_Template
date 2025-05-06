#!/bin/bash

mkdir vego/
cd vego

mkdir downloads/
mkdir tmp/

curl -L 'https://github.com/adonis0147/devel-env/releases/download/v2025.04/install_toolchain_x86_64.sh' -o downloads/install_toolchain_x86_64.sh
curl -L 'https://github.com/Kitware/CMake/releases/download/v3.31.7/cmake-3.31.7-linux-x86_64.tar.gz' -o downloads/cmake-3.31.7-linux-x86_64.tar.gz
curl -L 'https://github.com/VEGO-Engine/Project_Template/releases/download/0.2.x/vego_template.tar.gz' -o downloads/vego_template.tar.gz

bash downloads/install_toolchain_x86_64.sh bin/

export PATH="$(pwd)/bin/compiler/bin:${PATH}"
export LD_LIBRARY_PATH=$(pwd)/bin/compiler/lib:$LD_LIBRARY_PATH

tar -xzf downloads/cmake-3.31.7-linux-x86_64.tar.gz -C bin/

export PATH="$(pwd)/bin/cmake-3.31.7-linux-x86_64/bin:${PATH}"

mkdir my_game
tar -xzf downloads/vego_template.tar.gz -C my_game --strip-components 1
cmake -S my_game -B my_game/build

echo "Setup completed successfully!"