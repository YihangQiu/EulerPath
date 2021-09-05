#!/bin/bash
cd build 
rm -rf *
cmake ..
make
./PA1 $1
cd ..