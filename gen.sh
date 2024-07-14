#!/bin/sh

cd ./tree-sitter-dbml/ || exit
./node_modules/.bin/tree-sitter generate
cd ..
