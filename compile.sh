#!/bin/bash

export PATH="$(dirname "$0")/../bin/cmake-3.31.7-linux-x86_64/bin:${PATH}"

cmake --build build -j 8

echo "'./build/my_game' to run your game"