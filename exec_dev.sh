#!/bin/sh

echo > dev.log

# go build

./dbml-lsp-ts | tee dev.log
