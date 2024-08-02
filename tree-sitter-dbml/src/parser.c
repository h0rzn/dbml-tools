#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 13

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
  sym_as = 16,
  anon_sym_COMMA = 17,
  anon_sym_ref_COLON = 18,
  anon_sym_delete = 19,
  anon_sym_update = 20,
  anon_sym_cascade = 21,
  anon_sym_restrict = 22,
  anon_sym_setnull = 23,
  anon_sym_setdefault = 24,
  anon_sym_noaction = 25,
  anon_sym_DASH = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_LT_GT = 29,
  sym_Ref = 30,
  aux_sym_identifier_token1 = 31,
  sym__newline = 32,
  sym__space = 33,
  sym__dot = 34,
  anon_sym_SQUOTE = 35,
  sym_source_file = 36,
  sym__definition = 37,
  sym_project_definition = 38,
  sym_project_name = 39,
  sym_project_property_definition = 40,
  sym_project_property_key = 41,
  sym_table_definition = 42,
  sym_table_name = 43,
  sym_column_definition = 44,
  sym_column_settings = 45,
  sym_column_constraint = 46,
  sym_table_alias = 47,
  sym_relationship_definition_short = 48,
  sym_relationship_definition_inline = 49,
  sym_relationship_definition_long = 50,
  sym_relationship_definition_side = 51,
  sym_relationship_setting_definition = 52,
  sym_relationship_event = 53,
  sym_relationship_action = 54,
  sym_relationship_symbol = 55,
  sym_column_name = 56,
  sym_identifier = 57,
  sym_enquoted_identifier = 58,
  sym__hidden_identifier = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_project_definition_repeat1 = 61,
  aux_sym_table_definition_repeat1 = 62,
  aux_sym_relationship_definition_short_repeat1 = 63,
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
  [sym_as] = "as",
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
  [sym_table_alias] = "table_alias",
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
  [sym_as] = sym_as,
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
  [sym_table_alias] = sym_table_alias,
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
  [sym_as] = {
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
  [sym_table_alias] = {
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
  field_table_alias = 10,
  field_table_alias_name = 11,
  field_table_name = 12,
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
  [field_table_alias] = "table_alias",
  [field_table_alias_name] = "table_alias_name",
  [field_table_name] = "table_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_table_name, 0},
  [1] =
    {field_table_alias, 0},
  [2] =
    {field_column_name, 0},
  [3] =
    {field_project_name, 2},
  [4] =
    {field_table_name, 2},
  [5] =
    {field_project_name, 2},
    {field_project_property, 6},
  [7] =
    {field_column, 6},
    {field_table_name, 2},
  [9] =
    {field_col_name, 0},
    {field_col_type, 2},
  [11] =
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [13] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
  [15] =
    {field_column, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [18] =
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 43,
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
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
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 72,
  [117] = 70,
  [118] = 66,
  [119] = 119,
  [120] = 63,
  [121] = 121,
  [122] = 66,
  [123] = 70,
  [124] = 76,
  [125] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      ADVANCE_MAP(
        '\'', 140,
        ',', 122,
        '-', 131,
        '.', 139,
        ':', 108,
        '<', 132,
        '>', 133,
        'N', 72,
        'P', 79,
        'R', 29,
        'T', 9,
        '[', 112,
        ']', 113,
        'a', 82,
        'c', 10,
        'd', 11,
        'i', 67,
        'n', 73,
        'p', 54,
        'r', 30,
        's', 42,
        'u', 69,
        '{', 106,
        '}', 107,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '[') ADVANCE(112);
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
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == ':') ADVANCE(108);
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
      if (lookahead == ':') ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(109);
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
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 's') ADVANCE(91);
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
      if (lookahead == 'k') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(128);
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
      if (lookahead == 'l') ADVANCE(88);
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
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(92);
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
      if (lookahead == 'q') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(103);
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
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 104:
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 140:
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
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 104},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 104},
  [16] = {.lex_state = 104},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 104},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 104},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 104},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 104},
  [34] = {.lex_state = 104},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 104},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 104},
  [43] = {.lex_state = 104},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 104},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 104},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 104},
  [51] = {.lex_state = 104},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 104},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 104},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 104},
  [61] = {.lex_state = 104},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 104},
  [68] = {.lex_state = 104},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 104},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
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
    [sym_as] = ACTIONS(1),
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
    [sym_source_file] = STATE(110),
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
    STATE(95), 2,
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
    STATE(109), 1,
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
    STATE(109), 1,
      sym_project_property_key,
    ACTIONS(30), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(5), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [88] = 2,
    STATE(58), 1,
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
    STATE(109), 1,
      sym_project_property_key,
    ACTIONS(38), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(8), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [114] = 4,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    STATE(108), 1,
      sym_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [128] = 4,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_identifier,
    STATE(9), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [142] = 3,
    ACTIONS(49), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_relationship_symbol,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [154] = 3,
    ACTIONS(49), 1,
      anon_sym_LT,
    STATE(23), 1,
      sym_relationship_symbol,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [166] = 3,
    ACTIONS(49), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym_relationship_symbol,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [178] = 3,
    ACTIONS(49), 1,
      anon_sym_LT,
    STATE(42), 1,
      sym_relationship_symbol,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [190] = 4,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      aux_sym_identifier_token1,
    STATE(108), 1,
      sym_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [204] = 4,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_identifier,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [218] = 3,
    ACTIONS(49), 1,
      anon_sym_LT,
    STATE(30), 1,
      sym_relationship_symbol,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [230] = 4,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_identifier,
    STATE(16), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [244] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [251] = 3,
    STATE(62), 1,
      sym_relationship_setting_definition,
    STATE(78), 1,
      sym_relationship_event,
    ACTIONS(62), 2,
      anon_sym_delete,
      anon_sym_update,
  [262] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [269] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [276] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(80), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
    STATE(124), 1,
      sym_table_name,
  [289] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(76), 1,
      sym_table_name,
    STATE(84), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
  [302] = 3,
    STATE(47), 1,
      sym_relationship_setting_definition,
    STATE(78), 1,
      sym_relationship_event,
    ACTIONS(62), 2,
      anon_sym_delete,
      anon_sym_update,
  [313] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(75), 1,
      sym_relationship_definition_side,
    STATE(76), 1,
      sym_table_name,
    STATE(116), 1,
      sym__hidden_identifier,
  [326] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [333] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [340] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [347] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(90), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
    STATE(125), 1,
      sym_table_name,
  [360] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [367] = 3,
    STATE(55), 1,
      sym_relationship_setting_definition,
    STATE(78), 1,
      sym_relationship_event,
    ACTIONS(62), 2,
      anon_sym_delete,
      anon_sym_update,
  [378] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(76), 1,
      sym_table_name,
    STATE(112), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
  [391] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(76), 1,
      sym_table_name,
    STATE(104), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
  [404] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [411] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [418] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [425] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [432] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(99), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
    STATE(125), 1,
      sym_table_name,
  [445] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(114), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
    STATE(124), 1,
      sym_table_name,
  [458] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [465] = 4,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(106), 1,
      sym_relationship_definition_side,
    STATE(116), 1,
      sym__hidden_identifier,
    STATE(124), 1,
      sym_table_name,
  [478] = 3,
    ACTIONS(88), 1,
      aux_sym_identifier_token1,
    STATE(117), 1,
      sym__hidden_identifier,
    STATE(118), 1,
      sym_column_name,
  [488] = 3,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_relationship_definition_short_repeat1,
  [498] = 3,
    ACTIONS(94), 1,
      aux_sym_identifier_token1,
    STATE(122), 1,
      sym_column_name,
    STATE(123), 1,
      sym__hidden_identifier,
  [508] = 3,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__newline,
    STATE(68), 1,
      sym_column_settings,
  [518] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_relationship_definition_short_repeat1,
  [528] = 3,
    ACTIONS(102), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_column_name,
    STATE(70), 1,
      sym__hidden_identifier,
  [538] = 1,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [544] = 3,
    ACTIONS(106), 1,
      aux_sym_identifier_token1,
    STATE(119), 1,
      sym__hidden_identifier,
    STATE(121), 1,
      sym_table_alias,
  [554] = 3,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_identifier,
  [564] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_relationship_definition_short_repeat1,
  [574] = 3,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
    STATE(89), 1,
      sym_project_name,
  [584] = 3,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_relationship_definition_short_repeat1,
  [594] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_relationship_definition_short_repeat1,
  [604] = 3,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(72), 1,
      sym__hidden_identifier,
    STATE(85), 1,
      sym_table_name,
  [614] = 1,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [619] = 1,
    ACTIONS(123), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [624] = 2,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(127), 1,
      sym__space,
  [631] = 1,
    ACTIONS(129), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [636] = 2,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    STATE(46), 1,
      sym_identifier,
  [643] = 1,
    ACTIONS(112), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [648] = 2,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      sym__space,
  [655] = 2,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      sym__newline,
  [662] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      sym_as,
  [669] = 1,
    ACTIONS(141), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [674] = 2,
    ACTIONS(143), 1,
      aux_sym_identifier_token1,
    STATE(91), 1,
      sym_identifier,
  [681] = 1,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [686] = 2,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_enquoted_identifier,
  [693] = 1,
    ACTIONS(149), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [698] = 2,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      sym__space,
  [705] = 1,
    ACTIONS(155), 1,
      sym__space,
  [709] = 1,
    ACTIONS(157), 1,
      sym__space,
  [713] = 1,
    ACTIONS(159), 1,
      sym__space,
  [717] = 1,
    ACTIONS(161), 1,
      sym__space,
  [721] = 1,
    ACTIONS(163), 1,
      sym__dot,
  [725] = 1,
    ACTIONS(165), 1,
      anon_sym_COLON,
  [729] = 1,
    ACTIONS(167), 1,
      anon_sym_COLON,
  [733] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
  [737] = 1,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
  [741] = 1,
    ACTIONS(173), 1,
      sym__newline,
  [745] = 1,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
  [749] = 1,
    ACTIONS(177), 1,
      sym__newline,
  [753] = 1,
    ACTIONS(179), 1,
      sym__space,
  [757] = 1,
    ACTIONS(181), 1,
      sym__space,
  [761] = 1,
    ACTIONS(183), 1,
      sym__newline,
  [765] = 1,
    ACTIONS(185), 1,
      sym__space,
  [769] = 1,
    ACTIONS(187), 1,
      sym__space,
  [773] = 1,
    ACTIONS(189), 1,
      sym__space,
  [777] = 1,
    ACTIONS(191), 1,
      sym__newline,
  [781] = 1,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
  [785] = 1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
  [789] = 1,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
  [793] = 1,
    ACTIONS(199), 1,
      sym__space,
  [797] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
  [801] = 1,
    ACTIONS(203), 1,
      sym__newline,
  [805] = 1,
    ACTIONS(205), 1,
      sym__newline,
  [809] = 1,
    ACTIONS(207), 1,
      sym__newline,
  [813] = 1,
    ACTIONS(209), 1,
      sym__newline,
  [817] = 1,
    ACTIONS(211), 1,
      sym__space,
  [821] = 1,
    ACTIONS(213), 1,
      sym__space,
  [825] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
  [829] = 1,
    ACTIONS(217), 1,
      sym__newline,
  [833] = 1,
    ACTIONS(219), 1,
      sym__space,
  [837] = 1,
    ACTIONS(221), 1,
      sym__newline,
  [841] = 1,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
  [845] = 1,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
  [849] = 1,
    ACTIONS(227), 1,
      sym__space,
  [853] = 1,
    ACTIONS(229), 1,
      anon_sym_COLON,
  [857] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [861] = 1,
    ACTIONS(233), 1,
      anon_sym_COLON,
  [865] = 1,
    ACTIONS(235), 1,
      sym__space,
  [869] = 1,
    ACTIONS(237), 1,
      sym__space,
  [873] = 1,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
  [877] = 1,
    ACTIONS(241), 1,
      aux_sym_identifier_token1,
  [881] = 1,
    ACTIONS(155), 1,
      sym__dot,
  [885] = 1,
    ACTIONS(149), 1,
      sym__space,
  [889] = 1,
    ACTIONS(141), 1,
      sym__space,
  [893] = 1,
    ACTIONS(243), 1,
      sym__space,
  [897] = 1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
  [901] = 1,
    ACTIONS(245), 1,
      sym__space,
  [905] = 1,
    ACTIONS(141), 1,
      sym__newline,
  [909] = 1,
    ACTIONS(149), 1,
      sym__newline,
  [913] = 1,
    ACTIONS(247), 1,
      sym__dot,
  [917] = 1,
    ACTIONS(249), 1,
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
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 166,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 230,
  [SMALL_STATE(19)] = 244,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 302,
  [SMALL_STATE(26)] = 313,
  [SMALL_STATE(27)] = 326,
  [SMALL_STATE(28)] = 333,
  [SMALL_STATE(29)] = 340,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 367,
  [SMALL_STATE(33)] = 378,
  [SMALL_STATE(34)] = 391,
  [SMALL_STATE(35)] = 404,
  [SMALL_STATE(36)] = 411,
  [SMALL_STATE(37)] = 418,
  [SMALL_STATE(38)] = 425,
  [SMALL_STATE(39)] = 432,
  [SMALL_STATE(40)] = 445,
  [SMALL_STATE(41)] = 458,
  [SMALL_STATE(42)] = 465,
  [SMALL_STATE(43)] = 478,
  [SMALL_STATE(44)] = 488,
  [SMALL_STATE(45)] = 498,
  [SMALL_STATE(46)] = 508,
  [SMALL_STATE(47)] = 518,
  [SMALL_STATE(48)] = 528,
  [SMALL_STATE(49)] = 538,
  [SMALL_STATE(50)] = 544,
  [SMALL_STATE(51)] = 554,
  [SMALL_STATE(52)] = 564,
  [SMALL_STATE(53)] = 574,
  [SMALL_STATE(54)] = 584,
  [SMALL_STATE(55)] = 594,
  [SMALL_STATE(56)] = 604,
  [SMALL_STATE(57)] = 614,
  [SMALL_STATE(58)] = 619,
  [SMALL_STATE(59)] = 624,
  [SMALL_STATE(60)] = 631,
  [SMALL_STATE(61)] = 636,
  [SMALL_STATE(62)] = 643,
  [SMALL_STATE(63)] = 648,
  [SMALL_STATE(64)] = 655,
  [SMALL_STATE(65)] = 662,
  [SMALL_STATE(66)] = 669,
  [SMALL_STATE(67)] = 674,
  [SMALL_STATE(68)] = 681,
  [SMALL_STATE(69)] = 686,
  [SMALL_STATE(70)] = 693,
  [SMALL_STATE(71)] = 698,
  [SMALL_STATE(72)] = 705,
  [SMALL_STATE(73)] = 709,
  [SMALL_STATE(74)] = 713,
  [SMALL_STATE(75)] = 717,
  [SMALL_STATE(76)] = 721,
  [SMALL_STATE(77)] = 725,
  [SMALL_STATE(78)] = 729,
  [SMALL_STATE(79)] = 733,
  [SMALL_STATE(80)] = 737,
  [SMALL_STATE(81)] = 741,
  [SMALL_STATE(82)] = 745,
  [SMALL_STATE(83)] = 749,
  [SMALL_STATE(84)] = 753,
  [SMALL_STATE(85)] = 757,
  [SMALL_STATE(86)] = 761,
  [SMALL_STATE(87)] = 765,
  [SMALL_STATE(88)] = 769,
  [SMALL_STATE(89)] = 773,
  [SMALL_STATE(90)] = 777,
  [SMALL_STATE(91)] = 781,
  [SMALL_STATE(92)] = 785,
  [SMALL_STATE(93)] = 789,
  [SMALL_STATE(94)] = 793,
  [SMALL_STATE(95)] = 797,
  [SMALL_STATE(96)] = 801,
  [SMALL_STATE(97)] = 805,
  [SMALL_STATE(98)] = 809,
  [SMALL_STATE(99)] = 813,
  [SMALL_STATE(100)] = 817,
  [SMALL_STATE(101)] = 821,
  [SMALL_STATE(102)] = 825,
  [SMALL_STATE(103)] = 829,
  [SMALL_STATE(104)] = 833,
  [SMALL_STATE(105)] = 837,
  [SMALL_STATE(106)] = 841,
  [SMALL_STATE(107)] = 845,
  [SMALL_STATE(108)] = 849,
  [SMALL_STATE(109)] = 853,
  [SMALL_STATE(110)] = 857,
  [SMALL_STATE(111)] = 861,
  [SMALL_STATE(112)] = 865,
  [SMALL_STATE(113)] = 869,
  [SMALL_STATE(114)] = 873,
  [SMALL_STATE(115)] = 877,
  [SMALL_STATE(116)] = 881,
  [SMALL_STATE(117)] = 885,
  [SMALL_STATE(118)] = 889,
  [SMALL_STATE(119)] = 893,
  [SMALL_STATE(120)] = 897,
  [SMALL_STATE(121)] = 901,
  [SMALL_STATE(122)] = 905,
  [SMALL_STATE(123)] = 909,
  [SMALL_STATE(124)] = 913,
  [SMALL_STATE(125)] = 917,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 11),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 12),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 9),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 12),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 12),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 10),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
