#!/usr/bin
gcc -fPIC -shared -o mylib.so mylib.c
LD_PRELOAD=/$PWD/mylib.so ./gm 9 8 10 24 75 9
