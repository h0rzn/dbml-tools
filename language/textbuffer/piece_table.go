package textbuffer

import (
	"fmt"
)

type Piece struct {
	// start is start index for this piece for either []original
	// or []add. end is start + length
	start int
	// length is length of piece
	length int
	// flags if contents are stored in PieceTable.original (false)
	// or PieceTable.add (true)
	buffer bool
}

type PieceTable struct {
	// original holds the original version of the document
	original []byte
	// add holds all modifications
	add []byte
	// pieces stores all pieces of this piece table
	pieces []Piece
}

// NewPieceTable creates a new *PieceTable, which has one piece
// representing the whole document
func NewPieceTable(content []byte) *PieceTable {
	fmt.Println("NewPieceTable: length:", len(content))
	return &PieceTable{
		original: content,
		add:      []byte{},
		pieces: []Piece{
			{start: 0, length: len(content), buffer: false},
		},
	}
}

// Insert inserts text at offset. if internalOffset for the found piece
// is not 0, the piece will be split into left and right and the "insertion"-piece
// will be inserted between them.
func (pt *PieceTable) Insert(offset int, text []byte) (oldOffset int, newOffset int) {
	if !offsetOK(offset) {
		return
	}

	newPiece := Piece{
		start:  len(pt.add),
		length: len(text),
		buffer: true,
	}
	pt.add = append(pt.add, text...)

	index, internalOffset := pt.findPieceIndex(offset)
	// insertion at start of piece
	// if internalOffset == 0 {
	// 	originalPiece := pt.pieces[index]
	// 	fmt.Println("Insert: offset 0", "index:", index, originalPiece.start)
	// 	originalPiece.start += newPiece.length + 1
	// 	originalPiece.length -= newPiece.length + 1
	//
	// 	updatedPieces := []Piece{newPiece, originalPiece}
	// 	// followingPieces := pt.pieces
	// 	// pt.pieces = append(pt.pieces, append([]Piece{newPiece, originalPiece}, pt.pieces[:index+1]...)...)
	// 	pt.pieces = updatedPieces
	// 	for i, piece := range pt.pieces {
	// 		fmt.Println(i, piece)
	// 	}
	//
	// 	return
	// }

	// split existing piece
	// insert new piece
	currentPiece := pt.pieces[index]
	pieceSplit := []Piece{}
	leftPiece := Piece{
		start:  currentPiece.start,
		length: internalOffset,
		buffer: currentPiece.buffer,
	}
	fmt.Println("insert left", pt.PieceInfo(leftPiece))
	if leftPiece.length > 0 {
		pieceSplit = append(pieceSplit, leftPiece)
	}

	pieceSplit = append(pieceSplit, newPiece)

	rightPiece := Piece{
		start:  currentPiece.start + internalOffset,
		length: currentPiece.length - internalOffset,
		buffer: currentPiece.buffer,
	}
	fmt.Println("insert right", pt.PieceInfo(rightPiece))
	if rightPiece.length > 0 {
		pieceSplit = append(pieceSplit, rightPiece)
	}

	// update table pieces
	// newPieceSlice := []Piece{leftPiece, newPiece, rightPiece}
	newPieceSlice := pieceSplit
	pt.pieces = append(pt.pieces[:index], append(newPieceSlice, pt.pieces[index+1:]...)...)

	return offset, offset + offset
}

// Delete deletes a range of bytes with length length at offset
func (pt *PieceTable) Delete(offset int, length int) (oldEnd int, newEnd int) {
	fmt.Printf("Delete: offset: %d length: %d\n", offset, length)
	if !offsetOK(offset) {
		fmt.Println("Delete: ABORT", offset, length)
		return
	}
	startIndex, startOffset := pt.findPieceIndex(offset)
	endIndex, endOffset := pt.findPieceIndex(offset + length)

	fmt.Printf("Delete: %d (o: %d) - %d (o: %d)\n", startIndex, startOffset, endIndex, endOffset)

	newPieces := make([]Piece, 0, len(pt.pieces))
	newPieces = append(newPieces, pt.pieces[:startIndex]...)
	// start piece
	if startOffset > 0 {
		newPieces = append(newPieces, Piece{
			start:  pt.pieces[startIndex].start,
			length: startOffset,
			buffer: pt.pieces[startIndex].buffer,
		})
	}
	// end piece
	if endOffset < pt.pieces[endIndex].length {
		newPieces = append(newPieces, Piece{
			start:  pt.pieces[endIndex].start + endOffset,
			length: pt.pieces[endIndex].length - endOffset,
			buffer: pt.pieces[endIndex].buffer,
		})
	}

	// append remaining pieces (pieces after index endIndex)
	newPieces = append(newPieces, pt.pieces[endIndex+1:]...)

	pt.pieces = newPieces

	return endOffset, startOffset
}

