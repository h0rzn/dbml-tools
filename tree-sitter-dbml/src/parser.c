#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_Table = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_primarykey = 6,
  anon_sym_pk = 7,
  anon_sym_null = 8,
  anon_sym_notnull = 9,
  anon_sym_unique = 10,
  anon_sym_increment = 11,
  anon_sym_Ref = 12,
  anon_sym_COLON = 13,
  anon_sym_DOT = 14,
  anon_sym_DASH = 15,
  anon_sym_LT = 16,
  anon_sym_GT = 17,
  anon_sym_LT_GT = 18,
  sym_identifier = 19,
  sym__newline = 20,
  sym__space = 21,
  sym_source_file = 22,
  sym__definition = 23,
  sym_table_definition = 24,
  sym_table_name = 25,
  sym_column_definition = 26,
  sym_column_settings = 27,
  sym_column_constraint = 28,
  sym_relationship_definition_short = 29,
  sym_relationship_definition_side = 30,
  sym_relationship_symbol = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_table_definition_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Table] = "Table",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_pk] = "pk",
  [anon_sym_null] = "null",
  [anon_sym_notnull] = "not null",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [anon_sym_Ref] = "Ref",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [sym_identifier] = "identifier",
  [sym__newline] = "_newline",
  [sym__space] = "_space",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_table_definition] = "table_definition",
  [sym_table_name] = "table_name",
  [sym_column_definition] = "column_definition",
  [sym_column_settings] = "column_settings",
  [sym_column_constraint] = "column_constraint",
  [sym_relationship_definition_short] = "relationship_definition_short",
  [sym_relationship_definition_side] = "relationship_definition_side",
  [sym_relationship_symbol] = "relationship_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [sym_identifier] = sym_identifier,
  [sym__newline] = sym__newline,
  [sym__space] = sym__space,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_table_definition] = sym_table_definition,
  [sym_table_name] = sym_table_name,
  [sym_column_definition] = sym_column_definition,
  [sym_column_settings] = sym_column_settings,
  [sym_column_constraint] = sym_column_constraint,
  [sym_relationship_definition_short] = sym_relationship_definition_short,
  [sym_relationship_definition_side] = sym_relationship_definition_side,
  [sym_relationship_symbol] = sym_relationship_symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_increment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_column_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_column_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_short] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_side] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_col_name = 1,
  field_col_type = 2,
  field_relationship_column_name = 3,
  field_relationship_name = 4,
  field_relationship_table_name = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_col_type] = "col_type",
  [field_relationship_column_name] = "relationship_column_name",
  [field_relationship_name] = "relationship_name",
  [field_relationship_table_name] = "relationship_table_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_relationship_column_name, 2},
    {field_relationship_table_name, 0},
  [2] =
    {field_relationship_name, 1},
    {field_relationship_name, 2},
  [4] =
    {field_col_name, 0},
    {field_col_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 12,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '-', 57,
        '.', 56,
        ':', 55,
        '<', 58,
        '>', 59,
        'R', 10,
        'T', 6,
        '[', 46,
        ']', 47,
        'i', 28,
        'n', 32,
        'p', 19,
        'u', 30,
        '{', 44,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '[') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '}') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'q') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__definition] = STATE(3),
    [sym_table_definition] = STATE(3),
    [sym_relationship_definition_short] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Table] = ACTIONS(5),
    [anon_sym_Ref] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(40), 1,
      sym_column_constraint,
    ACTIONS(9), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [12] = 4,
    ACTIONS(5), 1,
      anon_sym_Table,
    ACTIONS(7), 1,
      anon_sym_Ref,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__definition,
      sym_table_definition,
      sym_relationship_definition_short,
      aux_sym_source_file_repeat1,
  [28] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_Table,
    ACTIONS(18), 1,
      anon_sym_Ref,
    STATE(4), 4,
      sym__definition,
      sym_table_definition,
      sym_relationship_definition_short,
      aux_sym_source_file_repeat1,
  [44] = 3,
    ACTIONS(23), 1,
      anon_sym_LT,
    STATE(16), 1,
      sym_relationship_symbol,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [56] = 3,
    ACTIONS(23), 1,
      anon_sym_LT,
    STATE(23), 1,
      sym_relationship_symbol,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [68] = 3,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(7), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [79] = 3,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(7), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [90] = 3,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [101] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [107] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [113] = 1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [119] = 3,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym__newline,
    STATE(20), 1,
      sym_column_settings,
  [129] = 1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [135] = 1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [141] = 2,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(14), 1,
      sym_relationship_definition_side,
  [148] = 2,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(38), 1,
      sym_relationship_definition_side,
  [155] = 2,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(33), 1,
      sym_relationship_definition_side,
  [162] = 1,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [167] = 1,
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [172] = 2,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(60), 1,
      sym_identifier,
  [179] = 2,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(25), 1,
      sym_table_name,
  [186] = 2,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(11), 1,
      sym_relationship_definition_side,
  [193] = 1,
    ACTIONS(40), 1,
      sym__space,
  [197] = 1,
    ACTIONS(64), 1,
      sym__space,
  [201] = 1,
    ACTIONS(66), 1,
      anon_sym_COLON,
  [205] = 1,
    ACTIONS(68), 1,
      anon_sym_DOT,
  [209] = 1,
    ACTIONS(70), 1,
      sym__space,
  [213] = 1,
    ACTIONS(72), 1,
      sym__space,
  [217] = 1,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
  [221] = 1,
    ACTIONS(76), 1,
      sym__newline,
  [225] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [229] = 1,
    ACTIONS(80), 1,
      sym__space,
  [233] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [237] = 1,
    ACTIONS(84), 1,
      sym_identifier,
  [241] = 1,
    ACTIONS(86), 1,
      sym__space,
  [245] = 1,
    ACTIONS(88), 1,
      sym__space,
  [249] = 1,
    ACTIONS(90), 1,
      sym__space,
  [253] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
  [257] = 1,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
  [261] = 1,
    ACTIONS(96), 1,
      sym__newline,
  [265] = 1,
    ACTIONS(98), 1,
      sym__space,
  [269] = 1,
    ACTIONS(100), 1,
      sym_identifier,
  [273] = 1,
    ACTIONS(102), 1,
      sym_identifier,
  [277] = 1,
    ACTIONS(104), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 135,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 148,
  [SMALL_STATE(18)] = 155,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 167,
  [SMALL_STATE(21)] = 172,
  [SMALL_STATE(22)] = 179,
  [SMALL_STATE(23)] = 186,
  [SMALL_STATE(24)] = 193,
  [SMALL_STATE(25)] = 197,
  [SMALL_STATE(26)] = 201,
  [SMALL_STATE(27)] = 205,
  [SMALL_STATE(28)] = 209,
  [SMALL_STATE(29)] = 213,
  [SMALL_STATE(30)] = 217,
  [SMALL_STATE(31)] = 221,
  [SMALL_STATE(32)] = 225,
  [SMALL_STATE(33)] = 229,
  [SMALL_STATE(34)] = 233,
  [SMALL_STATE(35)] = 237,
  [SMALL_STATE(36)] = 241,
  [SMALL_STATE(37)] = 245,
  [SMALL_STATE(38)] = 249,
  [SMALL_STATE(39)] = 253,
  [SMALL_STATE(40)] = 257,
  [SMALL_STATE(41)] = 261,
  [SMALL_STATE(42)] = 265,
  [SMALL_STATE(43)] = 269,
  [SMALL_STATE(44)] = 273,
  [SMALL_STATE(45)] = 277,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 8, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dbml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
