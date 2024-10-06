const shared = require("./grammar_shared");
const project = require("./grammar_project");

const table = require("./grammar_table");
const indexes_definition = require("./grammar_table_indexes.js");

const relationship = require("./grammar_relationship");
const enums = require("./grammar_enum.js");

const notes = require("./grammar_notes.js");

module.exports = grammar({
  name: "dbml",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.project_definition,
      $.table_definition,
      $.enum_definition,
      $.relationship_definition_short,
      $.relationship_definition_long,
      $.comment
    ),

    comment: $ => /\/\/[^\n]*/,

    ...project,

    ...table,
    ...indexes_definition,

    ...enums,

    ...relationship,
    ...shared,

    ...notes,


	},
});
