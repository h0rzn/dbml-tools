#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_primarykey = 12,
  anon_sym_pk = 13,
  anon_sym_null = 14,
  anon_sym_notnull = 15,
  anon_sym_unique = 16,
  anon_sym_increment = 17,
  sym_Table = 18,
  sym_as = 19,
  anon_sym_ref_COLON = 20,
  anon_sym_delete = 21,
  anon_sym_on_delete = 22,
  anon_sym_update = 23,
  anon_sym_on_update = 24,
  anon_sym_cascade = 25,
  anon_sym_restrict = 26,
  anon_sym_setnull = 27,
  anon_sym_setdefault = 28,
  anon_sym_noaction = 29,
  anon_sym_DASH = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_LT_GT = 33,
  sym_Ref = 34,
  aux_sym_identifier_token1 = 35,
  sym__newline = 36,
  sym__space = 37,
  sym__dot = 38,
  anon_sym_SQUOTE = 39,
  sym_source_file = 40,
  sym__definition = 41,
  sym_project_definition = 42,
  sym_project_name = 43,
  sym_project_property_definition = 44,
  sym_project_property_key = 45,
  sym_table_definition = 46,
  sym_table_name = 47,
  sym_column_definition = 48,
  sym_column_settings = 49,
  sym_column_constraint = 50,
  sym_table_alias = 51,
  sym_relationship_definition_short = 52,
  sym_relationship_definition_inline = 53,
  sym_relationship_definition_long = 54,
  sym_relationship_definition_side = 55,
  sym_relationship_setting_definition = 56,
  sym_relationship_event = 57,
  sym_relationship_action = 58,
  sym_relationship_symbol = 59,
  sym_column_name = 60,
  sym_identifier = 61,
  sym_enquoted_identifier = 62,
  sym__hidden_identifier = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_project_definition_repeat1 = 65,
  aux_sym_table_definition_repeat1 = 66,
  aux_sym_column_settings_repeat1 = 67,
  aux_sym_relationship_definition_short_repeat1 = 68,
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
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
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
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
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
  [aux_sym_column_settings_repeat1] = {
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 45,
  [58] = 58,
  [59] = 59,
  [60] = 60,
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
  [106] = 106,
  [107] = 62,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 60,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 75,
  [120] = 84,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 60,
  [126] = 62,
  [127] = 112,
  [128] = 112,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      ADVANCE_MAP(
        '\'', 159,
        ',', 129,
        '-', 150,
        '.', 158,
        '/', 7,
        ':', 124,
        '<', 151,
        '>', 152,
        'N', 83,
        'P', 91,
        'R', 34,
        'T', 11,
        '[', 128,
        ']', 130,
        'a', 94,
        'c', 12,
        'd', 13,
        'i', 77,
        'n', 84,
        'o', 78,
        'p', 63,
        'r', 35,
        's', 48,
        'u', 80,
        '{', 122,
        '}', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '[') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == ':') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'j') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'q') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 118:
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_column_type);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 159:
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 118},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 118},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 118},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 118},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 118},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 118},
  [36] = {.lex_state = 118},
  [37] = {.lex_state = 118},
  [38] = {.lex_state = 118},
  [39] = {.lex_state = 118},
  [40] = {.lex_state = 118},
  [41] = {.lex_state = 118},
  [42] = {.lex_state = 118},
  [43] = {.lex_state = 118},
  [44] = {.lex_state = 118},
  [45] = {.lex_state = 118},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 118},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 118},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 118},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 118},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 118},
  [64] = {.lex_state = 118},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 118},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 118},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 118},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 119},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
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
    STATE(3), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [24] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_Project,
    ACTIONS(25), 1,
      sym_Table,
    ACTIONS(28), 1,
      sym_Ref,
    STATE(3), 6,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [48] = 3,
    ACTIONS(33), 1,
      anon_sym_ref_COLON,
    STATE(54), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(31), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [64] = 3,
    ACTIONS(33), 1,
      anon_sym_ref_COLON,
    STATE(67), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(31), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [80] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_project_property_key,
    ACTIONS(37), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(6), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [95] = 3,
    STATE(74), 1,
      sym_relationship_setting_definition,
    STATE(97), 1,
      sym_relationship_event,
    ACTIONS(40), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [108] = 4,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_project_property_key,
    ACTIONS(44), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(6), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [123] = 2,
    STATE(69), 1,
      sym_relationship_action,
    ACTIONS(46), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [134] = 4,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_project_property_key,
    ACTIONS(44), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(8), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [149] = 3,
    STATE(59), 1,
      sym_relationship_setting_definition,
    STATE(97), 1,
      sym_relationship_event,
    ACTIONS(40), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [162] = 3,
    STATE(50), 1,
      sym_relationship_setting_definition,
    STATE(97), 1,
      sym_relationship_event,
    ACTIONS(40), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [175] = 1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [183] = 1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [191] = 1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [199] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_identifier,
    STATE(22), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [213] = 1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [221] = 1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [229] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_identifier,
    STATE(16), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [243] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [255] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [267] = 4,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_identifier,
    STATE(22), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [281] = 1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [289] = 1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [297] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_identifier,
    STATE(29), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [311] = 1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [319] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(43), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [331] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [339] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_identifier,
    STATE(22), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [353] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [361] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(42), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [373] = 1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [381] = 1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_Ref,
  [389] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_relationship_symbol,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [401] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(104), 1,
      sym_relationship_definition_side,
    STATE(112), 1,
      sym_table_name,
    STATE(120), 1,
      sym__hidden_identifier,
  [414] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(65), 1,
      sym_relationship_definition_side,
    STATE(120), 1,
      sym__hidden_identifier,
    STATE(127), 1,
      sym_table_name,
  [427] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(112), 1,
      sym_table_name,
    STATE(120), 1,
      sym__hidden_identifier,
    STATE(122), 1,
      sym_relationship_definition_side,
  [440] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(90), 1,
      sym_relationship_definition_side,
    STATE(120), 1,
      sym__hidden_identifier,
    STATE(128), 1,
      sym_table_name,
  [453] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(112), 1,
      sym_table_name,
    STATE(115), 1,
      sym_relationship_definition_side,
    STATE(120), 1,
      sym__hidden_identifier,
  [466] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(109), 1,
      sym_relationship_definition_side,
    STATE(120), 1,
      sym__hidden_identifier,
    STATE(128), 1,
      sym_table_name,
  [479] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(86), 1,
      sym_relationship_definition_side,
    STATE(112), 1,
      sym_table_name,
    STATE(120), 1,
      sym__hidden_identifier,
  [492] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(92), 1,
      sym_relationship_definition_side,
    STATE(120), 1,
      sym__hidden_identifier,
    STATE(127), 1,
      sym_table_name,
  [505] = 4,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    STATE(103), 1,
      sym_relationship_definition_side,
    STATE(120), 1,
      sym__hidden_identifier,
    STATE(127), 1,
      sym_table_name,
  [518] = 3,
    ACTIONS(95), 1,
      aux_sym_identifier_token1,
    STATE(84), 1,
      sym__hidden_identifier,
    STATE(85), 1,
      sym_table_name,
  [528] = 3,
    ACTIONS(97), 1,
      aux_sym_identifier_token1,
    STATE(60), 1,
      sym_column_name,
    STATE(62), 1,
      sym__hidden_identifier,
  [538] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_column_settings_repeat1,
  [548] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_relationship_definition_short_repeat1,
  [558] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_column_settings_repeat1,
  [568] = 3,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
    STATE(89), 1,
      sym_project_name,
  [578] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_relationship_definition_short_repeat1,
  [588] = 3,
    ACTIONS(114), 1,
      aux_sym_identifier_token1,
    STATE(125), 1,
      sym_column_name,
    STATE(126), 1,
      sym__hidden_identifier,
  [598] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_relationship_definition_short_repeat1,
  [608] = 3,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_identifier,
  [618] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_column_settings_repeat1,
  [628] = 1,
    ACTIONS(125), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [634] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_relationship_definition_short_repeat1,
  [644] = 3,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    STATE(107), 1,
      sym__hidden_identifier,
    STATE(111), 1,
      sym_column_name,
  [654] = 3,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    STATE(113), 1,
      sym__hidden_identifier,
    STATE(116), 1,
      sym_table_alias,
  [664] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_relationship_definition_short_repeat1,
  [674] = 1,
    ACTIONS(135), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [680] = 3,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      sym__newline,
    STATE(63), 1,
      sym_column_settings,
  [690] = 1,
    ACTIONS(141), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [696] = 1,
    ACTIONS(143), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [701] = 2,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    STATE(91), 1,
      sym_identifier,
  [708] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [713] = 1,
    ACTIONS(149), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [718] = 1,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [723] = 2,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      sym__space,
  [730] = 1,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [735] = 1,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [740] = 2,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_as,
  [747] = 2,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_enquoted_identifier,
  [754] = 1,
    ACTIONS(165), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [759] = 1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [764] = 2,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      sym__space,
  [771] = 1,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [776] = 2,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      sym__space,
  [783] = 1,
    ACTIONS(177), 1,
      sym__newline,
  [787] = 1,
    ACTIONS(179), 1,
      sym__newline,
  [791] = 1,
    ACTIONS(181), 1,
      sym__space,
  [795] = 1,
    ACTIONS(183), 1,
      sym__space,
  [799] = 1,
    ACTIONS(185), 1,
      sym__newline,
  [803] = 1,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
  [807] = 1,
    ACTIONS(189), 1,
      sym__space,
  [811] = 1,
    ACTIONS(191), 1,
      sym__space,
  [815] = 1,
    ACTIONS(193), 1,
      sym__space,
  [819] = 1,
    ACTIONS(195), 1,
      sym__space,
  [823] = 1,
    ACTIONS(197), 1,
      sym__space,
  [827] = 1,
    ACTIONS(199), 1,
      sym__space,
  [831] = 1,
    ACTIONS(201), 1,
      sym__newline,
  [835] = 1,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
  [839] = 1,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
  [843] = 1,
    ACTIONS(207), 1,
      sym__space,
  [847] = 1,
    ACTIONS(209), 1,
      sym__space,
  [851] = 1,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
  [855] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
  [859] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [863] = 1,
    ACTIONS(217), 1,
      sym__space,
  [867] = 1,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [871] = 1,
    ACTIONS(221), 1,
      sym__space,
  [875] = 1,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [879] = 1,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
  [883] = 1,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
  [887] = 1,
    ACTIONS(229), 1,
      sym__space,
  [891] = 1,
    ACTIONS(231), 1,
      aux_sym_identifier_token1,
  [895] = 1,
    ACTIONS(233), 1,
      anon_sym_COLON,
  [899] = 1,
    ACTIONS(141), 1,
      sym__space,
  [903] = 1,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
  [907] = 1,
    ACTIONS(237), 1,
      sym__newline,
  [911] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [915] = 1,
    ACTIONS(135), 1,
      sym__space,
  [919] = 1,
    ACTIONS(241), 1,
      sym__dot,
  [923] = 1,
    ACTIONS(243), 1,
      sym__space,
  [927] = 1,
    ACTIONS(245), 1,
      sym__newline,
  [931] = 1,
    ACTIONS(247), 1,
      sym__space,
  [935] = 1,
    ACTIONS(249), 1,
      sym__space,
  [939] = 1,
    ACTIONS(251), 1,
      sym__space,
  [943] = 1,
    ACTIONS(253), 1,
      sym_column_type,
  [947] = 1,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
  [951] = 1,
    ACTIONS(189), 1,
      sym__dot,
  [955] = 1,
    ACTIONS(255), 1,
      sym__newline,
  [959] = 1,
    ACTIONS(257), 1,
      sym__space,
  [963] = 1,
    ACTIONS(259), 1,
      sym__newline,
  [967] = 1,
    ACTIONS(261), 1,
      sym__newline,
  [971] = 1,
    ACTIONS(135), 1,
      sym__newline,
  [975] = 1,
    ACTIONS(141), 1,
      sym__newline,
  [979] = 1,
    ACTIONS(263), 1,
      sym__dot,
  [983] = 1,
    ACTIONS(265), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 191,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 213,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 229,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 255,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 319,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 339,
  [SMALL_STATE(30)] = 353,
  [SMALL_STATE(31)] = 361,
  [SMALL_STATE(32)] = 373,
  [SMALL_STATE(33)] = 381,
  [SMALL_STATE(34)] = 389,
  [SMALL_STATE(35)] = 401,
  [SMALL_STATE(36)] = 414,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 440,
  [SMALL_STATE(39)] = 453,
  [SMALL_STATE(40)] = 466,
  [SMALL_STATE(41)] = 479,
  [SMALL_STATE(42)] = 492,
  [SMALL_STATE(43)] = 505,
  [SMALL_STATE(44)] = 518,
  [SMALL_STATE(45)] = 528,
  [SMALL_STATE(46)] = 538,
  [SMALL_STATE(47)] = 548,
  [SMALL_STATE(48)] = 558,
  [SMALL_STATE(49)] = 568,
  [SMALL_STATE(50)] = 578,
  [SMALL_STATE(51)] = 588,
  [SMALL_STATE(52)] = 598,
  [SMALL_STATE(53)] = 608,
  [SMALL_STATE(54)] = 618,
  [SMALL_STATE(55)] = 628,
  [SMALL_STATE(56)] = 634,
  [SMALL_STATE(57)] = 644,
  [SMALL_STATE(58)] = 654,
  [SMALL_STATE(59)] = 664,
  [SMALL_STATE(60)] = 674,
  [SMALL_STATE(61)] = 680,
  [SMALL_STATE(62)] = 690,
  [SMALL_STATE(63)] = 696,
  [SMALL_STATE(64)] = 701,
  [SMALL_STATE(65)] = 708,
  [SMALL_STATE(66)] = 713,
  [SMALL_STATE(67)] = 718,
  [SMALL_STATE(68)] = 723,
  [SMALL_STATE(69)] = 730,
  [SMALL_STATE(70)] = 735,
  [SMALL_STATE(71)] = 740,
  [SMALL_STATE(72)] = 747,
  [SMALL_STATE(73)] = 754,
  [SMALL_STATE(74)] = 759,
  [SMALL_STATE(75)] = 764,
  [SMALL_STATE(76)] = 771,
  [SMALL_STATE(77)] = 776,
  [SMALL_STATE(78)] = 783,
  [SMALL_STATE(79)] = 787,
  [SMALL_STATE(80)] = 791,
  [SMALL_STATE(81)] = 795,
  [SMALL_STATE(82)] = 799,
  [SMALL_STATE(83)] = 803,
  [SMALL_STATE(84)] = 807,
  [SMALL_STATE(85)] = 811,
  [SMALL_STATE(86)] = 815,
  [SMALL_STATE(87)] = 819,
  [SMALL_STATE(88)] = 823,
  [SMALL_STATE(89)] = 827,
  [SMALL_STATE(90)] = 831,
  [SMALL_STATE(91)] = 835,
  [SMALL_STATE(92)] = 839,
  [SMALL_STATE(93)] = 843,
  [SMALL_STATE(94)] = 847,
  [SMALL_STATE(95)] = 851,
  [SMALL_STATE(96)] = 855,
  [SMALL_STATE(97)] = 859,
  [SMALL_STATE(98)] = 863,
  [SMALL_STATE(99)] = 867,
  [SMALL_STATE(100)] = 871,
  [SMALL_STATE(101)] = 875,
  [SMALL_STATE(102)] = 879,
  [SMALL_STATE(103)] = 883,
  [SMALL_STATE(104)] = 887,
  [SMALL_STATE(105)] = 891,
  [SMALL_STATE(106)] = 895,
  [SMALL_STATE(107)] = 899,
  [SMALL_STATE(108)] = 903,
  [SMALL_STATE(109)] = 907,
  [SMALL_STATE(110)] = 911,
  [SMALL_STATE(111)] = 915,
  [SMALL_STATE(112)] = 919,
  [SMALL_STATE(113)] = 923,
  [SMALL_STATE(114)] = 927,
  [SMALL_STATE(115)] = 931,
  [SMALL_STATE(116)] = 935,
  [SMALL_STATE(117)] = 939,
  [SMALL_STATE(118)] = 943,
  [SMALL_STATE(119)] = 947,
  [SMALL_STATE(120)] = 951,
  [SMALL_STATE(121)] = 955,
  [SMALL_STATE(122)] = 959,
  [SMALL_STATE(123)] = 963,
  [SMALL_STATE(124)] = 967,
  [SMALL_STATE(125)] = 971,
  [SMALL_STATE(126)] = 975,
  [SMALL_STATE(127)] = 979,
  [SMALL_STATE(128)] = 983,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 11),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 12),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 12),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 10),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [239] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
