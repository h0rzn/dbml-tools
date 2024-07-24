package language

import (
	"fmt"
	"strings"
)

var colorReset = "\033[0m"
var colorRed = "\033[31m"
var colorYellow = "\033[33m"

type Renderer struct {
	document *Document
	builder  strings.Builder
	marker   struct {
		message       string
		markStartByte uint32
		markEndByte   uint32
		active        bool
	}
	lineOffset uint32
	offset     uint32
}

func NewRenderer(document *Document) *Renderer {
	return &Renderer{
		document: document,
	}
}

func (r *Renderer) Push(b byte) {
	if r.marker.active {
		switch r.offset {
		case r.marker.markStartByte:
			r.builder.WriteString(colorRed)
		case r.marker.markEndByte:
			r.builder.WriteString(colorReset)
		default:
		}
	}

	r.builder.WriteByte(b)
	r.offset += 1

	switch b {
	case '\n':
		if r.marker.active && len(r.marker.message) > 0 {
			// marker line
			length := r.marker.markEndByte - r.marker.markStartByte
			markerLine := r.createMarkerLine(r.lineOffset-1, length)
			r.builder.WriteString(markerLine)
			// message line

			message := colorYellow + "* " + r.marker.message + "\n" + colorReset
			r.builder.WriteString(r.padIn(message, r.lineOffset-1))
		}

		r.lineOffset = 0
		r.ResetMarker()
	case '\t':
		tabWidth := uint32(8 - (int(r.lineOffset) % 8))
		r.lineOffset += (tabWidth)
	default:
		r.lineOffset += 1
	}

	fmt.Printf("[PUSH: %q] offset: %d | lineOffset: %d\n", string(b), r.offset, r.lineOffset)
}

func (r *Renderer) PushSequence(sequence []byte) {
	for _, b := range sequence {
		r.Push(b)
	}
}

func (r *Renderer) PushString(data string) {
	dataLen, _ := r.builder.WriteString(data)
	r.lineOffset += uint32(dataLen)
}

func (r *Renderer) SetColor(color string) {
	r.builder.WriteString(color)
}

func (r *Renderer) ResetColor() {
	r.builder.WriteString(colorReset)
}

func (r *Renderer) SetMarker(startByte uint32, endByte uint32, message string) {
	r.marker.active = true
	r.marker.markStartByte = startByte
	r.marker.markEndByte = endByte
	r.marker.message = message
	fmt.Printf("SetMarker: %d - %d (%d) | msg %q\n", startByte, endByte, endByte-startByte, message)
}

// func (r *Renderer) PushMarkerLine() {
// 	// indent
// 	var builder strings.Builder
// 	for i := 0; i < int(r.marker.markStartByte)-1; i++ {
// 		builder.WriteByte(' ')
// 	}
//
// 	// mark range
// 	markedRangeLen := r.marker.markEndByte - r.marker.markStartByte // TODO: fix calculation
// 	for i := 0; i < int(markedRangeLen); i++ {
// 		builder.WriteByte('^')
// 	}
//
// 	builder.WriteByte('\n')
// }

func (r *Renderer) String() string {
	return r.builder.String()
}

// func (r *Renderer) PushMarked(sequence []byte, markStartByte uint32, markEndByte uint32, color string) {
// 	r.marked.markStartByte = markStartByte
// 	r.marked.markEndByte = markEndByte
//
// 	r.builder.WriteString(color)
// 	r.PushSequence(sequence)
// 	r.ResetColor()
//
// 	r.marked.active = true
// }

// Annotate a previously pushed marked sequence
// Format:
// <...> <marker>
// '*<...> <message>
// func (r *Renderer) AnnotateMarked(message string) error {
// 	if !r.marked.active {
// 		return errors.New("no marking in progress")
// 	}
//
// 	// indent
// 	var builder strings.Builder
// 	for i := 0; i < int(r.marked.markStartByte)-1; i++ {
// 		builder.WriteByte(' ')
// 	}
//
// 	// mark range
// 	markedRangeLen := 0 // TODO: fix calculation
// 	for i := 0; i < int(markedRangeLen); i++ {
// 		builder.WriteByte('^')
// 	}
// 	builder.WriteByte('\n')
//
// 	// message line
// 	errMessage := fmt.Sprintf("%s*\tError: %s%s\n", Yellow, message, Reset)
// 	builder.WriteString(errMessage)
//
// 	annotation := builder.String()
// 	r.builder.WriteString(annotation)
//
// 	r.ResetMarked()
// 	return nil
// }

func (r *Renderer) createMarkerLine(offset uint32, len uint32) string {
	// var builder strings.Builder
	// for i := 0; i < int(offset)-1; i++ {
	// 	builder.WriteByte(' ')
	// }
	//
	// // mark range
	// markedRangeLen := r.marker.markEndByte - r.marker.markStartByte
	// markedRangeLen := len
	// fmt.Printf("marker len %d, line offs %d\n", markedRangeLen, r.lineOffset)
	// for i := 0; i < int(markedRangeLen); i++ {
	// 	builder.WriteByte('^')
	// }
	// builder.WriteByte('\n')
	//

	var builder strings.Builder
	for i := 0; i < int(len); i++ {
		builder.WriteByte('^')
	}
	builder.WriteByte('\n')
	padding := r.padIn(builder.String(), offset)
	builder.WriteString(padding)

	return builder.String()
}

func (r *Renderer) padIn(text string, offset uint32) string {
	var builder strings.Builder
	for i := 0; i < int(offset)-1; i++ {
		builder.WriteByte(' ')
	}
	builder.WriteString(text)

	return builder.String()
}

// func (r *Renderer) AddMarkMessage(message string) {
// 	r.marked.message = message
// }

func (r *Renderer) ResetMarker() {
	// no need to reset last marker range
	// as it gets overwritten by PushMarked
	// and AnnotateMark requires recent marks to be set
	r.marker.active = false
}
