module.exports = {
    relationship_definition_short: $ => seq(
      $.Ref,
      choice(
        seq(field('relationship_name', $.identifier), ':'),
        ':'
      ),
      $._space,
      $.relationship_definition_side,
      $._space,
      $.relationship_symbol,
      $.relationship_definition_side,
    ),

    relationship_definition_side: $ => seq(
      $.table_name,
      $._dot,
      $.column_name,
    ),


    relationship_symbol: $ => choice(
      '-',
      '<',
      '>',
      '<>'
    ),


    column_name: $ => field('column_name', $._hidden_identifier),
    table_name: $ => field('table_name', $._hidden_identifier),

    Ref: $ => token('Ref')
};
