module.exports = {
    relationship_definition_short: $ => seq(
      $.Ref,
      optional(
        seq(
          $._space,
          field('relationship_name', $.ident_basic)
        )
      ),
      ':',
      $._space,
      $.relationship_definition_side,
      $._space,
      $.relationship_symbol,
      $.relationship_definition_side,
      optional(
        seq(
          '[',
          $.relationship_setting_definition,
          optional(
            repeat(
              seq(',', $.relationship_setting_definition)
            )
          ),
          ']'
        )
      )
    ),

    relationship_definition_inline: $ => seq(
      'ref:',
      $._space,
      $.relationship_symbol,
      $.relationship_definition_side,
    ),

    relationship_definition_long: $ => seq(
      $.Ref,
      optional(
        seq(
          $._space,
          field('relationship_name', $.ident_basic)
        )
      ),
      $._space,
      '{',
      $._newline,
      $.relationship_definition_side,
      $._space,
      $.relationship_symbol,
      $.relationship_definition_side,
      $._newline,
      '}'
    ),

    relationship_definition_side: $ => seq(
      $.table_name,
      $._dot,
      $.column_name,
    ),

    relationship_setting_definition: $ => seq(
      $.relationship_event,
      ':',
      $._space,
      $.relationship_action
    ),

    relationship_event: $ => choice(
      choice('delete', 'on_delete'),
      choice('update', 'on_update')
    ),

    relationship_action: $ => choice(
      'cascade',
      'restrict',
      'set null',
      'set default',
      'no action'
    ),

    relationship_symbol: $ => choice(
      '-',
      '<',
      '>',
      '<>'
    ),

    column_name: $ => field('column_name', $._ident_basic),
    table_name: $ => field('table_name', $._ident_basic),

    Ref: $ => token('Ref'),
};