// Replace replaces text starting with offset until len(replacement)
// and returns old end index (previous contents) and new end index (replacement)
func (pt *PieceTable) Replace(offset int, replacement []byte) (oldEnd int, newEnd int) {
	fmt.Printf("Replace: %d %q\n", offset, string(replacement))
	if len(replacement) == 0 || !offsetOK(offset) {
		return 0, 0
	}

	replacementLen := len(replacement)
	pieceIndex, pieceOffset := pt.findPieceIndex(offset)
	pieceEndIndex, pieceEndOffset := pt.findPieceIndex(offset + replacementLen)
	piece := pt.pieces[pieceIndex]

	// if replacement covers whole piece,
	// just update that piece
	if piece.length == replacementLen {
		piece.start = len(pt.add)
		piece.length = replacementLen
		piece.buffer = true

		pt.add = append(pt.add, replacement...)
		pt.pieces = append(pt.pieces[:pieceIndex], append([]Piece{piece}, pt.pieces[pieceEndIndex:]...)...)

		// TODO: implement endpoint calculation

		return 0, 0
	}

	// replacements inside single piece
	if pieceIndex == pieceEndIndex {
		// replacement on first byte of piece
		var updatedPieces []Piece
		if pieceOffset == 0 {
			leftPiece, rightPiece := pt.splitPiece(pieceIndex, offset)
			leftPiece.start = len(pt.add)
			leftPiece.length = replacementLen
			leftPiece.buffer = true

			updatedPieces = []Piece{leftPiece, rightPiece}

			oldEnd = 0
			newEnd = rightPiece.start + leftPiece.length

		} else {
			leftPiece, modPiece, restPiece := pt.extractSplit(pieceIndex, pieceOffset, replacementLen)
			updatedPieces = []Piece{leftPiece, modPiece, restPiece}
		}

		pt.add = append(pt.add, replacement...)
		pt.pieces = append(pt.pieces[:pieceEndIndex], append(updatedPieces, pt.pieces[pieceEndIndex+1:]...)...)

		return
	}

	// if replace concerns > 1 pieces, relevant pieces
	// have to be split, so that the replace text can be
	// correctly distributed over pieces
	if pieceIndex != pieceEndIndex {
		// list of pieces that will be added or replaced as modified
		updatedPieces := []Piece{}

		// left range
		replaceRangeLeft := replacement[pieceOffset : pieceOffset+piece.length]
		updatedPieceLeft := piece
		updatedPieceLeft.buffer = true
		updatedPieceLeft.start = len(pt.add)

		updatedPieces = append(updatedPieces, updatedPieceLeft)
		pt.add = append(pt.add, replaceRangeLeft...)

		// right range
		pieceRight := pt.pieces[pieceIndex+1]
		replaceRangeRight := replacement[pieceEndIndex+1 : pieceEndOffset+piece.length]
		// if the replacement range for right piece does not cover
		// its whole length we have to split of the range that is covered
		if pieceRight.length != len(replaceRangeRight) {
			rl, rr := pt.splitPiece(pieceIndex+1, pieceEndOffset)
			rl.buffer = true
			rl.start = len(pt.add)

			updatedPieces = append(updatedPieces, rl, rr)
		} else {
			updatedPieceRight := pieceRight
			updatedPieceRight.buffer = true
			updatedPieceRight.start = len(pt.add)

			updatedPieces = append(updatedPieces, updatedPieceRight)
		}
		pt.add = append(pt.add, replaceRangeRight...)

		pt.pieces = append(pt.pieces[:pieceIndex], append(updatedPieces, pt.pieces[pieceEndIndex+1:]...)...)

		// TODO: implement endpoint calculation

		return 0, 0
	}

	panic("unhandled case for replace")
}

func (pt *PieceTable) Update(offset int, text []byte) (int, int) {
	// NOTE: Insert when:
	// piece is sourcing from pt.original
	// and internal offset == 0
	_, pieceOffset := pt.findPieceIndex(offset)
	if pieceOffset == 0 {
		fmt.Println("Update: Insert")

		return pt.Insert(offset, text)
	}

	fmt.Println("Update: Replace")
	return pt.Replace(offset, text)

}

// splitPiece splits a piece into two pieces. right piece starts after left piece
func (pt *PieceTable) splitPiece(index int, offset int) (leftPiece Piece, rightPiece Piece) {
	currentPiece := pt.pieces[index]
	leftPiece = Piece{
		start:  currentPiece.start,
		length: offset,
		buffer: currentPiece.buffer,
	}
	rightPiece = Piece{
		start:  currentPiece.start + offset,
		length: currentPiece.length - offset,
		buffer: currentPiece.buffer,
	}

	return leftPiece, rightPiece
}

