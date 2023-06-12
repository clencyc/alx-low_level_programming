#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.C
ar -rc liball.a *.o
ranlib liball.a
