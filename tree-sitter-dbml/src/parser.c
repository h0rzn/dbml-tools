#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_database_type = 4,
  anon_sym_Note = 5,
  sym_Project = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_primarykey = 9,
  anon_sym_pk = 10,
  anon_sym_null = 11,
  anon_sym_notnull = 12,
  anon_sym_unique = 13,
  anon_sym_increment = 14,
  sym_Table = 15,
  anon_sym_COMMA = 16,
  anon_sym_ref_COLON = 17,
  anon_sym_delete = 18,
  anon_sym_update = 19,
  anon_sym_cascade = 20,
  anon_sym_restrict = 21,
  anon_sym_setnull = 22,
  anon_sym_setdefault = 23,
  anon_sym_noaction = 24,
  anon_sym_DASH = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_LT_GT = 28,
  sym_Ref = 29,
  aux_sym_identifier_token1 = 30,
  sym__newline = 31,
  sym__space = 32,
  sym__dot = 33,
  anon_sym_SQUOTE = 34,
  sym_source_file = 35,
  sym__definition = 36,
  sym_project_definition = 37,
  sym_project_name = 38,
  sym_project_property_definition = 39,
  sym_project_property_key = 40,
  sym_table_definition = 41,
  sym_table_name = 42,
  sym_column_definition = 43,
  sym_column_settings = 44,
  sym_column_constraint = 45,
  sym_relationship_definition_short = 46,
  sym_relationship_definition_inline = 47,
  sym_relationship_definition_long = 48,
  sym_relationship_definition_side = 49,
  sym_relationship_setting_definition = 50,
  sym_relationship_event = 51,
  sym_relationship_action = 52,
  sym_relationship_symbol = 53,
  sym_column_name = 54,
  sym_identifier = 55,
  sym_enquoted_identifier = 56,
  sym__hidden_identifier = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_project_definition_repeat1 = 59,
  aux_sym_table_definition_repeat1 = 60,
  aux_sym_relationship_definition_short_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_database_type] = "database_type",
  [anon_sym_Note] = "Note",
  [sym_Project] = "Project",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_pk] = "pk",
  [anon_sym_null] = "null",
  [anon_sym_notnull] = "not null",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [sym_Table] = "Table",
  [anon_sym_COMMA] = ",",
  [anon_sym_ref_COLON] = "ref:",
  [anon_sym_delete] = "delete",
  [anon_sym_update] = "update",
  [anon_sym_cascade] = "cascade",
  [anon_sym_restrict] = "restrict",
  [anon_sym_setnull] = "set null",
  [anon_sym_setdefault] = "set default",
  [anon_sym_noaction] = "no action",
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [sym_Ref] = "Ref",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__newline] = "_newline",
  [sym__space] = "_space",
  [sym__dot] = "_dot",
  [anon_sym_SQUOTE] = "'",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_project_definition] = "project_definition",
  [sym_project_name] = "project_name",
  [sym_project_property_definition] = "project_property_definition",
  [sym_project_property_key] = "project_property_key",
  [sym_table_definition] = "table_definition",
  [sym_table_name] = "table_name",
  [sym_column_definition] = "column_definition",
  [sym_column_settings] = "column_settings",
  [sym_column_constraint] = "column_constraint",
  [sym_relationship_definition_short] = "relationship_definition_short",
  [sym_relationship_definition_inline] = "relationship_definition_inline",
  [sym_relationship_definition_long] = "relationship_definition_long",
  [sym_relationship_definition_side] = "relationship_definition_side",
  [sym_relationship_setting_definition] = "relationship_setting_definition",
  [sym_relationship_event] = "relationship_event",
  [sym_relationship_action] = "relationship_action",
  [sym_relationship_symbol] = "relationship_symbol",
  [sym_column_name] = "column_name",
  [sym_identifier] = "identifier",
  [sym_enquoted_identifier] = "enquoted_identifier",
  [sym__hidden_identifier] = "_hidden_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_project_definition_repeat1] = "project_definition_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
  [aux_sym_relationship_definition_short_repeat1] = "relationship_definition_short_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_database_type] = anon_sym_database_type,
  [anon_sym_Note] = anon_sym_Note,
  [sym_Project] = sym_Project,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [sym_Table] = sym_Table,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ref_COLON] = anon_sym_ref_COLON,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_cascade] = anon_sym_cascade,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_setnull] = anon_sym_setnull,
  [anon_sym_setdefault] = anon_sym_setdefault,
  [anon_sym_noaction] = anon_sym_noaction,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [sym_Ref] = sym_Ref,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__newline] = sym__newline,
  [sym__space] = sym__space,
  [sym__dot] = sym__dot,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_project_definition] = sym_project_definition,
  [sym_project_name] = sym_project_name,
  [sym_project_property_definition] = sym_project_property_definition,
  [sym_project_property_key] = sym_project_property_key,
  [sym_table_definition] = sym_table_definition,
  [sym_table_name] = sym_table_name,
  [sym_column_definition] = sym_column_definition,
  [sym_column_settings] = sym_column_settings,
  [sym_column_constraint] = sym_column_constraint,
  [sym_relationship_definition_short] = sym_relationship_definition_short,
  [sym_relationship_definition_inline] = sym_relationship_definition_inline,
  [sym_relationship_definition_long] = sym_relationship_definition_long,
  [sym_relationship_definition_side] = sym_relationship_definition_side,
  [sym_relationship_setting_definition] = sym_relationship_setting_definition,
  [sym_relationship_event] = sym_relationship_event,
  [sym_relationship_action] = sym_relationship_action,
  [sym_relationship_symbol] = sym_relationship_symbol,
  [sym_column_name] = sym_column_name,
  [sym_identifier] = sym_identifier,
  [sym_enquoted_identifier] = sym_enquoted_identifier,
  [sym__hidden_identifier] = sym__hidden_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_project_definition_repeat1] = aux_sym_project_definition_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
  [aux_sym_relationship_definition_short_repeat1] = aux_sym_relationship_definition_short_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_database_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Note] = {
    .visible = true,
    .named = false,
  },
  [sym_Project] = {
    .visible = true,
    .named = true,
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
  [sym_Table] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cascade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noaction] = {
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
  [sym_Ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_project_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_project_name] = {
    .visible = true,
    .named = true,
  },
  [sym_project_property_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_project_property_key] = {
    .visible = true,
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
  [sym_relationship_definition_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_long] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_side] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_setting_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_event] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_action] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enquoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__hidden_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_project_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relationship_definition_short_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_col_name = 1,
  field_col_type = 2,
  field_column = 3,
  field_column_name = 4,
  field_project_name = 5,
  field_project_property = 6,
  field_project_property_key = 7,
  field_project_property_value = 8,
  field_relationship_name = 9,
  field_table_name = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_col_type] = "col_type",
  [field_column] = "column",
  [field_column_name] = "column_name",
  [field_project_name] = "project_name",
  [field_project_property] = "project_property",
  [field_project_property_key] = "project_property_key",
  [field_project_property_value] = "project_property_value",
  [field_relationship_name] = "relationship_name",
  [field_table_name] = "table_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_table_name, 0},
  [1] =
    {field_column_name, 0},
  [2] =
    {field_project_name, 2},
  [3] =
    {field_table_name, 2},
  [4] =
    {field_project_name, 2},
    {field_project_property, 6},
  [6] =
    {field_column, 6},
    {field_table_name, 2},
  [8] =
    {field_col_name, 0},
    {field_col_type, 2},
  [10] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
  [12] =
    {field_relationship_name, 2},
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
  [24] = 24,
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
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 65,
  [107] = 75,
  [108] = 61,
  [109] = 109,
  [110] = 110,
  [111] = 59,
  [112] = 112,
  [113] = 61,
  [114] = 65,
  [115] = 66,
  [116] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '\'', 138,
        ',', 120,
        '-', 129,
        '.', 137,
        ':', 107,
        '<', 130,
        '>', 131,
        'N', 72,
        'P', 79,
        'R', 29,
        'T', 9,
        '[', 111,
        ']', 112,
        'c', 10,
        'd', 11,
        'i', 67,
        'n', 73,
        'p', 54,
        'r', 30,
        's', 42,
        'u', 69,
        '{', 105,
        '}', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '[') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == ':') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 'j') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 'q') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 103:
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '}') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 103},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 103},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 103},
  [24] = {.lex_state = 103},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 103},
  [28] = {.lex_state = 103},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 103},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 103},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 103},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 103},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 103},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 103},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 103},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 103},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 103},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 103},
  [58] = {.lex_state = 103},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 103},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 103},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_database_type] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
    [sym_Project] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [sym_Table] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ref_COLON] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_cascade] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_setnull] = ACTIONS(1),
    [anon_sym_setdefault] = ACTIONS(1),
    [anon_sym_noaction] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_Ref] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym__definition] = STATE(2),
    [sym_project_definition] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_relationship_definition_short] = STATE(2),
    [sym_relationship_definition_long] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_Project] = ACTIONS(5),
    [sym_Table] = ACTIONS(7),
    [sym_Ref] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_Project,
    ACTIONS(7), 1,
      sym_Table,
    ACTIONS(9), 1,
      sym_Ref,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [21] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_Project,
    ACTIONS(18), 1,
      sym_Table,
    ACTIONS(21), 1,
      sym_Ref,
    STATE(3), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [42] = 3,
    ACTIONS(26), 1,
      anon_sym_ref_COLON,
    STATE(87), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(24), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [58] = 4,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_project_property_key,
    ACTIONS(30), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(8), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [73] = 4,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_project_property_key,
    ACTIONS(30), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(5), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [88] = 2,
    STATE(53), 1,
      sym_relationship_action,
    ACTIONS(34), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [99] = 4,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_project_property_key,
    ACTIONS(38), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(8), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [114] = 3,
    ACTIONS(43), 1,
      anon_sym_LT,
    STATE(23), 1,
      sym_relationship_symbol,
    ACTIONS(41), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [126] = 3,
    ACTIONS(43), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_relationship_symbol,
    ACTIONS(41), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [138] = 4,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_identifier,
    STATE(13), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [152] = 3,
    ACTIONS(43), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_relationship_symbol,
    ACTIONS(41), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [164] = 4,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_identifier,
    STATE(16), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [178] = 3,
    ACTIONS(43), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym_relationship_symbol,
    ACTIONS(41), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [190] = 3,
    ACTIONS(43), 1,
      anon_sym_LT,
    STATE(27), 1,
      sym_relationship_symbol,
    ACTIONS(41), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [202] = 4,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_identifier,
    STATE(16), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [216] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [223] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_table_name,
    STATE(95), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
  [236] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(72), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(115), 1,
      sym_table_name,
  [249] = 3,
    STATE(43), 1,
      sym_relationship_setting_definition,
    STATE(70), 1,
      sym_relationship_event,
    ACTIONS(60), 2,
      anon_sym_delete,
      anon_sym_update,
  [260] = 1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [267] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [274] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(82), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(116), 1,
      sym_table_name,
  [287] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_table_name,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(110), 1,
      sym_relationship_definition_side,
  [300] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [307] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [314] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(91), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(116), 1,
      sym_table_name,
  [327] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_table_name,
    STATE(88), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
  [340] = 3,
    STATE(56), 1,
      sym_relationship_setting_definition,
    STATE(70), 1,
      sym_relationship_event,
    ACTIONS(60), 2,
      anon_sym_delete,
      anon_sym_update,
  [351] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [358] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [365] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_table_name,
    STATE(102), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
  [378] = 3,
    STATE(50), 1,
      sym_relationship_setting_definition,
    STATE(70), 1,
      sym_relationship_event,
    ACTIONS(60), 2,
      anon_sym_delete,
      anon_sym_update,
  [389] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(97), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(115), 1,
      sym_table_name,
  [402] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [409] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [416] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(105), 1,
      sym_relationship_definition_side,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(115), 1,
      sym_table_name,
  [429] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [436] = 3,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    STATE(106), 1,
      sym__hidden_identifier,
    STATE(108), 1,
      sym_column_name,
  [446] = 1,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [452] = 3,
    ACTIONS(84), 1,
      aux_sym_identifier_token1,
    STATE(113), 1,
      sym_column_name,
    STATE(114), 1,
      sym__hidden_identifier,
  [462] = 3,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      sym__newline,
    STATE(58), 1,
      sym_column_settings,
  [472] = 3,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_relationship_definition_short_repeat1,
  [482] = 3,
    ACTIONS(94), 1,
      aux_sym_identifier_token1,
    STATE(61), 1,
      sym_column_name,
    STATE(65), 1,
      sym__hidden_identifier,
  [492] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_relationship_definition_short_repeat1,
  [502] = 3,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_identifier,
  [512] = 3,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_relationship_definition_short_repeat1,
  [522] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_relationship_definition_short_repeat1,
  [532] = 3,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym_project_name,
  [542] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_relationship_definition_short_repeat1,
  [552] = 3,
    ACTIONS(109), 1,
      aux_sym_identifier_token1,
    STATE(75), 1,
      sym__hidden_identifier,
    STATE(76), 1,
      sym_table_name,
  [562] = 1,
    ACTIONS(111), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [567] = 1,
    ACTIONS(113), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [572] = 2,
    ACTIONS(115), 1,
      anon_sym_COLON,
    ACTIONS(117), 1,
      sym__space,
  [579] = 1,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [584] = 1,
    ACTIONS(100), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [589] = 2,
    ACTIONS(121), 1,
      aux_sym_identifier_token1,
    STATE(42), 1,
      sym_identifier,
  [596] = 1,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [601] = 2,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(127), 1,
      sym__space,
  [608] = 2,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__newline,
  [615] = 1,
    ACTIONS(129), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [620] = 2,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    STATE(83), 1,
      sym_identifier,
  [627] = 2,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      sym__space,
  [634] = 2,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym_enquoted_identifier,
  [641] = 1,
    ACTIONS(139), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [646] = 1,
    ACTIONS(141), 1,
      sym__dot,
  [650] = 1,
    ACTIONS(143), 1,
      sym__space,
  [654] = 1,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
  [658] = 1,
    ACTIONS(147), 1,
      anon_sym_COLON,
  [662] = 1,
    ACTIONS(149), 1,
      anon_sym_COLON,
  [666] = 1,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
  [670] = 1,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
  [674] = 1,
    ACTIONS(155), 1,
      sym__newline,
  [678] = 1,
    ACTIONS(157), 1,
      sym__newline,
  [682] = 1,
    ACTIONS(159), 1,
      sym__space,
  [686] = 1,
    ACTIONS(161), 1,
      sym__space,
  [690] = 1,
    ACTIONS(163), 1,
      sym__space,
  [694] = 1,
    ACTIONS(165), 1,
      sym__newline,
  [698] = 1,
    ACTIONS(167), 1,
      sym__space,
  [702] = 1,
    ACTIONS(169), 1,
      sym__space,
  [706] = 1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
  [710] = 1,
    ACTIONS(173), 1,
      sym__newline,
  [714] = 1,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
  [718] = 1,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
  [722] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
  [726] = 1,
    ACTIONS(181), 1,
      sym__space,
  [730] = 1,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
  [734] = 1,
    ACTIONS(185), 1,
      sym__space,
  [738] = 1,
    ACTIONS(187), 1,
      sym__space,
  [742] = 1,
    ACTIONS(189), 1,
      sym__space,
  [746] = 1,
    ACTIONS(191), 1,
      sym__newline,
  [750] = 1,
    ACTIONS(193), 1,
      sym__space,
  [754] = 1,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
  [758] = 1,
    ACTIONS(197), 1,
      sym__newline,
  [762] = 1,
    ACTIONS(199), 1,
      sym__space,
  [766] = 1,
    ACTIONS(201), 1,
      sym__newline,
  [770] = 1,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
  [774] = 1,
    ACTIONS(205), 1,
      sym__space,
  [778] = 1,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [782] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [786] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [790] = 1,
    ACTIONS(213), 1,
      sym__space,
  [794] = 1,
    ACTIONS(215), 1,
      aux_sym_identifier_token1,
  [798] = 1,
    ACTIONS(217), 1,
      sym__space,
  [802] = 1,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
  [806] = 1,
    ACTIONS(139), 1,
      sym__space,
  [810] = 1,
    ACTIONS(159), 1,
      sym__dot,
  [814] = 1,
    ACTIONS(129), 1,
      sym__space,
  [818] = 1,
    ACTIONS(221), 1,
      sym__newline,
  [822] = 1,
    ACTIONS(223), 1,
      sym__space,
  [826] = 1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
  [830] = 1,
    ACTIONS(225), 1,
      sym__newline,
  [834] = 1,
    ACTIONS(129), 1,
      sym__newline,
  [838] = 1,
    ACTIONS(139), 1,
      sym__newline,
  [842] = 1,
    ACTIONS(227), 1,
      sym__dot,
  [846] = 1,
    ACTIONS(229), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 114,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 274,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 300,
  [SMALL_STATE(26)] = 307,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 340,
  [SMALL_STATE(30)] = 351,
  [SMALL_STATE(31)] = 358,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 378,
  [SMALL_STATE(34)] = 389,
  [SMALL_STATE(35)] = 402,
  [SMALL_STATE(36)] = 409,
  [SMALL_STATE(37)] = 416,
  [SMALL_STATE(38)] = 429,
  [SMALL_STATE(39)] = 436,
  [SMALL_STATE(40)] = 446,
  [SMALL_STATE(41)] = 452,
  [SMALL_STATE(42)] = 462,
  [SMALL_STATE(43)] = 472,
  [SMALL_STATE(44)] = 482,
  [SMALL_STATE(45)] = 492,
  [SMALL_STATE(46)] = 502,
  [SMALL_STATE(47)] = 512,
  [SMALL_STATE(48)] = 522,
  [SMALL_STATE(49)] = 532,
  [SMALL_STATE(50)] = 542,
  [SMALL_STATE(51)] = 552,
  [SMALL_STATE(52)] = 562,
  [SMALL_STATE(53)] = 567,
  [SMALL_STATE(54)] = 572,
  [SMALL_STATE(55)] = 579,
  [SMALL_STATE(56)] = 584,
  [SMALL_STATE(57)] = 589,
  [SMALL_STATE(58)] = 596,
  [SMALL_STATE(59)] = 601,
  [SMALL_STATE(60)] = 608,
  [SMALL_STATE(61)] = 615,
  [SMALL_STATE(62)] = 620,
  [SMALL_STATE(63)] = 627,
  [SMALL_STATE(64)] = 634,
  [SMALL_STATE(65)] = 641,
  [SMALL_STATE(66)] = 646,
  [SMALL_STATE(67)] = 650,
  [SMALL_STATE(68)] = 654,
  [SMALL_STATE(69)] = 658,
  [SMALL_STATE(70)] = 662,
  [SMALL_STATE(71)] = 666,
  [SMALL_STATE(72)] = 670,
  [SMALL_STATE(73)] = 674,
  [SMALL_STATE(74)] = 678,
  [SMALL_STATE(75)] = 682,
  [SMALL_STATE(76)] = 686,
  [SMALL_STATE(77)] = 690,
  [SMALL_STATE(78)] = 694,
  [SMALL_STATE(79)] = 698,
  [SMALL_STATE(80)] = 702,
  [SMALL_STATE(81)] = 706,
  [SMALL_STATE(82)] = 710,
  [SMALL_STATE(83)] = 714,
  [SMALL_STATE(84)] = 718,
  [SMALL_STATE(85)] = 722,
  [SMALL_STATE(86)] = 726,
  [SMALL_STATE(87)] = 730,
  [SMALL_STATE(88)] = 734,
  [SMALL_STATE(89)] = 738,
  [SMALL_STATE(90)] = 742,
  [SMALL_STATE(91)] = 746,
  [SMALL_STATE(92)] = 750,
  [SMALL_STATE(93)] = 754,
  [SMALL_STATE(94)] = 758,
  [SMALL_STATE(95)] = 762,
  [SMALL_STATE(96)] = 766,
  [SMALL_STATE(97)] = 770,
  [SMALL_STATE(98)] = 774,
  [SMALL_STATE(99)] = 778,
  [SMALL_STATE(100)] = 782,
  [SMALL_STATE(101)] = 786,
  [SMALL_STATE(102)] = 790,
  [SMALL_STATE(103)] = 794,
  [SMALL_STATE(104)] = 798,
  [SMALL_STATE(105)] = 802,
  [SMALL_STATE(106)] = 806,
  [SMALL_STATE(107)] = 810,
  [SMALL_STATE(108)] = 814,
  [SMALL_STATE(109)] = 818,
  [SMALL_STATE(110)] = 822,
  [SMALL_STATE(111)] = 826,
  [SMALL_STATE(112)] = 830,
  [SMALL_STATE(113)] = 834,
  [SMALL_STATE(114)] = 838,
  [SMALL_STATE(115)] = 842,
  [SMALL_STATE(116)] = 846,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 9),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 7),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
