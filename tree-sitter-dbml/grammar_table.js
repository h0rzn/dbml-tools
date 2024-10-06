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

      optional(field('column', repeat1($.column_definition))),
      optional(field('indexes', $.indexes_definition)),
      optional(field('note', $.note_standalone)),

      '}'
    ),

    table_name: $ => $.ident_basic,

    column_definition: $ => seq(
      field('col_name', $.column_name),
      $._space,
      field('col_type', $._column_type),
      choice(
        $._newline,
        field('col_settings', $.column_settings)
      )
    ),

    column_name: $ => $.ident_basic,

    _column_type: $ => choice(
      $.column_type_basic,
      $.column_type_ref,
    ),

    column_type_basic: $ => $._ident_basic,

    column_type_ref: $ => seq(
      field('column_ref_type_left', $.column_type_ref_item),
      $._dot,
      field('column_ref_type_right', $.column_type_ref_item),
    ),

    column_type_ref_item: $ => $._ident_basic,

    column_settings: $ => seq(
      seq(
        '[',
        choice(
          $.column_constraint,
          $.column_setting_default,
          $.note_setting,
          $.relationship_definition_inline
        ),
        optional(
          repeat(
            seq(',',
              choice(
                $.column_constraint,
                $.column_setting_default,
                $.note_setting,
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
        seq("'", repeat($.ident_basic), "'"),
        seq("`", repeat($.ident_basic), "`")
      )
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

    table_alias: $ => field('table_alias', $._ident_basic),
    //
    // Keywords
    //
    Table: $ => token('Table'),
    as: $ => token('as')
};
