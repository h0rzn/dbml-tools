#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 12
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
  anon_sym_ref_COLON = 16,
  anon_sym_DASH = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_LT_GT = 20,
  sym_Ref = 21,
  aux_sym_identifier_token1 = 22,
  sym__newline = 23,
  sym__space = 24,
  sym__dot = 25,
  anon_sym_SQUOTE = 26,
  sym_source_file = 27,
  sym__definition = 28,
  sym_project_definition = 29,
  sym_project_name = 30,
  sym_project_property_definition = 31,
  sym_project_property_key = 32,
  sym_table_definition = 33,
  sym_table_name = 34,
  sym_column_definition = 35,
  sym_column_settings = 36,
  sym_column_constraint = 37,
  sym_relationship_definition_short = 38,
  sym_relationship_definition_inline = 39,
  sym_relationship_definition_long = 40,
  sym_relationship_definition_side = 41,
  sym_relationship_symbol = 42,
  sym_column_name = 43,
  sym_identifier = 44,
  sym_enquoted_identifier = 45,
  sym__hidden_identifier = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_project_definition_repeat1 = 48,
  aux_sym_table_definition_repeat1 = 49,
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
  [anon_sym_ref_COLON] = "ref:",
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
  [sym_relationship_symbol] = "relationship_symbol",
  [sym_column_name] = "column_name",
  [sym_identifier] = "identifier",
  [sym_enquoted_identifier] = "enquoted_identifier",
  [sym__hidden_identifier] = "_hidden_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_project_definition_repeat1] = "project_definition_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
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
  [anon_sym_ref_COLON] = anon_sym_ref_COLON,
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
  [sym_relationship_symbol] = sym_relationship_symbol,
  [sym_column_name] = sym_column_name,
  [sym_identifier] = sym_identifier,
  [sym_enquoted_identifier] = sym_enquoted_identifier,
  [sym__hidden_identifier] = sym__hidden_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_project_definition_repeat1] = aux_sym_project_definition_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
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
  [anon_sym_ref_COLON] = {
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
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
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
    {field_relationship_name, 2},
  [9] =
    {field_col_name, 0},
    {field_col_type, 2},
  [11] =
    {field_project_property_key, 0},
    {field_project_property_value, 3},
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
  [40] = 39,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 46,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 9,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 10,
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
  [88] = 72,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 46,
  [93] = 93,
  [94] = 10,
  [95] = 9,
  [96] = 64,
  [97] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '\'', 92,
        '-', 83,
        '.', 91,
        ':', 69,
        '<', 84,
        '>', 85,
        'N', 45,
        'P', 51,
        'R', 16,
        'T', 7,
        '[', 73,
        ']', 74,
        'd', 9,
        'i', 41,
        'n', 47,
        'p', 32,
        'r', 22,
        'u', 42,
        '{', 67,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '[') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ':') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'j') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == 'q') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 92:
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
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 65},
  [38] = {.lex_state = 65},
  [39] = {.lex_state = 65},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 65},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 65},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
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
    [anon_sym_ref_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_Ref] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
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
    STATE(78), 2,
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
    STATE(87), 1,
      sym_project_property_key,
    ACTIONS(30), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(7), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [73] = 4,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_project_property_key,
    ACTIONS(30), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(5), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [88] = 4,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_project_property_key,
    ACTIONS(36), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(7), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [103] = 3,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(33), 1,
      sym_relationship_symbol,
    ACTIONS(39), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [115] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      sym_Project,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [123] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      sym_Project,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [131] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    STATE(85), 1,
      sym_identifier,
    STATE(16), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [145] = 4,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_identifier,
    STATE(11), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [159] = 3,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(23), 1,
      sym_relationship_symbol,
    ACTIONS(39), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [171] = 3,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(29), 1,
      sym_relationship_symbol,
    ACTIONS(39), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [183] = 3,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym_relationship_symbol,
    ACTIONS(39), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [195] = 4,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      aux_sym_identifier_token1,
    STATE(85), 1,
      sym_identifier,
    STATE(16), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [209] = 3,
    ACTIONS(41), 1,
      anon_sym_LT,
    STATE(31), 1,
      sym_relationship_symbol,
    ACTIONS(39), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [221] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [228] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [235] = 1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [242] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(55), 1,
      sym_relationship_definition_side,
    STATE(64), 1,
      sym_table_name,
    STATE(88), 1,
      sym__hidden_identifier,
  [255] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [262] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_relationship_definition_side,
    STATE(88), 1,
      sym__hidden_identifier,
    STATE(96), 1,
      sym_table_name,
  [275] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(57), 1,
      sym_relationship_definition_side,
    STATE(64), 1,
      sym_table_name,
    STATE(88), 1,
      sym__hidden_identifier,
  [288] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(63), 1,
      sym_relationship_definition_side,
    STATE(64), 1,
      sym_table_name,
    STATE(88), 1,
      sym__hidden_identifier,
  [301] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [308] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [315] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [322] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(30), 1,
      sym_relationship_definition_side,
    STATE(88), 1,
      sym__hidden_identifier,
    STATE(96), 1,
      sym_table_name,
  [335] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [342] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(73), 1,
      sym_relationship_definition_side,
    STATE(88), 1,
      sym__hidden_identifier,
    STATE(97), 1,
      sym_table_name,
  [355] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(64), 1,
      sym_table_name,
    STATE(68), 1,
      sym_relationship_definition_side,
    STATE(88), 1,
      sym__hidden_identifier,
  [368] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(61), 1,
      sym_relationship_definition_side,
    STATE(88), 1,
      sym__hidden_identifier,
    STATE(97), 1,
      sym_table_name,
  [381] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    STATE(86), 1,
      sym_relationship_definition_side,
    STATE(88), 1,
      sym__hidden_identifier,
    STATE(96), 1,
      sym_table_name,
  [394] = 3,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_identifier,
  [404] = 1,
    ACTIONS(78), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [410] = 3,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    STATE(53), 1,
      sym_table_name,
    STATE(72), 1,
      sym__hidden_identifier,
  [420] = 3,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    STATE(81), 1,
      sym_identifier,
    STATE(83), 1,
      sym_project_name,
  [430] = 3,
    ACTIONS(82), 1,
      aux_sym_identifier_token1,
    STATE(70), 1,
      sym__hidden_identifier,
    STATE(75), 1,
      sym_column_name,
  [440] = 3,
    ACTIONS(84), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym__hidden_identifier,
    STATE(10), 1,
      sym_column_name,
  [450] = 3,
    ACTIONS(86), 1,
      aux_sym_identifier_token1,
    STATE(94), 1,
      sym_column_name,
    STATE(95), 1,
      sym__hidden_identifier,
  [460] = 3,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym__newline,
    STATE(43), 1,
      sym_column_settings,
  [470] = 1,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [475] = 2,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_enquoted_identifier,
  [482] = 2,
    ACTIONS(96), 1,
      anon_sym_COLON,
    ACTIONS(98), 1,
      sym__space,
  [489] = 2,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      sym__newline,
  [496] = 1,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [501] = 2,
    ACTIONS(100), 1,
      anon_sym_COLON,
    ACTIONS(102), 1,
      sym__space,
  [508] = 2,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(108), 1,
      sym__space,
  [515] = 2,
    ACTIONS(110), 1,
      aux_sym_identifier_token1,
    STATE(74), 1,
      sym_identifier,
  [522] = 2,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
    STATE(42), 1,
      sym_identifier,
  [529] = 1,
    ACTIONS(114), 1,
      sym__newline,
  [533] = 1,
    ACTIONS(116), 1,
      sym__space,
  [537] = 1,
    ACTIONS(118), 1,
      sym__newline,
  [541] = 1,
    ACTIONS(120), 1,
      sym__space,
  [545] = 1,
    ACTIONS(122), 1,
      sym__space,
  [549] = 1,
    ACTIONS(124), 1,
      sym__space,
  [553] = 1,
    ACTIONS(126), 1,
      sym__newline,
  [557] = 1,
    ACTIONS(128), 1,
      sym__newline,
  [561] = 1,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
  [565] = 1,
    ACTIONS(132), 1,
      sym__newline,
  [569] = 1,
    ACTIONS(134), 1,
      sym__space,
  [573] = 1,
    ACTIONS(136), 1,
      sym__space,
  [577] = 1,
    ACTIONS(138), 1,
      sym__dot,
  [581] = 1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
  [585] = 1,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
  [589] = 1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
  [593] = 1,
    ACTIONS(146), 1,
      sym__space,
  [597] = 1,
    ACTIONS(148), 1,
      aux_sym_identifier_token1,
  [601] = 1,
    ACTIONS(43), 1,
      sym__space,
  [605] = 1,
    ACTIONS(150), 1,
      sym__newline,
  [609] = 1,
    ACTIONS(152), 1,
      sym__space,
  [613] = 1,
    ACTIONS(154), 1,
      sym__newline,
  [617] = 1,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
  [621] = 1,
    ACTIONS(45), 1,
      sym__space,
  [625] = 1,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
  [629] = 1,
    ACTIONS(160), 1,
      sym__space,
  [633] = 1,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
  [637] = 1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
  [641] = 1,
    ACTIONS(166), 1,
      sym__newline,
  [645] = 1,
    ACTIONS(168), 1,
      sym__space,
  [649] = 1,
    ACTIONS(170), 1,
      sym__newline,
  [653] = 1,
    ACTIONS(172), 1,
      sym__space,
  [657] = 1,
    ACTIONS(174), 1,
      sym__space,
  [661] = 1,
    ACTIONS(176), 1,
      sym__space,
  [665] = 1,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
  [669] = 1,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [673] = 1,
    ACTIONS(152), 1,
      sym__dot,
  [677] = 1,
    ACTIONS(182), 1,
      sym__space,
  [681] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [685] = 1,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [689] = 1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
  [693] = 1,
    ACTIONS(188), 1,
      sym__space,
  [697] = 1,
    ACTIONS(45), 1,
      sym__newline,
  [701] = 1,
    ACTIONS(43), 1,
      sym__newline,
  [705] = 1,
    ACTIONS(190), 1,
      sym__dot,
  [709] = 1,
    ACTIONS(192), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 209,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 275,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 315,
  [SMALL_STATE(29)] = 322,
  [SMALL_STATE(30)] = 335,
  [SMALL_STATE(31)] = 342,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 381,
  [SMALL_STATE(35)] = 394,
  [SMALL_STATE(36)] = 404,
  [SMALL_STATE(37)] = 410,
  [SMALL_STATE(38)] = 420,
  [SMALL_STATE(39)] = 430,
  [SMALL_STATE(40)] = 440,
  [SMALL_STATE(41)] = 450,
  [SMALL_STATE(42)] = 460,
  [SMALL_STATE(43)] = 470,
  [SMALL_STATE(44)] = 475,
  [SMALL_STATE(45)] = 482,
  [SMALL_STATE(46)] = 489,
  [SMALL_STATE(47)] = 496,
  [SMALL_STATE(48)] = 501,
  [SMALL_STATE(49)] = 508,
  [SMALL_STATE(50)] = 515,
  [SMALL_STATE(51)] = 522,
  [SMALL_STATE(52)] = 529,
  [SMALL_STATE(53)] = 533,
  [SMALL_STATE(54)] = 537,
  [SMALL_STATE(55)] = 541,
  [SMALL_STATE(56)] = 545,
  [SMALL_STATE(57)] = 549,
  [SMALL_STATE(58)] = 553,
  [SMALL_STATE(59)] = 557,
  [SMALL_STATE(60)] = 561,
  [SMALL_STATE(61)] = 565,
  [SMALL_STATE(62)] = 569,
  [SMALL_STATE(63)] = 573,
  [SMALL_STATE(64)] = 577,
  [SMALL_STATE(65)] = 581,
  [SMALL_STATE(66)] = 585,
  [SMALL_STATE(67)] = 589,
  [SMALL_STATE(68)] = 593,
  [SMALL_STATE(69)] = 597,
  [SMALL_STATE(70)] = 601,
  [SMALL_STATE(71)] = 605,
  [SMALL_STATE(72)] = 609,
  [SMALL_STATE(73)] = 613,
  [SMALL_STATE(74)] = 617,
  [SMALL_STATE(75)] = 621,
  [SMALL_STATE(76)] = 625,
  [SMALL_STATE(77)] = 629,
  [SMALL_STATE(78)] = 633,
  [SMALL_STATE(79)] = 637,
  [SMALL_STATE(80)] = 641,
  [SMALL_STATE(81)] = 645,
  [SMALL_STATE(82)] = 649,
  [SMALL_STATE(83)] = 653,
  [SMALL_STATE(84)] = 657,
  [SMALL_STATE(85)] = 661,
  [SMALL_STATE(86)] = 665,
  [SMALL_STATE(87)] = 669,
  [SMALL_STATE(88)] = 673,
  [SMALL_STATE(89)] = 677,
  [SMALL_STATE(90)] = 681,
  [SMALL_STATE(91)] = 685,
  [SMALL_STATE(92)] = 689,
  [SMALL_STATE(93)] = 693,
  [SMALL_STATE(94)] = 697,
  [SMALL_STATE(95)] = 701,
  [SMALL_STATE(96)] = 705,
  [SMALL_STATE(97)] = 709,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 9),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
