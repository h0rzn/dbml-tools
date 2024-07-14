package main

import (
	"fmt"

	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func TestCompletion(context *glsp.Context, params *protocol.CompletionParams) (interface{}, error) {
	fmt.Println("completion triggered")
	var completionItems []protocol.CompletionItem
	detail := "detail"
	insert := "insert"
	completionItems = append(completionItems, protocol.CompletionItem{
		Label:      "label",
		Detail:     &detail,
		InsertText: &insert,
	})

	return completionItems, nil
}

// build to /Users/theo/bin/dbml-lsp
// nvim: :source /Users/theo/.config/nvim/init.lua
// :LspInfo or :checkhealth lsp
