package language

// Map grammar fields from tree sitter
// to variables
//
// TSV: value
// TSD: definition

// Project
const TSDProject string = "project_definition"
const TSVProjectName string = "project_name"
const TSDProjectProperty string = "project_property_definition"
const TSVProjectPropertyKey string = "project_property_key"
const TSVProjectPropertyValue string = "project_property_value"

// Table
const TSDTable string = "table_definition"
const TSVTableName string = "table_name"

// Column
const TSDColumn string = "column_definition"
const TSVColumnName string = "column_name"
const TSVColumnNameValue string = "col_name"

// Relationships
const TSDRelationshipShort string = "relationship_definition_short"
const TSDRelationshipSide string = "relationship_definition_side"
const TSVRelationshipName string = "relationship_name"
const TSDRelationshipLong string = "relationship_definition_long"

func isField(input string, target string) bool {
	return input == string(target)
}
