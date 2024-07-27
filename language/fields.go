package language

// Map grammar fields from tree sitter
// to variables
//
// TSV: value
// TSD: definition

// Table
var TSVTableName string = "table_name"

// Column
var TSDColumn string = "column_definition"
var TSVColumnName string = "column_name"
var TSVColumnNameValue string = "col_name"

// Relationships
var TSDRelationshipSide string = "relationship_definition_side"

func isField(input string, target string) bool {
	return input == string(target)
}
