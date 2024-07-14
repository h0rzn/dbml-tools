package tree_sitter_dbml_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-dbml"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dbml.Language())
	if language == nil {
		t.Errorf("Error loading Dbml grammar")
	}
}
