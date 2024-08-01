#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_DASH = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_LT_GT = 19,
  sym_Ref = 20,
  aux_sym_identifier_token1 = 21,
  sym__newline = 22,
  sym__space = 23,
  sym__dot = 24,
  anon_sym_SQUOTE = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_project_definition = 28,
  sym_project_name = 29,
  sym_project_property_definition = 30,
  sym_project_property_key = 31,
  sym_table_definition = 32,
  sym_table_name = 33,
  sym_column_definition = 34,
  sym_column_settings = 35,
  sym_column_constraint = 36,
  sym_relationship_definition_short = 37,
  sym_relationship_definition_side = 38,
  sym_relationship_symbol = 39,
  sym_column_name = 40,
  sym_identifier = 41,
  sym_enquoted_identifier = 42,
  sym__hidden_identifier = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_project_definition_repeat1 = 45,
  aux_sym_table_definition_repeat1 = 46,
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
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
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
  [51] = 24,
  [52] = 17,
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
  [65] = 34,
  [66] = 50,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '\'', 88,
        '-', 79,
        '.', 87,
        ':', 66,
        '<', 80,
        '>', 81,
        'N', 43,
        'P', 49,
        'R', 16,
        'T', 7,
        '[', 70,
        ']', 71,
        'd', 9,
        'i', 39,
        'n', 45,
        'p', 30,
        'u', 40,
        '{', 64,
        '}', 65,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '[') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '}') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'j') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == 'q') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 88:
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_Ref] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym__definition] = STATE(2),
    [sym_project_definition] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_relationship_definition_short] = STATE(2),
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
    STATE(3), 5,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_Project,
    ACTIONS(18), 1,
      sym_Table,
    ACTIONS(21), 1,
      sym_Ref,
    STATE(3), 5,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_relationship_definition_short,
      aux_sym_source_file_repeat1,
  [40] = 2,
    STATE(61), 1,
      sym_column_constraint,
    ACTIONS(24), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [52] = 4,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_project_property_key,
    ACTIONS(28), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(6), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [67] = 4,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_project_property_key,
    ACTIONS(28), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(7), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [82] = 4,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_project_property_key,
    ACTIONS(34), 2,
      anon_sym_database_type,
      anon_sym_Note,
    STATE(7), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [97] = 4,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      aux_sym_identifier_token1,
    STATE(42), 1,
      sym_identifier,
    STATE(8), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [111] = 3,
    ACTIONS(44), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_relationship_symbol,
    ACTIONS(42), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [123] = 4,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    STATE(42), 1,
      sym_identifier,
    STATE(12), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [137] = 3,
    ACTIONS(44), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_relationship_symbol,
    ACTIONS(42), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [149] = 4,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_identifier,
    STATE(8), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [163] = 1,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [170] = 1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [177] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [184] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(44), 1,
      sym_relationship_definition_side,
    STATE(45), 1,
      sym_table_name,
    STATE(66), 1,
      sym__hidden_identifier,
  [197] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [204] = 1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [211] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_relationship_definition_side,
    STATE(66), 1,
      sym__hidden_identifier,
    STATE(71), 1,
      sym_table_name,
  [224] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [231] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(45), 1,
      sym_table_name,
    STATE(56), 1,
      sym_relationship_definition_side,
    STATE(66), 1,
      sym__hidden_identifier,
  [244] = 4,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    STATE(20), 1,
      sym_relationship_definition_side,
    STATE(66), 1,
      sym__hidden_identifier,
    STATE(71), 1,
      sym_table_name,
  [257] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [264] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      sym_Project,
      sym_Table,
      sym_Ref,
  [271] = 3,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      sym__newline,
    STATE(37), 1,
      sym_column_settings,
  [281] = 1,
    ACTIONS(74), 3,
      anon_sym_RBRACE,
      anon_sym_database_type,
      anon_sym_Note,
  [287] = 3,
    ACTIONS(76), 1,
      aux_sym_identifier_token1,
    STATE(39), 1,
      sym_table_name,
    STATE(50), 1,
      sym__hidden_identifier,
  [297] = 3,
    ACTIONS(78), 1,
      aux_sym_identifier_token1,
    STATE(51), 1,
      sym_column_name,
    STATE(52), 1,
      sym__hidden_identifier,
  [307] = 3,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    STATE(53), 1,
      sym_identifier,
    STATE(54), 1,
      sym_project_name,
  [317] = 3,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym__hidden_identifier,
    STATE(24), 1,
      sym_column_name,
  [327] = 3,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
  [337] = 2,
    ACTIONS(84), 1,
      aux_sym_identifier_token1,
    STATE(58), 1,
      sym_identifier,
  [344] = 2,
    ACTIONS(86), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
  [351] = 2,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym__newline,
  [358] = 1,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [363] = 1,
    ACTIONS(90), 2,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [368] = 1,
    ACTIONS(94), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [373] = 2,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym_enquoted_identifier,
  [380] = 1,
    ACTIONS(98), 1,
      sym__space,
  [384] = 1,
    ACTIONS(100), 1,
      anon_sym_COLON,
  [388] = 1,
    ACTIONS(102), 1,
      sym__newline,
  [392] = 1,
    ACTIONS(104), 1,
      sym__space,
  [396] = 1,
    ACTIONS(106), 1,
      sym__newline,
  [400] = 1,
    ACTIONS(108), 1,
      sym__space,
  [404] = 1,
    ACTIONS(110), 1,
      sym__dot,
  [408] = 1,
    ACTIONS(112), 1,
      sym__space,
  [412] = 1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
  [416] = 1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
  [420] = 1,
    ACTIONS(118), 1,
      sym__space,
  [424] = 1,
    ACTIONS(120), 1,
      sym__space,
  [428] = 1,
    ACTIONS(68), 1,
      sym__space,
  [432] = 1,
    ACTIONS(60), 1,
      sym__space,
  [436] = 1,
    ACTIONS(122), 1,
      sym__space,
  [440] = 1,
    ACTIONS(124), 1,
      sym__space,
  [444] = 1,
    ACTIONS(126), 1,
      sym__newline,
  [448] = 1,
    ACTIONS(128), 1,
      sym__space,
  [452] = 1,
    ACTIONS(130), 1,
      anon_sym_COLON,
  [456] = 1,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
  [460] = 1,
    ACTIONS(134), 1,
      anon_sym_COLON,
  [464] = 1,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
  [468] = 1,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
  [472] = 1,
    ACTIONS(140), 1,
      sym__newline,
  [476] = 1,
    ACTIONS(142), 1,
      sym__newline,
  [480] = 1,
    ACTIONS(144), 1,
      sym__space,
  [484] = 1,
    ACTIONS(90), 1,
      sym__space,
  [488] = 1,
    ACTIONS(120), 1,
      sym__dot,
  [492] = 1,
    ACTIONS(146), 1,
      sym__space,
  [496] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [500] = 1,
    ACTIONS(150), 1,
      sym__space,
  [504] = 1,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
  [508] = 1,
    ACTIONS(154), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 137,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 184,
  [SMALL_STATE(17)] = 197,
  [SMALL_STATE(18)] = 204,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 231,
  [SMALL_STATE(22)] = 244,
  [SMALL_STATE(23)] = 257,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 271,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 287,
  [SMALL_STATE(28)] = 297,
  [SMALL_STATE(29)] = 307,
  [SMALL_STATE(30)] = 317,
  [SMALL_STATE(31)] = 327,
  [SMALL_STATE(32)] = 337,
  [SMALL_STATE(33)] = 344,
  [SMALL_STATE(34)] = 351,
  [SMALL_STATE(35)] = 358,
  [SMALL_STATE(36)] = 363,
  [SMALL_STATE(37)] = 368,
  [SMALL_STATE(38)] = 373,
  [SMALL_STATE(39)] = 380,
  [SMALL_STATE(40)] = 384,
  [SMALL_STATE(41)] = 388,
  [SMALL_STATE(42)] = 392,
  [SMALL_STATE(43)] = 396,
  [SMALL_STATE(44)] = 400,
  [SMALL_STATE(45)] = 404,
  [SMALL_STATE(46)] = 408,
  [SMALL_STATE(47)] = 412,
  [SMALL_STATE(48)] = 416,
  [SMALL_STATE(49)] = 420,
  [SMALL_STATE(50)] = 424,
  [SMALL_STATE(51)] = 428,
  [SMALL_STATE(52)] = 432,
  [SMALL_STATE(53)] = 436,
  [SMALL_STATE(54)] = 440,
  [SMALL_STATE(55)] = 444,
  [SMALL_STATE(56)] = 448,
  [SMALL_STATE(57)] = 452,
  [SMALL_STATE(58)] = 456,
  [SMALL_STATE(59)] = 460,
  [SMALL_STATE(60)] = 464,
  [SMALL_STATE(61)] = 468,
  [SMALL_STATE(62)] = 472,
  [SMALL_STATE(63)] = 476,
  [SMALL_STATE(64)] = 480,
  [SMALL_STATE(65)] = 484,
  [SMALL_STATE(66)] = 488,
  [SMALL_STATE(67)] = 492,
  [SMALL_STATE(68)] = 496,
  [SMALL_STATE(69)] = 500,
  [SMALL_STATE(70)] = 504,
  [SMALL_STATE(71)] = 508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 8, 0, 7),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 5, 0, 9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_key, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
