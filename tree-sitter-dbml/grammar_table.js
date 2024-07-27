module.exports = {
    table_definition: $ => seq(
      'Table',
      $._space,
      field('table_name', $.table_name),
      $._space,
      '{',
      $._newline,
      field('column', repeat($.column_definition)),
      '}'
    ),

    table_name: $ => $.identifier,

    column_definition: $ => seq(
      field('col_name', $.identifier),
      $._space,
      field('col_type', $.identifier),
      choice(
        $._newline,
        $.column_settings
      )
    ),

    column_settings: $ => seq(
      '[',
      $.column_constraint,
      ']',
      $._newline
    ),

    column_constraint: $ => choice(
      'primary key',
      'pk',
      'null',
      'not null',
      'unique',
      'increment'
    ),

    // TODO: add keyed constraints: default: xxx, note: 'xxx'

};
