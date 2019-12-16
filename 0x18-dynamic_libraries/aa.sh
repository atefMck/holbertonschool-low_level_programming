#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wl,-soname,$1 -o $1 *.o
