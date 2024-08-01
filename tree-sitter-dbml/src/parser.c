#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  sym_relationship_definition_side = 40,
  sym_relationship_symbol = 41,
  sym_column_name = 42,
  sym_identifier = 43,
  sym_enquoted_identifier = 44,
  sym__hidden_identifier = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_project_definition_repeat1 = 47,
  aux_sym_table_definition_repeat1 = 48,
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
    {field_relationship_name, 1},
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
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 34,
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
  [48] = 14,
  [49] = 13,
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
  [69] = 34,
  [70] = 59,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 54,
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
        'N', 46,
        'P', 52,
        'R', 17,
        'T', 8,
        '[', 73,
        ']', 74,
        'd', 10,
        'i', 42,
        'n', 48,
        'p', 33,
        'r', 23,
        'u', 43,
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
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '}') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'j') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == 'q') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(2);
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
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
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
    [sym_source_file] = STATE(73),
    [sym__definition] = STATE(4),
    [sym_project_definition] = STATE(4),
    [sym_table_definition] = STATE(4),
    [sym_relationship_definition_short] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_Project] = ACTIONS(5),
    [sym_Table] = ACTIONS(7),
    [sym_Ref] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_Project,
    ACTIONS(16), 1,
      sym_Table,
    ACTIONS(19), 1,
      sym_Ref,
    STATE(2), 5,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      aux_sym_source_file_repeat1,
  [20] = 3,
    ACTIONS(24), 1,
      anon_sym_ref_COLON,
    STATE(62), 2,
      sym_column_constraint,
      sym_relationship_definition_inline,
    ACTIONS(22), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [36] = 5,
    ACTIONS(5), 1,
      sym_Project,
    ACTIONS(7), 1,
      sym_Table,
    ACTIONS(9), 1,
      sym_Ref,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(2), 5,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      aux_sym_source_file_repeat1,
  [56] = 4,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_project_property_key,
    ACTIONS(30), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(5), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [71] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_project_property_key,
    ACTIONS(35), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(7), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [86] = 4,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_project_property_key,
    ACTIONS(35), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(5), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [101] = 4,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
    STATE(8), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [115] = 4,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [129] = 3,
    ACTIONS(50), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_relationship_symbol,
    ACTIONS(48), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [141] = 3,
    ACTIONS(50), 1,
      anon_sym_LT,
    STATE(18), 1,
      sym_relationship_symbol,
    ACTIONS(48), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [153] = 4,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_identifier,
    STATE(8), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [167] = 1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      sym_Project,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [175] = 1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      sym_Project,
      anon_sym_RBRACK,
      sym_Table,
      sym_Ref,
  [183] = 3,
    ACTIONS(50), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_relationship_symbol,
    ACTIONS(48), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [195] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [202] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [209] = 4,
    ACTIONS(62), 1,
      aux_sym_identifier_token1,
    STATE(68), 1,
      sym_relationship_definition_side,
    STATE(70), 1,
      sym__hidden_identifier,
    STATE(75), 1,
      sym_table_name,
  [222] = 4,
    ACTIONS(62), 1,
      aux_sym_identifier_token1,
    STATE(16), 1,
      sym_relationship_definition_side,
    STATE(70), 1,
      sym__hidden_identifier,
    STATE(75), 1,
      sym_table_name,
  [235] = 4,
    ACTIONS(62), 1,
      aux_sym_identifier_token1,
    STATE(53), 1,
      sym_relationship_definition_side,
    STATE(54), 1,
      sym_table_name,
    STATE(70), 1,
      sym__hidden_identifier,
  [248] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [255] = 4,
    ACTIONS(62), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      sym_relationship_definition_side,
    STATE(70), 1,
      sym__hidden_identifier,
    STATE(75), 1,
      sym_table_name,
  [268] = 4,
    ACTIONS(62), 1,
      aux_sym_identifier_token1,
    STATE(50), 1,
      sym_relationship_definition_side,
    STATE(54), 1,
      sym_table_name,
    STATE(70), 1,
      sym__hidden_identifier,
  [281] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [288] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [295] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [302] = 1,
    ACTIONS(72), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [308] = 3,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(76), 1,
      aux_sym_identifier_token1,
    STATE(71), 1,
      sym_identifier,
  [318] = 3,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(48), 1,
      sym__hidden_identifier,
    STATE(49), 1,
      sym_column_name,
  [328] = 3,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    STATE(13), 1,
      sym_column_name,
    STATE(14), 1,
      sym__hidden_identifier,
  [338] = 3,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym__newline,
    STATE(39), 1,
      sym_column_settings,
  [348] = 3,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_identifier,
    STATE(67), 1,
      sym_project_name,
  [358] = 3,
    ACTIONS(86), 1,
      aux_sym_identifier_token1,
    STATE(59), 1,
      sym__hidden_identifier,
    STATE(64), 1,
      sym_table_name,
  [368] = 1,
    ACTIONS(88), 2,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [373] = 2,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    STATE(31), 1,
      sym_identifier,
  [380] = 2,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym_enquoted_identifier,
  [387] = 2,
    ACTIONS(88), 1,
      sym__newline,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
  [394] = 2,
    ACTIONS(76), 1,
      aux_sym_identifier_token1,
    STATE(58), 1,
      sym_identifier,
  [401] = 1,
    ACTIONS(96), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [406] = 1,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [411] = 1,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
  [415] = 1,
    ACTIONS(102), 1,
      anon_sym_COLON,
  [419] = 1,
    ACTIONS(104), 1,
      sym__space,
  [423] = 1,
    ACTIONS(106), 1,
      sym__space,
  [427] = 1,
    ACTIONS(108), 1,
      sym__space,
  [431] = 1,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [435] = 1,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
  [439] = 1,
    ACTIONS(56), 1,
      sym__space,
  [443] = 1,
    ACTIONS(54), 1,
      sym__space,
  [447] = 1,
    ACTIONS(114), 1,
      sym__space,
  [451] = 1,
    ACTIONS(116), 1,
      sym__newline,
  [455] = 1,
    ACTIONS(118), 1,
      sym__newline,
  [459] = 1,
    ACTIONS(120), 1,
      sym__space,
  [463] = 1,
    ACTIONS(122), 1,
      sym__dot,
  [467] = 1,
    ACTIONS(124), 1,
      sym__newline,
  [471] = 1,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
  [475] = 1,
    ACTIONS(128), 1,
      sym__space,
  [479] = 1,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
  [483] = 1,
    ACTIONS(132), 1,
      sym__space,
  [487] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
  [491] = 1,
    ACTIONS(136), 1,
      sym__space,
  [495] = 1,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
  [499] = 1,
    ACTIONS(140), 1,
      sym__newline,
  [503] = 1,
    ACTIONS(142), 1,
      sym__space,
  [507] = 1,
    ACTIONS(144), 1,
      sym__newline,
  [511] = 1,
    ACTIONS(146), 1,
      sym__space,
  [515] = 1,
    ACTIONS(148), 1,
      sym__space,
  [519] = 1,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
  [523] = 1,
    ACTIONS(88), 1,
      sym__space,
  [527] = 1,
    ACTIONS(132), 1,
      sym__dot,
  [531] = 1,
    ACTIONS(152), 1,
      anon_sym_COLON,
  [535] = 1,
    ACTIONS(154), 1,
      sym__space,
  [539] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [543] = 1,
    ACTIONS(158), 1,
      sym__space,
  [547] = 1,
    ACTIONS(160), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 209,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 248,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 295,
  [SMALL_STATE(27)] = 302,
  [SMALL_STATE(28)] = 308,
  [SMALL_STATE(29)] = 318,
  [SMALL_STATE(30)] = 328,
  [SMALL_STATE(31)] = 338,
  [SMALL_STATE(32)] = 348,
  [SMALL_STATE(33)] = 358,
  [SMALL_STATE(34)] = 368,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 380,
  [SMALL_STATE(37)] = 387,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 406,
  [SMALL_STATE(41)] = 411,
  [SMALL_STATE(42)] = 415,
  [SMALL_STATE(43)] = 419,
  [SMALL_STATE(44)] = 423,
  [SMALL_STATE(45)] = 427,
  [SMALL_STATE(46)] = 431,
  [SMALL_STATE(47)] = 435,
  [SMALL_STATE(48)] = 439,
  [SMALL_STATE(49)] = 443,
  [SMALL_STATE(50)] = 447,
  [SMALL_STATE(51)] = 451,
  [SMALL_STATE(52)] = 455,
  [SMALL_STATE(53)] = 459,
  [SMALL_STATE(54)] = 463,
  [SMALL_STATE(55)] = 467,
  [SMALL_STATE(56)] = 471,
  [SMALL_STATE(57)] = 475,
  [SMALL_STATE(58)] = 479,
  [SMALL_STATE(59)] = 483,
  [SMALL_STATE(60)] = 487,
  [SMALL_STATE(61)] = 491,
  [SMALL_STATE(62)] = 495,
  [SMALL_STATE(63)] = 499,
  [SMALL_STATE(64)] = 503,
  [SMALL_STATE(65)] = 507,
  [SMALL_STATE(66)] = 511,
  [SMALL_STATE(67)] = 515,
  [SMALL_STATE(68)] = 519,
  [SMALL_STATE(69)] = 523,
  [SMALL_STATE(70)] = 527,
  [SMALL_STATE(71)] = 531,
  [SMALL_STATE(72)] = 535,
  [SMALL_STATE(73)] = 539,
  [SMALL_STATE(74)] = 543,
  [SMALL_STATE(75)] = 547,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 8, 0, 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
