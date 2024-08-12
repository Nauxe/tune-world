#!/usr/bin/bash
cd ./src/include
clang++ -c *.cpp
cd ../..
cmake -B . && cmake --build . 
