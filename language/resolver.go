package language

type ResolveResult struct {
	Content string
	// If content could be resolved
	Resolved bool
}

func ResolveAt(document *Document, line uint32, column uint32) (ResolveResult, error) {
	var resolveResult ResolveResult

	src, err := document.NodeAt(line, column)
	if err != nil {
		return resolveResult, err
	}

	switch src.Node.Type() {
	case "column_name":
		result, err := locateColumn(document, src)
		if err != nil {
			return resolveResult, err
		}

		content, _ := document.ContentsRange(result.Start.Offset, result.End.Offset)
		resolveResult.Content = string(content)

	case "table_name":
		result, err := locateTable(document, src)
		if err != nil {
			return resolveResult, err
		}

		content, _ := document.ContentsRange(result.Start.Offset, result.End.Offset)
		resolveResult.Content = string(content)

	default:
		return ResolveResult{Content: "", Resolved: false}, nil
	}

	resolveResult.Resolved = true

	return resolveResult, nil
}
