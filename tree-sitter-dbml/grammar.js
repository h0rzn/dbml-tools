const shared = require("./grammar_shared");
const project = require("./grammar_project");
const table = require("./grammar_table");
const relationship = require("./grammar_relationship");

module.exports = grammar({
  name: "dbml",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.project_definition,
      $.table_definition,
      $.relationship_definition_short,
      $.relationship_definition_long,
      $.comment
    ),

    comment: $ => /\/\/[^\n]*/,

    ...project,
    ...table,
    ...relationship,
    ...shared,


	},
});
