#!/bin/sh

echo > dev.log

# go build

./dbml-lsp-ts lsp | tee dev.log
