package lsp

import (
	"context"
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
)

type Provider struct {
	Parser      *sitter.Parser
	tree        *sitter.Tree
	sourceCode  []byte
	lineIndexes []int
}

func NewProvider() *Provider {
	return &Provider{
		Parser:      sitter.NewParser(),
		sourceCode:  make([]byte, 0),
		lineIndexes: make([]int, 0),
	}
}

func (p *Provider) Init(language *sitter.Language) error {
	p.Parser.SetLanguage(language)

	return nil
}

func (p *Provider) Load(sourceCode []byte) error {
	p.sourceCode = sourceCode
	tree, err := p.Parser.ParseCtx(context.Background(), nil, sourceCode)
	if err != nil {
		return err
	}
	p.tree = tree

	p.indexLindes()

	return nil
}

func (p *Provider) indexLindes() {
	if len(p.sourceCode) == 0 {
		return
	}

	indexes := make([]int, 0)
	currentLine := 0
	for i, charByte := range p.sourceCode {
		if charByte == '\n' {
			indexes = append(indexes, i)
			currentLine += 1
		}
	}
	// WARN: test if this breaks sourceCode access
	p.lineIndexes = indexes[:len(indexes)-1]
}

func (p *Provider) GetItemName(line uint32, offset uint32) (string, error) {
	if int(line) > len(p.lineIndexes) {
		return "", fmt.Errorf("line out of bounds: %d/%d", line, len(p.lineIndexes))
	}

	return "", nil

}

func (p *Provider) Info() {
	fmt.Printf("Provider: lines: %d, sourceCode bytes len: %d\n", len(p.lineIndexes), len(p.sourceCode))

}
