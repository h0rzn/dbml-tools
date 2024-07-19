module.exports = {
    // table_definition: $ => seq(
    //   'Table',
    //   $._space,
    //   $.table_name,
    //   $._space,
    //   '{',
    //   $._newline,
    //   repeat($.column_definition),
    //   '}'
    // ),
    //
    // table_name: $ => $.identifier,
    //
    // column_definition: $ => seq(
    //   field('col_name', $.identifier),
    //   $._space,
    //   field('col_type', $.identifier),
    //   choice(
    //     $._newline,
    //     $.column_settings
    //   )
    // ),
    //
    // column_settings: $ => seq(
    //   '[',
    //   $.column_constraint,
    //   ']',
    //   $._newline
    // ),
    //
    // column_constraint: $ => choice(
    //   'primary key',
    //   'pk',
    //   'null',
    //   'not null',
    //   'unique',
    //   'increment'
    // ),
    //
    // // TODO: add keyed constraints: default: xxx, note: 'xxx'


    relationship_definition_short: $ => seq(
      'Ref',
      choice(
        field('relationship_name', seq($.identifier, ':')),
        ':'
      ),
      $._space,
      $.relationship_definition_side,
      $._space,
      $.relationship_symbol,
      $.relationship_definition_side,
    ),

    relationship_definition_side: $ => seq(
      field('relationship_table_name', $.identifier),
      '.',
      field('relationship_column_name', $.identifier)
    ),


    relationship_symbol: $ => choice(
      '-',
      '<',
      '>',
      '<>'
    )


};
