const shared = require("./grammar_shared");
const table = require("./grammar_table");

module.exports = grammar({
  name: "dbml",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.table_definition
    ),


    ...table,
    ...shared,
	}
});
