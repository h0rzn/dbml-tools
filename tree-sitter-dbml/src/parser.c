#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_database_type = 5,
  anon_sym_Note = 6,
  sym_Project = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  sym_column_type = 11,
  anon_sym_default = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_BQUOTE = 14,
  anon_sym_primarykey = 15,
  anon_sym_pk = 16,
  anon_sym_null = 17,
  anon_sym_notnull = 18,
  anon_sym_unique = 19,
  anon_sym_increment = 20,
  sym_Table = 21,
  sym_as = 22,
  anon_sym_ref_COLON = 23,
  anon_sym_delete = 24,
  anon_sym_on_delete = 25,
  anon_sym_update = 26,
  anon_sym_on_update = 27,
  anon_sym_cascade = 28,
  anon_sym_restrict = 29,
  anon_sym_setnull = 30,
  anon_sym_setdefault = 31,
  anon_sym_noaction = 32,
  anon_sym_DASH = 33,
  anon_sym_LT = 34,
  anon_sym_GT = 35,
  anon_sym_LT_GT = 36,
  sym_Ref = 37,
  aux_sym_identifier_token1 = 38,
  sym__newline = 39,
  sym__space = 40,
  sym__dot = 41,
  sym_source_file = 42,
  sym__definition = 43,
  sym_project_definition = 44,
  sym_project_name = 45,
  sym_project_property_definition = 46,
  sym_project_property_key = 47,
  sym_table_definition = 48,
  sym_table_name = 49,
  sym_column_definition = 50,
  sym_column_settings = 51,
  sym_column_setting_default = 52,
  sym_column_constraint = 53,
  sym_table_alias = 54,
  sym_relationship_definition_short = 55,
  sym_relationship_definition_inline = 56,
  sym_relationship_definition_long = 57,
  sym_relationship_definition_side = 58,
  sym_relationship_setting_definition = 59,
  sym_relationship_event = 60,
  sym_relationship_action = 61,
  sym_relationship_symbol = 62,
  sym_column_name = 63,
  sym_identifier = 64,
  sym_enquoted_identifier = 65,
  sym__hidden_identifier = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_project_definition_repeat1 = 68,
  aux_sym_table_definition_repeat1 = 69,
  aux_sym_column_settings_repeat1 = 70,
  aux_sym_column_setting_default_repeat1 = 71,
  aux_sym_relationship_definition_short_repeat1 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_database_type] = "database_type",
  [anon_sym_Note] = "Note",
  [sym_Project] = "Project",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_column_type] = "column_type",
  [anon_sym_default] = "default",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_pk] = "pk",
  [anon_sym_null] = "null",
  [anon_sym_notnull] = "not null",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [sym_Table] = "Table",
  [sym_as] = "as",
  [anon_sym_ref_COLON] = "ref:",
  [anon_sym_delete] = "delete",
  [anon_sym_on_delete] = "on_delete",
  [anon_sym_update] = "update",
  [anon_sym_on_update] = "on_update",
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
  [sym_column_setting_default] = "column_setting_default",
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
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_column_setting_default_repeat1] = "column_setting_default_repeat1",
  [aux_sym_relationship_definition_short_repeat1] = "relationship_definition_short_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_database_type] = anon_sym_database_type,
  [anon_sym_Note] = anon_sym_Note,
  [sym_Project] = sym_Project,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_column_type] = sym_column_type,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [sym_Table] = sym_Table,
  [sym_as] = sym_as,
  [anon_sym_ref_COLON] = anon_sym_ref_COLON,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_on_delete] = anon_sym_on_delete,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_on_update] = anon_sym_on_update,
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
  [sym_column_setting_default] = sym_column_setting_default,
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
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_column_setting_default_repeat1] = aux_sym_column_setting_default_repeat1,
  [aux_sym_relationship_definition_short_repeat1] = aux_sym_relationship_definition_short_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_column_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
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
  [anon_sym_ref_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_update] = {
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
  [sym_column_setting_default] = {
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
  [aux_sym_column_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_setting_default_repeat1] = {
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
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 3},
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
    {field_relationship_name, 2},
  [10] =
    {field_col_name, 0},
    {field_col_type, 2},
  [12] =
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [14] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
  [16] =
    {field_column, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
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
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 54,
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
  [76] = 55,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 6,
  [125] = 7,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 92,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 7,
  [135] = 6,
  [136] = 101,
  [137] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(124);
      ADVANCE_MAP(
        '\'', 137,
        ',', 133,
        '-', 157,
        '.', 165,
        '/', 8,
        ':', 128,
        '<', 158,
        '>', 159,
        'N', 86,
        'P', 94,
        'R', 36,
        'T', 12,
        '[', 132,
        ']', 134,
        '`', 138,
        'a', 97,
        'c', 14,
        'd', 15,
        'i', 80,
        'n', 87,
        'o', 81,
        'p', 66,
        'r', 37,
        's', 50,
        'u', 83,
        '{', 126,
        '}', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '[') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead == ':') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '}') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'j') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == 'q') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 123:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(123);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_column_type);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 165:
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 123},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_database_type] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
    [sym_Project] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [sym_Table] = ACTIONS(1),
    [sym_as] = ACTIONS(1),
    [anon_sym_ref_COLON] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_on_delete] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_on_update] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(127),
    [sym__definition] = STATE(2),
    [sym_project_definition] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_relationship_definition_short] = STATE(2),
    [sym_relationship_definition_long] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_Project] = ACTIONS(7),
    [sym_Table] = ACTIONS(9),
    [sym_Ref] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_Project,
    ACTIONS(9), 1,
      sym_Table,
    ACTIONS(11), 1,
      sym_Ref,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    STATE(4), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(21), 1,
      anon_sym_ref_COLON,
    STATE(80), 3,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(19), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [44] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_Project,
    ACTIONS(31), 1,
      sym_Table,
    ACTIONS(34), 1,
      sym_Ref,
    STATE(4), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [68] = 3,
    ACTIONS(21), 1,
      anon_sym_ref_COLON,
    STATE(58), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(19), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [84] = 1,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [95] = 1,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [106] = 3,
    STATE(83), 1,
      sym_relationship_setting_definition,
    STATE(107), 1,
      sym_relationship_event,
    ACTIONS(41), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [119] = 4,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_project_property_key,
    ACTIONS(45), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(13), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [134] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_project_property_key,
    ACTIONS(45), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(9), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [149] = 3,
    STATE(69), 1,
      sym_relationship_setting_definition,
    STATE(107), 1,
      sym_relationship_event,
    ACTIONS(41), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [162] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [173] = 4,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_project_property_key,
    ACTIONS(55), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(13), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [188] = 2,
    STATE(79), 1,
      sym_relationship_action,
    ACTIONS(58), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [199] = 2,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [210] = 3,
    STATE(63), 1,
      sym_relationship_setting_definition,
    STATE(107), 1,
      sym_relationship_event,
    ACTIONS(41), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [223] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [231] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(45), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [243] = 4,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    STATE(119), 1,
      sym_identifier,
    STATE(34), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [257] = 4,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_identifier,
    STATE(34), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [271] = 3,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    ACTIONS(76), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(21), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [283] = 1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [291] = 4,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_identifier,
    STATE(19), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [305] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [317] = 1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [325] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [333] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [345] = 1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [353] = 1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [361] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [373] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [385] = 1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [393] = 1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [401] = 4,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      aux_sym_identifier_token1,
    STATE(119), 1,
      sym_identifier,
    STATE(34), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [415] = 1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [423] = 4,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_identifier,
    STATE(20), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [437] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [445] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [453] = 1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [461] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
    STATE(136), 1,
      sym_table_name,
  [474] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(90), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
    STATE(137), 1,
      sym_table_name,
  [487] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_table_name,
    STATE(105), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
  [500] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_table_name,
    STATE(129), 1,
      sym__hidden_identifier,
    STATE(131), 1,
      sym_relationship_definition_side,
  [513] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(86), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
    STATE(136), 1,
      sym_table_name,
  [526] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(112), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
    STATE(137), 1,
      sym_table_name,
  [539] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_table_name,
    STATE(117), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
  [552] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_table_name,
    STATE(122), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
  [565] = 3,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    STATE(51), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [576] = 4,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym_relationship_definition_side,
    STATE(129), 1,
      sym__hidden_identifier,
    STATE(136), 1,
      sym_table_name,
  [589] = 3,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(118), 1,
      anon_sym_BQUOTE,
    STATE(21), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [600] = 3,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(21), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [611] = 3,
    ACTIONS(114), 1,
      anon_sym_BQUOTE,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    STATE(50), 2,
      sym_identifier,
      aux_sym_column_setting_default_repeat1,
  [622] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_column_settings_repeat1,
  [632] = 3,
    ACTIONS(124), 1,
      aux_sym_identifier_token1,
    STATE(134), 1,
      sym_column_name,
    STATE(135), 1,
      sym__hidden_identifier,
  [642] = 1,
    ACTIONS(126), 3,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      aux_sym_identifier_token1,
  [648] = 3,
    ACTIONS(128), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      sym__hidden_identifier,
    STATE(7), 1,
      sym_column_name,
  [658] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_relationship_definition_short_repeat1,
  [668] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_column_settings_repeat1,
  [678] = 3,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_identifier,
    STATE(100), 1,
      sym_project_name,
  [688] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_column_settings_repeat1,
  [698] = 3,
    ACTIONS(141), 1,
      aux_sym_identifier_token1,
    STATE(124), 1,
      sym__hidden_identifier,
    STATE(125), 1,
      sym_column_name,
  [708] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_relationship_definition_short_repeat1,
  [718] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_relationship_definition_short_repeat1,
  [728] = 3,
    ACTIONS(150), 1,
      aux_sym_identifier_token1,
    STATE(126), 1,
      sym__hidden_identifier,
    STATE(128), 1,
      sym_table_alias,
  [738] = 3,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
    STATE(92), 1,
      sym__hidden_identifier,
    STATE(96), 1,
      sym_table_name,
  [748] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_relationship_definition_short_repeat1,
  [758] = 1,
    ACTIONS(156), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [764] = 3,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_identifier,
  [774] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_relationship_definition_short_repeat1,
  [784] = 3,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 1,
      sym__newline,
    STATE(81), 1,
      sym_column_settings,
  [794] = 1,
    ACTIONS(166), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [799] = 2,
    ACTIONS(168), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      sym__space,
  [806] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [811] = 1,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [816] = 2,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_enquoted_identifier,
  [823] = 2,
    ACTIONS(126), 1,
      sym__space,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [830] = 1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [835] = 2,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    STATE(91), 1,
      sym_identifier,
  [842] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [847] = 1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [852] = 1,
    ACTIONS(184), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [857] = 2,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      sym_as,
  [864] = 1,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [869] = 2,
    ACTIONS(190), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      sym__space,
  [876] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [881] = 1,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [886] = 1,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [891] = 2,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_BQUOTE,
  [898] = 1,
    ACTIONS(204), 1,
      sym__newline,
  [902] = 1,
    ACTIONS(206), 1,
      sym__newline,
  [906] = 1,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
  [910] = 1,
    ACTIONS(210), 1,
      sym__space,
  [914] = 1,
    ACTIONS(212), 1,
      sym__newline,
  [918] = 1,
    ACTIONS(214), 1,
      sym__space,
  [922] = 1,
    ACTIONS(216), 1,
      sym__space,
  [926] = 1,
    ACTIONS(218), 1,
      sym__space,
  [930] = 1,
    ACTIONS(220), 1,
      sym__newline,
  [934] = 1,
    ACTIONS(222), 1,
      sym__space,
  [938] = 1,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
  [942] = 1,
    ACTIONS(226), 1,
      sym__space,
  [946] = 1,
    ACTIONS(228), 1,
      sym__dot,
  [950] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [954] = 1,
    ACTIONS(232), 1,
      sym__newline,
  [958] = 1,
    ACTIONS(234), 1,
      sym__newline,
  [962] = 1,
    ACTIONS(236), 1,
      sym__space,
  [966] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
  [970] = 1,
    ACTIONS(240), 1,
      anon_sym_COLON,
  [974] = 1,
    ACTIONS(242), 1,
      anon_sym_COLON,
  [978] = 1,
    ACTIONS(244), 1,
      sym__space,
  [982] = 1,
    ACTIONS(246), 1,
      sym__space,
  [986] = 1,
    ACTIONS(248), 1,
      sym__space,
  [990] = 1,
    ACTIONS(250), 1,
      sym__newline,
  [994] = 1,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
  [998] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [1002] = 1,
    ACTIONS(256), 1,
      sym_column_type,
  [1006] = 1,
    ACTIONS(258), 1,
      sym__space,
  [1010] = 1,
    ACTIONS(260), 1,
      sym__space,
  [1014] = 1,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
  [1018] = 1,
    ACTIONS(264), 1,
      sym__space,
  [1022] = 1,
    ACTIONS(266), 1,
      anon_sym_COLON,
  [1026] = 1,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [1030] = 1,
    ACTIONS(270), 1,
      sym__space,
  [1034] = 1,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
  [1038] = 1,
    ACTIONS(37), 1,
      sym__space,
  [1042] = 1,
    ACTIONS(39), 1,
      sym__space,
  [1046] = 1,
    ACTIONS(274), 1,
      sym__space,
  [1050] = 1,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [1054] = 1,
    ACTIONS(278), 1,
      sym__space,
  [1058] = 1,
    ACTIONS(210), 1,
      sym__dot,
  [1062] = 1,
    ACTIONS(280), 1,
      sym__newline,
  [1066] = 1,
    ACTIONS(282), 1,
      sym__space,
  [1070] = 1,
    ACTIONS(284), 1,
      sym__space,
  [1074] = 1,
    ACTIONS(286), 1,
      sym__newline,
  [1078] = 1,
    ACTIONS(39), 1,
      sym__newline,
  [1082] = 1,
    ACTIONS(37), 1,
      sym__newline,
  [1086] = 1,
    ACTIONS(288), 1,
      sym__dot,
  [1090] = 1,
    ACTIONS(290), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 173,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 243,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 271,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 291,
  [SMALL_STATE(24)] = 305,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 325,
  [SMALL_STATE(27)] = 333,
  [SMALL_STATE(28)] = 345,
  [SMALL_STATE(29)] = 353,
  [SMALL_STATE(30)] = 361,
  [SMALL_STATE(31)] = 373,
  [SMALL_STATE(32)] = 385,
  [SMALL_STATE(33)] = 393,
  [SMALL_STATE(34)] = 401,
  [SMALL_STATE(35)] = 415,
  [SMALL_STATE(36)] = 423,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 445,
  [SMALL_STATE(39)] = 453,
  [SMALL_STATE(40)] = 461,
  [SMALL_STATE(41)] = 474,
  [SMALL_STATE(42)] = 487,
  [SMALL_STATE(43)] = 500,
  [SMALL_STATE(44)] = 513,
  [SMALL_STATE(45)] = 526,
  [SMALL_STATE(46)] = 539,
  [SMALL_STATE(47)] = 552,
  [SMALL_STATE(48)] = 565,
  [SMALL_STATE(49)] = 576,
  [SMALL_STATE(50)] = 589,
  [SMALL_STATE(51)] = 600,
  [SMALL_STATE(52)] = 611,
  [SMALL_STATE(53)] = 622,
  [SMALL_STATE(54)] = 632,
  [SMALL_STATE(55)] = 642,
  [SMALL_STATE(56)] = 648,
  [SMALL_STATE(57)] = 658,
  [SMALL_STATE(58)] = 668,
  [SMALL_STATE(59)] = 678,
  [SMALL_STATE(60)] = 688,
  [SMALL_STATE(61)] = 698,
  [SMALL_STATE(62)] = 708,
  [SMALL_STATE(63)] = 718,
  [SMALL_STATE(64)] = 728,
  [SMALL_STATE(65)] = 738,
  [SMALL_STATE(66)] = 748,
  [SMALL_STATE(67)] = 758,
  [SMALL_STATE(68)] = 764,
  [SMALL_STATE(69)] = 774,
  [SMALL_STATE(70)] = 784,
  [SMALL_STATE(71)] = 794,
  [SMALL_STATE(72)] = 799,
  [SMALL_STATE(73)] = 806,
  [SMALL_STATE(74)] = 811,
  [SMALL_STATE(75)] = 816,
  [SMALL_STATE(76)] = 823,
  [SMALL_STATE(77)] = 830,
  [SMALL_STATE(78)] = 835,
  [SMALL_STATE(79)] = 842,
  [SMALL_STATE(80)] = 847,
  [SMALL_STATE(81)] = 852,
  [SMALL_STATE(82)] = 857,
  [SMALL_STATE(83)] = 864,
  [SMALL_STATE(84)] = 869,
  [SMALL_STATE(85)] = 876,
  [SMALL_STATE(86)] = 881,
  [SMALL_STATE(87)] = 886,
  [SMALL_STATE(88)] = 891,
  [SMALL_STATE(89)] = 898,
  [SMALL_STATE(90)] = 902,
  [SMALL_STATE(91)] = 906,
  [SMALL_STATE(92)] = 910,
  [SMALL_STATE(93)] = 914,
  [SMALL_STATE(94)] = 918,
  [SMALL_STATE(95)] = 922,
  [SMALL_STATE(96)] = 926,
  [SMALL_STATE(97)] = 930,
  [SMALL_STATE(98)] = 934,
  [SMALL_STATE(99)] = 938,
  [SMALL_STATE(100)] = 942,
  [SMALL_STATE(101)] = 946,
  [SMALL_STATE(102)] = 950,
  [SMALL_STATE(103)] = 954,
  [SMALL_STATE(104)] = 958,
  [SMALL_STATE(105)] = 962,
  [SMALL_STATE(106)] = 966,
  [SMALL_STATE(107)] = 970,
  [SMALL_STATE(108)] = 974,
  [SMALL_STATE(109)] = 978,
  [SMALL_STATE(110)] = 982,
  [SMALL_STATE(111)] = 986,
  [SMALL_STATE(112)] = 990,
  [SMALL_STATE(113)] = 994,
  [SMALL_STATE(114)] = 998,
  [SMALL_STATE(115)] = 1002,
  [SMALL_STATE(116)] = 1006,
  [SMALL_STATE(117)] = 1010,
  [SMALL_STATE(118)] = 1014,
  [SMALL_STATE(119)] = 1018,
  [SMALL_STATE(120)] = 1022,
  [SMALL_STATE(121)] = 1026,
  [SMALL_STATE(122)] = 1030,
  [SMALL_STATE(123)] = 1034,
  [SMALL_STATE(124)] = 1038,
  [SMALL_STATE(125)] = 1042,
  [SMALL_STATE(126)] = 1046,
  [SMALL_STATE(127)] = 1050,
  [SMALL_STATE(128)] = 1054,
  [SMALL_STATE(129)] = 1058,
  [SMALL_STATE(130)] = 1062,
  [SMALL_STATE(131)] = 1066,
  [SMALL_STATE(132)] = 1070,
  [SMALL_STATE(133)] = 1074,
  [SMALL_STATE(134)] = 1078,
  [SMALL_STATE(135)] = 1082,
  [SMALL_STATE(136)] = 1086,
  [SMALL_STATE(137)] = 1090,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 8),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 12),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 8),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 11),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 9),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [276] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
