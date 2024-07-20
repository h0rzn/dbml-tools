package cmd

import (
	"io"
	"os"

	"github.com/h0rzn/dbml-lsp-ts/language"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func documentFromArg(pathArg string) (*language.Document, error) {
	documentItem, err := createDocumentItem(pathArg)
	if err != nil {
		return nil, err
	}

	document := language.NewDocument(documentItem)
	err = document.Init()
	if err != nil {
		return nil, err
	}

	return document, nil
}

func createDocumentItem(path string) (protocol.TextDocumentItem, error) {
	item := protocol.TextDocumentItem{}

	file, err := os.Open(path)
	if err != nil {
		panic(err)
	}
	data, err := io.ReadAll(file)
	if err != nil {
		return item, err
	}

	item.Text = string(data)

	return item, nil
}
