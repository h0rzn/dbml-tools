module.exports = {
    table_definition: $ => seq(
      $.Table,
      $._space,
      field('table_name', $.table_name),

      optional(seq(
        $._space,
        $.as,
        field('table_alias_name', $.table_alias)
      )),

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
      choice(
        $.column_constraint,
        $.relationship_definition_inline
      ),
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

    table_alias: $ => field('table_alias', $._hidden_identifier),
    //
    // Keywords
    //
    Table: $ => token('Table'),
    as: $ => token('as')
};
