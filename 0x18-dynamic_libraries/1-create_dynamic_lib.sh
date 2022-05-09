#!/bin/bash
gcc *.o -shared -o libholberton.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
