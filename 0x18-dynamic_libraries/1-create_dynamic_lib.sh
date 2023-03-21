#!/bin/bash
gcc -fPIC -c *.c
gcc *.c -fPIC -shared -o liball.so
