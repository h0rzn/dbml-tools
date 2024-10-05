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

      field('column', repeat1($.column_definition)),
      field('indexes', optional($.indexes_definition)),

      '}'
    ),

    table_name: $ => $.identifier,

    column_definition: $ => seq(
      field('col_name', $.column_name),
      $._space,
      field('col_type', $._column_type),
      choice(
        $._newline,
        field('col_settings', $.column_settings)
      )
    ),

    column_name: $ => $._identifier2,

    _column_type: $ => choice(
      $.column_type_basic,
      $.column_type_ref,
    ),

    column_type_basic: $ => $._identifier2,

    column_type_ref: $ => seq(
      field('column_ref_type_left', $.column_type_ref_item),
      $._dot,
      field('column_ref_type_right', $.column_type_ref_item),
    ),

    column_type_ref_item: $ => $._identifier2,

    column_settings: $ => seq(
      seq(
        '[',
        choice(
          $.column_constraint,
          $.column_setting_default,
          $.column_setting_note,
          $.relationship_definition_inline
        ),
        optional(
          repeat(
            seq(',',
              choice(
                $.column_constraint,
                $.column_setting_default,
                $.column_setting_note,
                $.relationship_definition_inline,
              )
            )
          )
        ),
        ']'
      )
    ),


    column_setting_default: $ => seq(
      'default',
      ':',
      choice(
        seq("'", repeat($.identifier), "'"),
        seq("`", repeat($.identifier), "`")
      )
    ),

    column_setting_note: $ => seq(
      'note',
      ':',
      $.enquoted_identifier_multi
    ),

    column_constraint: $ => choice(
      'primary key',
      'pk',
      'null',
      'not null',
      'unique',
      'increment'
    ),

    _identifier2: $ => /[a-zA-Z0-9_\-()]+/,

    // TODO: add keyed constraints: default: xxx, note: 'xxx'

    table_alias: $ => field('table_alias', $._hidden_identifier),
    //
    // Keywords
    //
    Table: $ => token('Table'),
    as: $ => token('as')
};
