#!/bin/bash

# Find all .c files in the current directory
files=$(find . -name "*.c")

# Compile the .c files into object files
for file in $files
do
    gcc -c $file
done

# Create the library archive file
ar rcs liball.a *.o

# Clean up the object files
rm *.o

