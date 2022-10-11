#!/bin/bash

make
gcc -c driver.c -o driver.o
gcc -o driver driver.o -L. -lft