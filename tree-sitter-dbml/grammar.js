const shared = require("./grammar_shared");
const table = require("./grammar_table");
const relationship = require("./grammar_relationship");

module.exports = grammar({
  name: "dbml",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.table_definition,
      $.relationship_definition_short
    ),


    ...table,
    ...relationship,
    ...shared,
	}
});
