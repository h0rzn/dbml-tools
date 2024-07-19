package language

/*
#cgo CFLAGS: -I${SRCDIR}/../tree-sitter-dbml/src/tree_sitter
#cgo LDFLAGS: -L${SRCDIR}/../tree-sitter-dbml/src -lparser
#include "./../tree-sitter-dbml/src/tree_sitter/parser.h"

// Declare the external function defined in the C code
extern TSLanguage *tree_sitter_dbml();
*/
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func ts_language() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_dbml())
}

func GetLanguage() *sitter.Language {
	return sitter.NewLanguage(ts_language())
}
