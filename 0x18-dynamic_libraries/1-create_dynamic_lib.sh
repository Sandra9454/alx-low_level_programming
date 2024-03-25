#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

gcc -shared -o liball.so *.o

#removing .o files to clean up
rm -f *.o