// extractSplit splits node of a given index into three pieces.
// left is left node. extracted is the piece of length extractLength
// and right is a piece referencing all following text.
func (pt *PieceTable) extractSplit(index int, offset int, extractLength int) (left Piece, extracted Piece, right Piece) {
	piece := pt.pieces[index]
	left = Piece{
		start:  piece.start,
		length: offset,
		buffer: piece.buffer,
	}

	extracted = Piece{
		start:  len(pt.add),
		length: extractLength,
		buffer: true,
	}

	// right = Piece{
	// 	start: (left.start + left.length) + (extracted.start + extracted.length),
	// 	// start:  (extracted.start + extractLength),
	// 	length: piece.length - offset - extractLength,
	// 	buffer: piece.buffer,
	// }
	right = Piece{
		start:  piece.start + offset + extractLength,
		length: piece.length - extractLength - offset,
		buffer: piece.buffer,
	}
	return left, extracted, right
}

// Contents returns the contents stored
func (pt *PieceTable) Contents() []byte {
	var result []byte
	for _, piece := range pt.pieces {
		endIndex := piece.start + piece.length
		if piece.buffer {
			result = append(result, pt.add[piece.start:endIndex]...)
		} else {
			result = append(result, pt.original[piece.start:endIndex]...)
		}
	}
	return result
}

// ContentsRange returns the contents for in range [start:end]
func (pt *PieceTable) ContentsRange(start uint32, end uint32) []byte {
	if start >= end {
		return []byte{}
	}

	// fmt.Printf("ContentsRange: %d - %d\n", start, end)

	result := make([]byte, 0, end-start)
	currentOffset := uint32(0)
	for _, piece := range pt.pieces {
		// byte offsets for current piece
		pieceStart := currentOffset
		pieceEnd := currentOffset + uint32(piece.length)

		// fast forward if start offset has
		// not been reached yet
		if pieceEnd <= start {
			currentOffset = pieceEnd
			continue
		}

		// exit if current piece end offset is
		// outside of requested range
		if pieceStart >= end {
			break
		}

		// overlaps between current piece and
		// requested range
		overlapStart := max(pieceStart, start)
		overlapEnd := min(pieceEnd, end)
		// start and end offset for byte buffer
		bufferOffset := overlapStart - pieceStart
		bufferEnd := overlapEnd - pieceStart

		// indices for accessing bytes from piece
		startIndex := piece.start + int(bufferOffset)
		endIndex := piece.start + int(bufferEnd)
		if piece.buffer {
			result = append(result, pt.add[startIndex:endIndex]...)
		} else {
			result = append(result, pt.original[startIndex:endIndex]...)
		}

		currentOffset = pieceEnd

		// exit if piece end is
		// end of requested range
		if currentOffset >= end {
			break
		}
	}

	return result
}

// PieceText returns the current contents of the stored document
func (pt *PieceTable) PieceText(piece Piece) []byte {
	endIndex := piece.start + piece.length
	if piece.buffer {
		return pt.add[piece.start:endIndex]
	}

	return pt.original[piece.start:endIndex]
}

func (pt *PieceTable) PieceInfo(piece Piece) string {
	return fmt.Sprintf("Piece: %+v | text: %q\n", piece, string(pt.PieceText(piece)))
	// return fmt.Sprintf("Piece: %+v\n", piece)
}

func (pt *PieceTable) Info() {
	fmt.Println("=== INFO ===")
	fmt.Printf("pt.original[%d]\n", len(pt.original))
	fmt.Printf("pt.add[%d]\n", len(pt.add))
	for _, piece := range pt.pieces {
		// fmt.Printf("Piece %d: %+v | [%q]\n", i, piece, string(pt.PieceText(piece)))
		fmt.Print(pt.PieceInfo(piece))
	}
}

// findPieceIndex finds the index and internalOffset of a piece by its offset
func (pt *PieceTable) findPieceIndex(offset int) (index int, internalOffset int) {
	currentOffset := 0
	for i, piece := range pt.pieces {
		if currentOffset+piece.length > offset {
			return i, offset - currentOffset
		}
		currentOffset += piece.length
	}

	index = len(pt.pieces) - 1
	internalOffset = pt.pieces[len(pt.pieces)-1].length
	return index, internalOffset
}

// offsetOK returns true if offset >= 0
func offsetOK(offset int) bool {
	return offset >= 0
}

func max(a, b uint32) uint32 {
	if a > b {
		return a
	}

	return b
}

func min(a, b uint32) uint32 {
	if a < b {
		return a
	}

	return b
}
