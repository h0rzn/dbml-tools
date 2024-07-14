#!/bin/sh

# Navigate to the tree-sitter2 directory
cd ./tree-sitter-dbml/src || exit

# Compile the parser.c file to create the object file
gcc -c -o parser.o parser.c

# Create the static library from the object file
ar rcs libparser.a parser.o

# Navigate back to the root directory
cd ../..

echo "static library compiled"
