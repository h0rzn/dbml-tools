#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_DASH = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_LT_GT = 17,
  aux_sym__hidden_identifier_token1 = 18,
  sym__newline = 19,
  sym__space = 20,
  sym__dot = 21,
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
  sym_column_name = 32,
  sym__hidden_identifier = 33,
  sym_identifier = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_table_definition_repeat1 = 36,
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
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [aux_sym__hidden_identifier_token1] = "_hidden_identifier_token1",
  [sym__newline] = "_newline",
  [sym__space] = "_space",
  [sym__dot] = "_dot",
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
  [sym_column_name] = "column_name",
  [sym__hidden_identifier] = "_hidden_identifier",
  [sym_identifier] = "identifier",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [aux_sym__hidden_identifier_token1] = aux_sym__hidden_identifier_token1,
  [sym__newline] = sym__newline,
  [sym__space] = sym__space,
  [sym__dot] = sym__dot,
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
  [sym_column_name] = sym_column_name,
  [sym__hidden_identifier] = sym__hidden_identifier,
  [sym_identifier] = sym_identifier,
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
  [aux_sym__hidden_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
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
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym__hidden_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
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
  field_column = 3,
  field_column_name = 4,
  field_relationship_name = 5,
  field_table_name = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_col_type] = "col_type",
  [field_column] = "column",
  [field_column_name] = "column_name",
  [field_relationship_name] = "relationship_name",
  [field_table_name] = "table_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_table_name, 0},
  [1] =
    {field_column_name, 0},
  [2] =
    {field_table_name, 2},
  [3] =
    {field_column, 6},
    {field_table_name, 2},
  [5] =
    {field_relationship_name, 1},
  [6] =
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
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 21,
  [34] = 17,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 27,
  [46] = 29,
  [47] = 47,
  [48] = 27,
  [49] = 49,
  [50] = 50,
  [51] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '-', 56,
        '.', 63,
        ':', 55,
        '<', 57,
        '>', 58,
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
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '[') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(62);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__hidden_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__dot);
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
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__definition] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_relationship_definition_short] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Table] = ACTIONS(5),
    [anon_sym_Ref] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_Table,
    ACTIONS(7), 1,
      anon_sym_Ref,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__definition,
      sym_table_definition,
      sym_relationship_definition_short,
      aux_sym_source_file_repeat1,
  [16] = 2,
    STATE(42), 1,
      sym_column_constraint,
    ACTIONS(11), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
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
    STATE(10), 1,
      sym_relationship_symbol,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [56] = 4,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      aux_sym__hidden_identifier_token1,
    STATE(30), 1,
      sym_identifier,
    STATE(6), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [70] = 3,
    ACTIONS(23), 1,
      anon_sym_LT,
    STATE(11), 1,
      sym_relationship_symbol,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [82] = 4,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      aux_sym__hidden_identifier_token1,
    STATE(30), 1,
      sym_identifier,
    STATE(9), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [96] = 4,
    ACTIONS(32), 1,
      aux_sym__hidden_identifier_token1,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_identifier,
    STATE(6), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [110] = 4,
    ACTIONS(36), 1,
      aux_sym__hidden_identifier_token1,
    STATE(22), 1,
      sym_relationship_definition_side,
    STATE(46), 1,
      sym__hidden_identifier,
    STATE(51), 1,
      sym_table_name,
  [123] = 4,
    ACTIONS(36), 1,
      aux_sym__hidden_identifier_token1,
    STATE(14), 1,
      sym_relationship_definition_side,
    STATE(46), 1,
      sym__hidden_identifier,
    STATE(51), 1,
      sym_table_name,
  [136] = 4,
    ACTIONS(36), 1,
      aux_sym__hidden_identifier_token1,
    STATE(35), 1,
      sym_relationship_definition_side,
    STATE(38), 1,
      sym_table_name,
    STATE(46), 1,
      sym__hidden_identifier,
  [149] = 4,
    ACTIONS(36), 1,
      aux_sym__hidden_identifier_token1,
    STATE(37), 1,
      sym_relationship_definition_side,
    STATE(38), 1,
      sym_table_name,
    STATE(46), 1,
      sym__hidden_identifier,
  [162] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [168] = 3,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      sym__newline,
    STATE(26), 1,
      sym_column_settings,
  [178] = 3,
    ACTIONS(44), 1,
      aux_sym__hidden_identifier_token1,
    STATE(29), 1,
      sym__hidden_identifier,
    STATE(44), 1,
      sym_table_name,
  [188] = 1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [194] = 3,
    ACTIONS(48), 1,
      anon_sym_COLON,
    ACTIONS(50), 1,
      aux_sym__hidden_identifier_token1,
    STATE(47), 1,
      sym_identifier,
  [204] = 1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [210] = 3,
    ACTIONS(54), 1,
      aux_sym__hidden_identifier_token1,
    STATE(33), 1,
      sym__hidden_identifier,
    STATE(34), 1,
      sym_column_name,
  [220] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [226] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [232] = 3,
    ACTIONS(60), 1,
      aux_sym__hidden_identifier_token1,
    STATE(17), 1,
      sym_column_name,
    STATE(21), 1,
      sym__hidden_identifier,
  [242] = 1,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_Table,
      anon_sym_Ref,
  [248] = 2,
    ACTIONS(64), 1,
      aux_sym__hidden_identifier_token1,
    STATE(15), 1,
      sym_identifier,
  [255] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      aux_sym__hidden_identifier_token1,
  [260] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      sym__newline,
  [267] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      aux_sym__hidden_identifier_token1,
  [272] = 1,
    ACTIONS(74), 1,
      sym__space,
  [276] = 1,
    ACTIONS(76), 1,
      sym__space,
  [280] = 1,
    ACTIONS(78), 1,
      aux_sym__hidden_identifier_token1,
  [284] = 1,
    ACTIONS(80), 1,
      sym__space,
  [288] = 1,
    ACTIONS(56), 1,
      sym__space,
  [292] = 1,
    ACTIONS(46), 1,
      sym__space,
  [296] = 1,
    ACTIONS(82), 1,
      sym__space,
  [300] = 1,
    ACTIONS(84), 1,
      sym__newline,
  [304] = 1,
    ACTIONS(86), 1,
      sym__space,
  [308] = 1,
    ACTIONS(88), 1,
      sym__dot,
  [312] = 1,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
  [316] = 1,
    ACTIONS(92), 1,
      sym__space,
  [320] = 1,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
  [324] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
  [328] = 1,
    ACTIONS(98), 1,
      sym__newline,
  [332] = 1,
    ACTIONS(100), 1,
      sym__space,
  [336] = 1,
    ACTIONS(70), 1,
      sym__space,
  [340] = 1,
    ACTIONS(74), 1,
      sym__dot,
  [344] = 1,
    ACTIONS(102), 1,
      anon_sym_COLON,
  [348] = 1,
    ACTIONS(70), 1,
      anon_sym_COLON,
  [352] = 1,
    ACTIONS(104), 1,
      sym__space,
  [356] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [360] = 1,
    ACTIONS(108), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 136,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 162,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 194,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 210,
  [SMALL_STATE(21)] = 220,
  [SMALL_STATE(22)] = 226,
  [SMALL_STATE(23)] = 232,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 248,
  [SMALL_STATE(26)] = 255,
  [SMALL_STATE(27)] = 260,
  [SMALL_STATE(28)] = 267,
  [SMALL_STATE(29)] = 272,
  [SMALL_STATE(30)] = 276,
  [SMALL_STATE(31)] = 280,
  [SMALL_STATE(32)] = 284,
  [SMALL_STATE(33)] = 288,
  [SMALL_STATE(34)] = 292,
  [SMALL_STATE(35)] = 296,
  [SMALL_STATE(36)] = 300,
  [SMALL_STATE(37)] = 304,
  [SMALL_STATE(38)] = 308,
  [SMALL_STATE(39)] = 312,
  [SMALL_STATE(40)] = 316,
  [SMALL_STATE(41)] = 320,
  [SMALL_STATE(42)] = 324,
  [SMALL_STATE(43)] = 328,
  [SMALL_STATE(44)] = 332,
  [SMALL_STATE(45)] = 336,
  [SMALL_STATE(46)] = 340,
  [SMALL_STATE(47)] = 344,
  [SMALL_STATE(48)] = 348,
  [SMALL_STATE(49)] = 352,
  [SMALL_STATE(50)] = 356,
  [SMALL_STATE(51)] = 360,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 8, 0, 5),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 6),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
