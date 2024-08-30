# A dbml Language Server
*Disclaimer: This project is still work in progress*  

dbml-lsp-ts is a language server with additional tooling
for [dbml](https://dbml.dbdiagram.io/home), based on 
[Tree-Sitter](https://tree-sitter.github.io/tree-sitter/).  

```
A dbml language server based on tree-sitter based on tree-sitter

Usage:
  dbml-lsp-ts [command]

Available Commands:
  completion  Generate the autocompletion script for the specified shell
  dev         
  help        Help about any command
  lsp         Run lsp
  parse       Parse a file directly
  query       Query a file directly
  validate    Validate a file directly

Flags:
  -h, --help   help for dbml-lsp-ts

Use "dbml-lsp-ts [command] --help" for more information about a command.
```

## Parser Coverage
Internal parser is using tree-sitter and currently only partly supports language features.
For further details see [Parser-Limitations.md](./limitations.md).

## LSP Coverage
`textDocument/definition`  
- Supported: tables, table aliases, columns, relationship definitions
- Index definitions are not implemented

`textDocument/hover`  
- Works for tables, table aliases and columns, but is poorly formatted  

`textDocument/documentSymbol`
- Table, column and references

