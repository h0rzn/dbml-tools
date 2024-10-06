#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 258
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 34

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  sym_Project = 5,
  sym_database_type = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  anon_sym_default = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_BQUOTE = 12,
  anon_sym_primarykey = 13,
  anon_sym_pk = 14,
  anon_sym_null = 15,
  anon_sym_notnull = 16,
  anon_sym_unique = 17,
  anon_sym_increment = 18,
  sym_Table = 19,
  sym_as = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_name = 23,
  anon_sym_type = 24,
  sym_indexes = 25,
  sym_enum = 26,
  anon_sym_ref_COLON = 27,
  anon_sym_delete = 28,
  anon_sym_on_delete = 29,
  anon_sym_update = 30,
  anon_sym_on_update = 31,
  anon_sym_cascade = 32,
  anon_sym_restrict = 33,
  anon_sym_setnull = 34,
  anon_sym_setdefault = 35,
  anon_sym_noaction = 36,
  anon_sym_DASH = 37,
  anon_sym_LT = 38,
  anon_sym_GT = 39,
  anon_sym_LT_GT = 40,
  sym_Ref = 41,
  aux_sym_ident_basic_token1 = 42,
  sym_ident_inside = 43,
  aux_sym_ident_any_with_nl_token1 = 44,
  anon_sym_LF = 45,
  sym__space = 46,
  sym__dot = 47,
  anon_sym_DQUOTE = 48,
  anon_sym_note = 49,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 50,
  sym_Note = 51,
  sym_source_file = 52,
  sym__definition = 53,
  sym_project_definition = 54,
  sym_project_name = 55,
  sym_project_property_definition = 56,
  sym_table_definition = 57,
  sym_table_name = 58,
  sym_column_definition = 59,
  sym_column_name = 60,
  sym__column_type = 61,
  sym_column_type_basic = 62,
  sym_column_type_ref = 63,
  sym_column_type_ref_item = 64,
  sym_column_settings = 65,
  sym_column_setting_default = 66,
  sym_column_constraint = 67,
  sym_table_alias = 68,
  sym_indexes_definition = 69,
  sym_index_definition = 70,
  sym_index_definition_single = 71,
  sym_index_definition_composite = 72,
  sym_index_column = 73,
  sym_index_settings = 74,
  sym_index_setting = 75,
  sym_enum_definition = 76,
  sym_enum_field = 77,
  sym_enum_name = 78,
  sym_relationship_definition_short = 79,
  sym_relationship_definition_inline = 80,
  sym_relationship_definition_long = 81,
  sym_relationship_definition_side = 82,
  sym_relationship_setting_definition = 83,
  sym_relationship_event = 84,
  sym_relationship_action = 85,
  sym_relationship_symbol = 86,
  sym_ident_basic = 87,
  sym__ident_basic = 88,
  sym_ident_any_with_nl = 89,
  sym__newline = 90,
  sym_enquoted_identifier = 91,
  sym_enquoted_identifier_multi = 92,
  sym_enquoted_identifier_multi2 = 93,
  sym_double_enquoted_identifier = 94,
  sym_note_setting_standalone = 95,
  sym_note_setting = 96,
  sym_note_standalone = 97,
  sym_note_standalone_multiline = 98,
  sym_note_value_mutliline = 99,
  sym_note = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_project_definition_repeat1 = 102,
  aux_sym_table_definition_repeat1 = 103,
  aux_sym_column_settings_repeat1 = 104,
  aux_sym_column_setting_default_repeat1 = 105,
  aux_sym_indexes_definition_repeat1 = 106,
  aux_sym_index_definition_composite_repeat1 = 107,
  aux_sym_enum_definition_repeat1 = 108,
  aux_sym_relationship_definition_short_repeat1 = 109,
  aux_sym_note_value_mutliline_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_Project] = "Project",
  [sym_database_type] = "database_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_name] = "name",
  [anon_sym_type] = "type",
  [sym_indexes] = "indexes",
  [sym_enum] = "enum",
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
  [aux_sym_ident_basic_token1] = "ident_basic_token1",
  [sym_ident_inside] = "ident_inside",
  [aux_sym_ident_any_with_nl_token1] = "ident_any_with_nl_token1",
  [anon_sym_LF] = "\n",
  [sym__space] = "_space",
  [sym__dot] = "_dot",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_note] = "note",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [sym_Note] = "Note",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_project_definition] = "project_definition",
  [sym_project_name] = "project_name",
  [sym_project_property_definition] = "project_property_definition",
  [sym_table_definition] = "table_definition",
  [sym_table_name] = "table_name",
  [sym_column_definition] = "column_definition",
  [sym_column_name] = "column_name",
  [sym__column_type] = "_column_type",
  [sym_column_type_basic] = "column_type_basic",
  [sym_column_type_ref] = "column_type_ref",
  [sym_column_type_ref_item] = "column_type_ref_item",
  [sym_column_settings] = "column_settings",
  [sym_column_setting_default] = "column_setting_default",
  [sym_column_constraint] = "column_constraint",
  [sym_table_alias] = "table_alias",
  [sym_indexes_definition] = "indexes_definition",
  [sym_index_definition] = "index_definition",
  [sym_index_definition_single] = "index_definition_single",
  [sym_index_definition_composite] = "index_definition_composite",
  [sym_index_column] = "index_column",
  [sym_index_settings] = "index_settings",
  [sym_index_setting] = "index_setting",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_field] = "enum_field",
  [sym_enum_name] = "enum_name",
  [sym_relationship_definition_short] = "relationship_definition_short",
  [sym_relationship_definition_inline] = "relationship_definition_inline",
  [sym_relationship_definition_long] = "relationship_definition_long",
  [sym_relationship_definition_side] = "relationship_definition_side",
  [sym_relationship_setting_definition] = "relationship_setting_definition",
  [sym_relationship_event] = "relationship_event",
  [sym_relationship_action] = "relationship_action",
  [sym_relationship_symbol] = "relationship_symbol",
  [sym_ident_basic] = "ident_basic",
  [sym__ident_basic] = "_ident_basic",
  [sym_ident_any_with_nl] = "ident_any_with_nl",
  [sym__newline] = "_newline",
  [sym_enquoted_identifier] = "enquoted_identifier",
  [sym_enquoted_identifier_multi] = "enquoted_identifier_multi",
  [sym_enquoted_identifier_multi2] = "enquoted_identifier_multi2",
  [sym_double_enquoted_identifier] = "double_enquoted_identifier",
  [sym_note_setting_standalone] = "note_setting_standalone",
  [sym_note_setting] = "note_setting",
  [sym_note_standalone] = "note_standalone",
  [sym_note_standalone_multiline] = "note_standalone_multiline",
  [sym_note_value_mutliline] = "note_value_mutliline",
  [sym_note] = "note",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_project_definition_repeat1] = "project_definition_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_column_setting_default_repeat1] = "column_setting_default_repeat1",
  [aux_sym_indexes_definition_repeat1] = "indexes_definition_repeat1",
  [aux_sym_index_definition_composite_repeat1] = "index_definition_composite_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_relationship_definition_short_repeat1] = "relationship_definition_short_repeat1",
  [aux_sym_note_value_mutliline_repeat1] = "note_value_mutliline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_Project] = sym_Project,
  [sym_database_type] = sym_database_type,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_type] = anon_sym_type,
  [sym_indexes] = sym_indexes,
  [sym_enum] = sym_enum,
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
  [aux_sym_ident_basic_token1] = aux_sym_ident_basic_token1,
  [sym_ident_inside] = sym_ident_inside,
  [aux_sym_ident_any_with_nl_token1] = aux_sym_ident_any_with_nl_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym__space] = sym__space,
  [sym__dot] = sym__dot,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [sym_Note] = sym_Note,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_project_definition] = sym_project_definition,
  [sym_project_name] = sym_project_name,
  [sym_project_property_definition] = sym_project_property_definition,
  [sym_table_definition] = sym_table_definition,
  [sym_table_name] = sym_table_name,
  [sym_column_definition] = sym_column_definition,
  [sym_column_name] = sym_column_name,
  [sym__column_type] = sym__column_type,
  [sym_column_type_basic] = sym_column_type_basic,
  [sym_column_type_ref] = sym_column_type_ref,
  [sym_column_type_ref_item] = sym_column_type_ref_item,
  [sym_column_settings] = sym_column_settings,
  [sym_column_setting_default] = sym_column_setting_default,
  [sym_column_constraint] = sym_column_constraint,
  [sym_table_alias] = sym_table_alias,
  [sym_indexes_definition] = sym_indexes_definition,
  [sym_index_definition] = sym_index_definition,
  [sym_index_definition_single] = sym_index_definition_single,
  [sym_index_definition_composite] = sym_index_definition_composite,
  [sym_index_column] = sym_index_column,
  [sym_index_settings] = sym_index_settings,
  [sym_index_setting] = sym_index_setting,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_name] = sym_enum_name,
  [sym_relationship_definition_short] = sym_relationship_definition_short,
  [sym_relationship_definition_inline] = sym_relationship_definition_inline,
  [sym_relationship_definition_long] = sym_relationship_definition_long,
  [sym_relationship_definition_side] = sym_relationship_definition_side,
  [sym_relationship_setting_definition] = sym_relationship_setting_definition,
  [sym_relationship_event] = sym_relationship_event,
  [sym_relationship_action] = sym_relationship_action,
  [sym_relationship_symbol] = sym_relationship_symbol,
  [sym_ident_basic] = sym_ident_basic,
  [sym__ident_basic] = sym__ident_basic,
  [sym_ident_any_with_nl] = sym_ident_any_with_nl,
  [sym__newline] = sym__newline,
  [sym_enquoted_identifier] = sym_enquoted_identifier,
  [sym_enquoted_identifier_multi] = sym_enquoted_identifier_multi,
  [sym_enquoted_identifier_multi2] = sym_enquoted_identifier_multi2,
  [sym_double_enquoted_identifier] = sym_double_enquoted_identifier,
  [sym_note_setting_standalone] = sym_note_setting_standalone,
  [sym_note_setting] = sym_note_setting,
  [sym_note_standalone] = sym_note_standalone,
  [sym_note_standalone_multiline] = sym_note_standalone_multiline,
  [sym_note_value_mutliline] = sym_note_value_mutliline,
  [sym_note] = sym_note,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_project_definition_repeat1] = aux_sym_project_definition_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_column_setting_default_repeat1] = aux_sym_column_setting_default_repeat1,
  [aux_sym_indexes_definition_repeat1] = aux_sym_indexes_definition_repeat1,
  [aux_sym_index_definition_composite_repeat1] = aux_sym_index_definition_composite_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_relationship_definition_short_repeat1] = aux_sym_relationship_definition_short_repeat1,
  [aux_sym_note_value_mutliline_repeat1] = aux_sym_note_value_mutliline_repeat1,
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
  [sym_Project] = {
    .visible = true,
    .named = true,
  },
  [sym_database_type] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_indexes] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
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
  [aux_sym_ident_basic_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ident_inside] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ident_any_with_nl_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_Note] = {
    .visible = true,
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
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym__column_type] = {
    .visible = false,
    .named = true,
  },
  [sym_column_type_basic] = {
    .visible = true,
    .named = true,
  },
  [sym_column_type_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_column_type_ref_item] = {
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
  [sym_indexes_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_index_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_index_definition_single] = {
    .visible = true,
    .named = true,
  },
  [sym_index_definition_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_index_column] = {
    .visible = true,
    .named = true,
  },
  [sym_index_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_index_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_name] = {
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
  [sym_ident_basic] = {
    .visible = true,
    .named = true,
  },
  [sym__ident_basic] = {
    .visible = false,
    .named = true,
  },
  [sym_ident_any_with_nl] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_enquoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enquoted_identifier_multi] = {
    .visible = true,
    .named = true,
  },
  [sym_enquoted_identifier_multi2] = {
    .visible = true,
    .named = true,
  },
  [sym_double_enquoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_note_setting_standalone] = {
    .visible = true,
    .named = true,
  },
  [sym_note_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_note_standalone] = {
    .visible = true,
    .named = true,
  },
  [sym_note_standalone_multiline] = {
    .visible = true,
    .named = true,
  },
  [sym_note_value_mutliline] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
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
  [aux_sym_indexes_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_definition_composite_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relationship_definition_short_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_value_mutliline_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_col_name = 1,
  field_col_settings = 2,
  field_col_type = 3,
  field_column = 4,
  field_column_name = 5,
  field_column_ref_type_left = 6,
  field_column_ref_type_right = 7,
  field_enum_field = 8,
  field_enum_field_name = 9,
  field_enum_name = 10,
  field_index_column = 11,
  field_index_settings = 12,
  field_indexes = 13,
  field_note = 14,
  field_project_name = 15,
  field_project_property = 16,
  field_relationship_name = 17,
  field_table_alias = 18,
  field_table_alias_name = 19,
  field_table_name = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_col_settings] = "col_settings",
  [field_col_type] = "col_type",
  [field_column] = "column",
  [field_column_name] = "column_name",
  [field_column_ref_type_left] = "column_ref_type_left",
  [field_column_ref_type_right] = "column_ref_type_right",
  [field_enum_field] = "enum_field",
  [field_enum_field_name] = "enum_field_name",
  [field_enum_name] = "enum_name",
  [field_index_column] = "index_column",
  [field_index_settings] = "index_settings",
  [field_indexes] = "indexes",
  [field_note] = "note",
  [field_project_name] = "project_name",
  [field_project_property] = "project_property",
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
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 3},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 4},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 2},
  [23] = {.index = 40, .length = 3},
  [24] = {.index = 43, .length = 3},
  [25] = {.index = 46, .length = 3},
  [26] = {.index = 49, .length = 1},
  [27] = {.index = 50, .length = 4},
  [28] = {.index = 54, .length = 4},
  [29] = {.index = 58, .length = 4},
  [30] = {.index = 62, .length = 1},
  [31] = {.index = 63, .length = 5},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 2},
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
    {field_enum_name, 2},
  [6] =
    {field_enum_field_name, 0},
  [7] =
    {field_enum_field, 0},
  [8] =
    {field_project_name, 2},
    {field_project_property, 6},
  [10] =
    {field_indexes, 6},
    {field_table_name, 2},
  [12] =
    {field_note, 6},
    {field_table_name, 2},
  [14] =
    {field_column, 6},
    {field_table_name, 2},
  [16] =
    {field_indexes, 6},
    {field_note, 7},
    {field_table_name, 2},
  [19] =
    {field_column, 6},
    {field_indexes, 7},
    {field_table_name, 2},
  [22] =
    {field_column, 6},
    {field_note, 7},
    {field_table_name, 2},
  [25] =
    {field_relationship_name, 2},
  [26] =
    {field_col_name, 0},
    {field_col_settings, 3},
    {field_col_type, 2},
  [29] =
    {field_col_name, 0},
    {field_col_type, 2},
  [31] =
    {field_column, 6},
    {field_indexes, 7},
    {field_note, 8},
    {field_table_name, 2},
  [35] =
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [37] =
    {field_index_column, 0},
  [38] =
    {field_column_ref_type_left, 0},
    {field_column_ref_type_right, 2},
  [40] =
    {field_indexes, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [43] =
    {field_note, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [46] =
    {field_column, 9},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [49] =
    {field_index_settings, 1},
  [50] =
    {field_indexes, 9},
    {field_note, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [54] =
    {field_column, 9},
    {field_indexes, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [58] =
    {field_column, 9},
    {field_note, 10},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [62] =
    {field_index_column, 1},
  [63] =
    {field_column, 9},
    {field_indexes, 10},
    {field_note, 11},
    {field_table_alias_name, 5},
    {field_table_name, 2},
  [68] =
    {field_index_column, 1},
    {field_index_column, 2, .inherited = true},
  [70] =
    {field_index_column, 0, .inherited = true},
    {field_index_column, 1, .inherited = true},
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
  [85] = 82,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 73,
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
  [104] = 92,
  [105] = 92,
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
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 16,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 133,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 16,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 13,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 11,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 185,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 69,
  [248] = 83,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 11,
  [253] = 13,
  [254] = 223,
  [255] = 255,
  [256] = 256,
  [257] = 223,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(141);
      ADVANCE_MAP(
        '"', 206,
        '\'', 152,
        '(', 162,
        ')', 163,
        ',', 149,
        '-', 179,
        '.', 205,
        '/', 14,
        ':', 145,
        '<', 180,
        '>', 181,
        'N', 100,
        'P', 107,
        'R', 43,
        'T', 18,
        '[', 148,
        ']', 150,
        '`', 153,
        'a', 111,
        'c', 20,
        'd', 21,
        'e', 93,
        'i', 94,
        'n', 19,
        'o', 95,
        'p', 77,
        'r', 44,
        's', 60,
        't', 137,
        'u', 97,
        '{', 143,
        '}', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '[') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(195);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == ':') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 206,
        '\'', 152,
        '(', 162,
        ')', 163,
        ',', 149,
        ']', 150,
        '`', 153,
        '{', 143,
        '}', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == '}') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 'j') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 106:
      if (lookahead == 'q') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_Project);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_database_type);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_Table);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_on_delete);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_on_update);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_Ref);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == 'x') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_ident_basic_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident_inside);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident_inside);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_ident_any_with_nl_token1);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_ident_any_with_nl_token1);
      if (lookahead == '\n') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_ident_any_with_nl_token1);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_ident_any_with_nl_token1);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_ident_any_with_nl_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_Note);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_Note);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
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
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_Project] = ACTIONS(1),
    [sym_database_type] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_indexes] = ACTIONS(1),
    [sym_enum] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(222),
    [sym__definition] = STATE(5),
    [sym_project_definition] = STATE(5),
    [sym_table_definition] = STATE(5),
    [sym_enum_definition] = STATE(5),
    [sym_relationship_definition_short] = STATE(5),
    [sym_relationship_definition_long] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_Project] = ACTIONS(7),
    [sym_Table] = ACTIONS(9),
    [sym_enum] = ACTIONS(11),
    [sym_Ref] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_ref_COLON,
    ACTIONS(21), 1,
      anon_sym_note,
    STATE(199), 1,
      sym_note,
    STATE(99), 4,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
      sym_note_setting,
    ACTIONS(17), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [27] = 6,
    ACTIONS(15), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_ref_COLON,
    ACTIONS(21), 1,
      anon_sym_note,
    STATE(199), 1,
      sym_note,
    STATE(148), 4,
      sym_column_setting_default,
      sym_column_constraint,
      sym_relationship_definition_inline,
      sym_note_setting,
    ACTIONS(17), 6,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [54] = 7,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_Project,
    ACTIONS(31), 1,
      sym_Table,
    ACTIONS(34), 1,
      sym_enum,
    ACTIONS(37), 1,
      sym_Ref,
    STATE(4), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [82] = 7,
    ACTIONS(7), 1,
      sym_Project,
    ACTIONS(9), 1,
      sym_Table,
    ACTIONS(11), 1,
      sym_enum,
    ACTIONS(13), 1,
      sym_Ref,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_comment,
    STATE(4), 7,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition_short,
      sym_relationship_definition_long,
      aux_sym_source_file_repeat1,
  [110] = 9,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(50), 1,
      sym_Note,
    STATE(113), 1,
      sym_indexes_definition,
    STATE(204), 1,
      sym_note_standalone,
    STATE(206), 1,
      sym_column_name,
    STATE(225), 1,
      sym__ident_basic,
    STATE(9), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [139] = 9,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(50), 1,
      sym_Note,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_indexes_definition,
    STATE(188), 1,
      sym_note_standalone,
    STATE(206), 1,
      sym_column_name,
    STATE(225), 1,
      sym__ident_basic,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [168] = 9,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(50), 1,
      sym_Note,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_indexes_definition,
    STATE(206), 1,
      sym_column_name,
    STATE(224), 1,
      sym_note_standalone,
    STATE(225), 1,
      sym__ident_basic,
    STATE(7), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [197] = 9,
    ACTIONS(46), 1,
      sym_indexes,
    ACTIONS(48), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(50), 1,
      sym_Note,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_indexes_definition,
    STATE(182), 1,
      sym_note_standalone,
    STATE(206), 1,
      sym_column_name,
    STATE(225), 1,
      sym__ident_basic,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [226] = 8,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      aux_sym_ident_basic_token1,
    STATE(10), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(125), 1,
      sym_index_column,
    STATE(155), 1,
      sym_index_definition,
    STATE(157), 1,
      sym_ident_basic,
    STATE(102), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [252] = 1,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_enum,
      sym_Ref,
  [264] = 8,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym_ident_basic_token1,
    STATE(14), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(125), 1,
      sym_index_column,
    STATE(155), 1,
      sym_index_definition,
    STATE(157), 1,
      sym_ident_basic,
    STATE(102), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [290] = 1,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_Table,
      sym_enum,
      sym_Ref,
  [302] = 8,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_indexes_definition_repeat1,
    STATE(125), 1,
      sym_index_column,
    STATE(155), 1,
      sym_index_definition,
    STATE(157), 1,
      sym_ident_basic,
    STATE(102), 2,
      sym_index_definition_single,
      sym_index_definition_composite,
  [328] = 6,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      aux_sym_ident_basic_token1,
    STATE(206), 1,
      sym_column_name,
    STATE(225), 1,
      sym__ident_basic,
    ACTIONS(80), 2,
      sym_indexes,
      sym_Note,
    STATE(15), 2,
      sym_column_definition,
      aux_sym_table_definition_repeat1,
  [349] = 1,
    ACTIONS(85), 7,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      aux_sym_ident_basic_token1,
      anon_sym_DQUOTE,
  [359] = 2,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [371] = 7,
    ACTIONS(72), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_enum_definition_repeat1,
    STATE(84), 1,
      sym_enum_field,
    STATE(162), 1,
      sym_ident_basic,
    STATE(168), 1,
      sym_double_enquoted_identifier,
  [393] = 7,
    ACTIONS(72), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_enum_definition_repeat1,
    STATE(84), 1,
      sym_enum_field,
    STATE(162), 1,
      sym_ident_basic,
    STATE(168), 1,
      sym_double_enquoted_identifier,
  [415] = 2,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [427] = 7,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_enum_definition_repeat1,
    STATE(84), 1,
      sym_enum_field,
    STATE(162), 1,
      sym_ident_basic,
    STATE(168), 1,
      sym_double_enquoted_identifier,
  [449] = 3,
    STATE(175), 1,
      sym_relationship_setting_definition,
    STATE(238), 1,
      sym_relationship_event,
    ACTIONS(109), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [462] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [471] = 1,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [480] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [489] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [498] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [507] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [516] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [525] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [534] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [543] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [552] = 3,
    STATE(120), 1,
      sym_relationship_setting_definition,
    STATE(238), 1,
      sym_relationship_event,
    ACTIONS(109), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [565] = 1,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [574] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [583] = 1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [592] = 3,
    STATE(94), 1,
      sym_relationship_setting_definition,
    STATE(238), 1,
      sym_relationship_event,
    ACTIONS(109), 4,
      anon_sym_delete,
      anon_sym_on_delete,
      anon_sym_update,
      anon_sym_on_update,
  [605] = 2,
    STATE(163), 1,
      sym_relationship_action,
    ACTIONS(137), 5,
      anon_sym_cascade,
      anon_sym_restrict,
      anon_sym_setnull,
      anon_sym_setdefault,
      anon_sym_noaction,
  [616] = 1,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [625] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [634] = 1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [643] = 1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [652] = 1,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [661] = 1,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [670] = 1,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [679] = 4,
    ACTIONS(153), 1,
      aux_sym_ident_basic_token1,
    STATE(114), 1,
      sym__ident_basic,
    STATE(251), 1,
      sym_column_type_ref_item,
    STATE(80), 3,
      sym__column_type,
      sym_column_type_basic,
      sym_column_type_ref,
  [694] = 1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [703] = 1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [712] = 1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [721] = 1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [730] = 1,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [739] = 1,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_Project,
      sym_Table,
      sym_enum,
      sym_Ref,
  [748] = 3,
    ACTIONS(169), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(167), 2,
      aux_sym_ident_any_with_nl_token1,
      anon_sym_LF,
    STATE(55), 2,
      sym_ident_any_with_nl,
      aux_sym_note_value_mutliline_repeat1,
  [760] = 3,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(86), 1,
      sym_relationship_symbol,
    ACTIONS(171), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [772] = 3,
    ACTIONS(178), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(175), 2,
      aux_sym_ident_any_with_nl_token1,
      anon_sym_LF,
    STATE(55), 2,
      sym_ident_any_with_nl,
      aux_sym_note_value_mutliline_repeat1,
  [784] = 3,
    ACTIONS(182), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(180), 2,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    STATE(56), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [796] = 3,
    STATE(236), 1,
      sym_note_value_mutliline,
    ACTIONS(167), 2,
      aux_sym_ident_any_with_nl_token1,
      anon_sym_LF,
    STATE(53), 2,
      sym_ident_any_with_nl,
      aux_sym_note_value_mutliline_repeat1,
  [808] = 3,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(70), 1,
      sym_relationship_symbol,
    ACTIONS(171), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [820] = 3,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(72), 1,
      sym_relationship_symbol,
    ACTIONS(171), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [832] = 4,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym_database_type,
    ACTIONS(190), 1,
      sym_Note,
    STATE(60), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [846] = 4,
    ACTIONS(195), 1,
      anon_sym_name,
    ACTIONS(197), 1,
      anon_sym_type,
    STATE(210), 1,
      sym_index_setting,
    ACTIONS(193), 2,
      anon_sym_pk,
      anon_sym_unique,
  [860] = 3,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(75), 1,
      sym_relationship_symbol,
    ACTIONS(171), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [872] = 4,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_database_type,
    ACTIONS(203), 1,
      sym_Note,
    STATE(65), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [886] = 3,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(87), 1,
      sym_relationship_symbol,
    ACTIONS(171), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_GT,
  [898] = 4,
    ACTIONS(201), 1,
      sym_database_type,
    ACTIONS(203), 1,
      sym_Note,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(60), 2,
      sym_project_property_definition,
      aux_sym_project_definition_repeat1,
  [912] = 2,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 3,
      sym_indexes,
      aux_sym_ident_basic_token1,
      sym_Note,
  [921] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(219), 1,
      sym_relationship_definition_side,
    STATE(223), 1,
      sym_table_name,
    STATE(243), 1,
      sym__ident_basic,
  [934] = 3,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    STATE(56), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [945] = 1,
    ACTIONS(217), 4,
      anon_sym_RBRACE,
      sym_database_type,
      anon_sym_RBRACK,
      sym_Note,
  [952] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(153), 1,
      sym_relationship_definition_side,
    STATE(243), 1,
      sym__ident_basic,
    STATE(257), 1,
      sym_table_name,
  [965] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(223), 1,
      sym_table_name,
    STATE(243), 1,
      sym__ident_basic,
    STATE(255), 1,
      sym_relationship_definition_side,
  [978] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(20), 1,
      sym_relationship_definition_side,
    STATE(243), 1,
      sym__ident_basic,
    STATE(254), 1,
      sym_table_name,
  [991] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    STATE(56), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [1002] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(192), 1,
      sym_relationship_definition_side,
    STATE(223), 1,
      sym_table_name,
    STATE(243), 1,
      sym__ident_basic,
  [1015] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(141), 1,
      sym_relationship_definition_side,
    STATE(243), 1,
      sym__ident_basic,
    STATE(254), 1,
      sym_table_name,
  [1028] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(221), 1,
      anon_sym_BQUOTE,
    STATE(81), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [1039] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    STATE(68), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [1050] = 2,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 3,
      sym_indexes,
      aux_sym_ident_basic_token1,
      sym_Note,
  [1059] = 2,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 3,
      sym_indexes,
      aux_sym_ident_basic_token1,
      sym_Note,
  [1068] = 4,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym__newline,
    STATE(79), 1,
      sym_column_settings,
  [1081] = 3,
    ACTIONS(213), 1,
      anon_sym_BQUOTE,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    STATE(56), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [1092] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(89), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [1103] = 1,
    ACTIONS(237), 4,
      anon_sym_RBRACE,
      sym_database_type,
      anon_sym_RBRACK,
      sym_Note,
  [1110] = 4,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym__newline,
    STATE(127), 1,
      sym_note_setting_standalone,
  [1123] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    STATE(73), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [1134] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(17), 1,
      sym_relationship_definition_side,
    STATE(243), 1,
      sym__ident_basic,
    STATE(254), 1,
      sym_table_name,
  [1147] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(128), 1,
      sym_relationship_definition_side,
    STATE(243), 1,
      sym__ident_basic,
    STATE(257), 1,
      sym_table_name,
  [1160] = 2,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 3,
      sym_indexes,
      aux_sym_ident_basic_token1,
      sym_Note,
  [1169] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    STATE(56), 2,
      sym_ident_basic,
      aux_sym_column_setting_default_repeat1,
  [1180] = 4,
    ACTIONS(211), 1,
      aux_sym_ident_basic_token1,
    STATE(223), 1,
      sym_table_name,
    STATE(227), 1,
      sym_relationship_definition_side,
    STATE(243), 1,
      sym__ident_basic,
  [1193] = 3,
    ACTIONS(251), 1,
      aux_sym_ident_basic_token1,
    STATE(185), 1,
      sym__ident_basic,
    STATE(202), 1,
      sym_table_name,
  [1203] = 3,
    ACTIONS(253), 1,
      aux_sym_ident_basic_token1,
    STATE(225), 1,
      sym__ident_basic,
    STATE(230), 1,
      sym_column_name,
  [1213] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_index_definition_composite_repeat1,
  [1223] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1233] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1243] = 3,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      sym_Note,
    STATE(249), 1,
      sym_note_standalone,
  [1253] = 3,
    ACTIONS(270), 1,
      sym_Note,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_note_standalone,
  [1263] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_index_definition_composite_repeat1,
  [1273] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_column_settings_repeat1,
  [1283] = 1,
    ACTIONS(283), 3,
      aux_sym_ident_any_with_nl_token1,
      anon_sym_LF,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1289] = 1,
    ACTIONS(101), 3,
      anon_sym_RBRACE,
      aux_sym_ident_basic_token1,
      anon_sym_DQUOTE,
  [1295] = 3,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_index_settings,
  [1305] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    STATE(93), 1,
      sym_index_column,
    STATE(133), 1,
      sym_ident_basic,
  [1315] = 3,
    ACTIONS(289), 1,
      aux_sym_ident_basic_token1,
    STATE(11), 1,
      sym_column_name,
    STATE(13), 1,
      sym__ident_basic,
  [1325] = 3,
    ACTIONS(291), 1,
      aux_sym_ident_basic_token1,
    STATE(252), 1,
      sym_column_name,
    STATE(253), 1,
      sym__ident_basic,
  [1335] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_column_settings_repeat1,
  [1345] = 1,
    ACTIONS(295), 3,
      anon_sym_RBRACE,
      sym_database_type,
      sym_Note,
  [1351] = 1,
    ACTIONS(58), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_ident_basic_token1,
  [1357] = 3,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      aux_sym_ident_basic_token1,
    STATE(152), 1,
      sym_ident_basic,
  [1367] = 3,
    ACTIONS(299), 1,
      aux_sym_ident_basic_token1,
    STATE(189), 1,
      sym_enum_name,
    STATE(191), 1,
      sym_ident_basic,
  [1377] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1387] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1397] = 3,
    ACTIONS(270), 1,
      sym_Note,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_note_standalone,
  [1407] = 3,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      sym__dot,
  [1417] = 3,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    STATE(133), 1,
      sym_ident_basic,
    STATE(146), 1,
      sym_index_column,
  [1427] = 3,
    ACTIONS(313), 1,
      aux_sym_ident_basic_token1,
    STATE(166), 1,
      sym_column_type_ref_item,
    STATE(167), 1,
      sym__ident_basic,
  [1437] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_index_definition_composite_repeat1,
  [1447] = 1,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      aux_sym_ident_basic_token1,
      anon_sym_DQUOTE,
  [1453] = 1,
    ACTIONS(319), 3,
      anon_sym_RBRACE,
      sym_database_type,
      sym_Note,
  [1459] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_relationship_definition_short_repeat1,
  [1469] = 3,
    ACTIONS(270), 1,
      sym_Note,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym_note_standalone,
  [1479] = 3,
    ACTIONS(325), 1,
      aux_sym_ident_basic_token1,
    STATE(231), 1,
      sym__ident_basic,
    STATE(244), 1,
      sym_table_alias,
  [1489] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_column_settings_repeat1,
  [1499] = 3,
    ACTIONS(299), 1,
      aux_sym_ident_basic_token1,
    STATE(186), 1,
      sym_ident_basic,
    STATE(190), 1,
      sym_project_name,
  [1509] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_LF,
  [1516] = 2,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    STATE(147), 1,
      sym_enquoted_identifier_multi2,
  [1523] = 2,
    ACTIONS(338), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym__newline,
  [1530] = 2,
    ACTIONS(340), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym__newline,
  [1537] = 2,
    ACTIONS(342), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__newline,
  [1544] = 2,
    ACTIONS(344), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__newline,
  [1551] = 2,
    ACTIONS(346), 1,
      anon_sym_LF,
    STATE(142), 1,
      sym__newline,
  [1558] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__newline,
  [1565] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1570] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_LF,
  [1577] = 2,
    ACTIONS(356), 1,
      anon_sym_COLON,
    ACTIONS(358), 1,
      sym__space,
  [1584] = 2,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
  [1591] = 2,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    STATE(240), 1,
      sym_ident_basic,
  [1598] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1603] = 1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1608] = 2,
    ACTIONS(366), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_enquoted_identifier,
  [1615] = 1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1620] = 2,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      sym_enquoted_identifier_multi,
  [1627] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1632] = 2,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    STATE(235), 1,
      sym_ident_basic,
  [1639] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_LF,
  [1646] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1651] = 1,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1656] = 1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1661] = 2,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(384), 1,
      sym_as,
  [1668] = 2,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      sym__space,
  [1675] = 2,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_LF,
  [1682] = 2,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(396), 1,
      sym__space,
  [1689] = 2,
    ACTIONS(398), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym__newline,
  [1696] = 1,
    ACTIONS(400), 2,
      anon_sym_RBRACE,
      sym_Note,
  [1701] = 2,
    ACTIONS(402), 1,
      anon_sym_LF,
    STATE(108), 1,
      sym__newline,
  [1708] = 2,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__newline,
  [1715] = 2,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
  [1722] = 2,
    ACTIONS(408), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym__newline,
  [1729] = 2,
    ACTIONS(410), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym__newline,
  [1736] = 2,
    ACTIONS(215), 1,
      aux_sym_ident_basic_token1,
    STATE(195), 1,
      sym_ident_basic,
  [1743] = 1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1748] = 2,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_LF,
  [1755] = 1,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1760] = 2,
    ACTIONS(420), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym__newline,
  [1767] = 1,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1772] = 2,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_LF,
  [1779] = 2,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      anon_sym_LF,
  [1786] = 2,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      anon_sym_LF,
  [1793] = 2,
    ACTIONS(85), 1,
      sym__space,
    ACTIONS(360), 1,
      anon_sym_COLON,
  [1800] = 2,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_enquoted_identifier_multi,
  [1807] = 2,
    ACTIONS(436), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(107), 1,
      sym_note_standalone_multiline,
  [1814] = 2,
    ACTIONS(438), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__newline,
  [1821] = 2,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      anon_sym_BQUOTE,
  [1828] = 2,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      sym_enquoted_identifier_multi,
  [1835] = 1,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1840] = 1,
    ACTIONS(444), 2,
      anon_sym_RBRACE,
      sym_Note,
  [1845] = 2,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym_enquoted_identifier_multi,
  [1852] = 1,
    ACTIONS(446), 1,
      sym_ident_inside,
  [1856] = 1,
    ACTIONS(448), 1,
      sym__space,
  [1860] = 1,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
  [1864] = 1,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
  [1868] = 1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [1872] = 1,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
  [1876] = 1,
    ACTIONS(458), 1,
      anon_sym_LF,
  [1880] = 1,
    ACTIONS(460), 1,
      sym__space,
  [1884] = 1,
    ACTIONS(462), 1,
      sym__space,
  [1888] = 1,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
  [1892] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [1896] = 1,
    ACTIONS(468), 1,
      sym__space,
  [1900] = 1,
    ACTIONS(470), 1,
      sym__space,
  [1904] = 1,
    ACTIONS(472), 1,
      sym__space,
  [1908] = 1,
    ACTIONS(474), 1,
      sym__space,
  [1912] = 1,
    ACTIONS(476), 1,
      anon_sym_note,
  [1916] = 1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [1920] = 1,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
  [1924] = 1,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
  [1928] = 1,
    ACTIONS(484), 1,
      sym__space,
  [1932] = 1,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [1936] = 1,
    ACTIONS(488), 1,
      anon_sym_COLON,
  [1940] = 1,
    ACTIONS(490), 1,
      anon_sym_COLON,
  [1944] = 1,
    ACTIONS(492), 1,
      sym__space,
  [1948] = 1,
    ACTIONS(494), 1,
      sym__space,
  [1952] = 1,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
  [1956] = 1,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
  [1960] = 1,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [1964] = 1,
    ACTIONS(502), 1,
      sym__space,
  [1968] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
  [1972] = 1,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [1976] = 1,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [1980] = 1,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
  [1984] = 1,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [1988] = 1,
    ACTIONS(514), 1,
      sym__space,
  [1992] = 1,
    ACTIONS(516), 1,
      sym__space,
  [1996] = 1,
    ACTIONS(518), 1,
      anon_sym_COLON,
  [2000] = 1,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
  [2004] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [2008] = 1,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [2012] = 1,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [2016] = 1,
    ACTIONS(528), 1,
      sym__space,
  [2020] = 1,
    ACTIONS(530), 1,
      aux_sym_ident_basic_token1,
  [2024] = 1,
    ACTIONS(532), 1,
      anon_sym_LF,
  [2028] = 1,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
  [2032] = 1,
    ACTIONS(536), 1,
      sym__dot,
  [2036] = 1,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
  [2040] = 1,
    ACTIONS(74), 1,
      sym__space,
  [2044] = 1,
    ACTIONS(540), 1,
      sym__space,
  [2048] = 1,
    ACTIONS(542), 1,
      sym__space,
  [2052] = 1,
    ACTIONS(544), 1,
      anon_sym_LF,
  [2056] = 1,
    ACTIONS(546), 1,
      sym__space,
  [2060] = 1,
    ACTIONS(66), 1,
      sym__space,
  [2064] = 1,
    ACTIONS(548), 1,
      sym__space,
  [2068] = 1,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [2072] = 1,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
  [2076] = 1,
    ACTIONS(554), 1,
      sym__space,
  [2080] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
  [2084] = 1,
    ACTIONS(558), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2088] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
  [2092] = 1,
    ACTIONS(562), 1,
      anon_sym_COLON,
  [2096] = 1,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
  [2100] = 1,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
  [2104] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
  [2108] = 1,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [2112] = 1,
    ACTIONS(460), 1,
      sym__dot,
  [2116] = 1,
    ACTIONS(572), 1,
      sym__space,
  [2120] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [2124] = 1,
    ACTIONS(576), 1,
      sym__space,
  [2128] = 1,
    ACTIONS(217), 1,
      anon_sym_LF,
  [2132] = 1,
    ACTIONS(237), 1,
      anon_sym_LF,
  [2136] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [2140] = 1,
    ACTIONS(580), 1,
      sym__space,
  [2144] = 1,
    ACTIONS(582), 1,
      sym__dot,
  [2148] = 1,
    ACTIONS(66), 1,
      anon_sym_LF,
  [2152] = 1,
    ACTIONS(74), 1,
      anon_sym_LF,
  [2156] = 1,
    ACTIONS(584), 1,
      sym__dot,
  [2160] = 1,
    ACTIONS(586), 1,
      sym__space,
  [2164] = 1,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [2168] = 1,
    ACTIONS(590), 1,
      sym__dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 302,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 349,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 371,
  [SMALL_STATE(19)] = 393,
  [SMALL_STATE(20)] = 415,
  [SMALL_STATE(21)] = 427,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 471,
  [SMALL_STATE(25)] = 480,
  [SMALL_STATE(26)] = 489,
  [SMALL_STATE(27)] = 498,
  [SMALL_STATE(28)] = 507,
  [SMALL_STATE(29)] = 516,
  [SMALL_STATE(30)] = 525,
  [SMALL_STATE(31)] = 534,
  [SMALL_STATE(32)] = 543,
  [SMALL_STATE(33)] = 552,
  [SMALL_STATE(34)] = 565,
  [SMALL_STATE(35)] = 574,
  [SMALL_STATE(36)] = 583,
  [SMALL_STATE(37)] = 592,
  [SMALL_STATE(38)] = 605,
  [SMALL_STATE(39)] = 616,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 634,
  [SMALL_STATE(42)] = 643,
  [SMALL_STATE(43)] = 652,
  [SMALL_STATE(44)] = 661,
  [SMALL_STATE(45)] = 670,
  [SMALL_STATE(46)] = 679,
  [SMALL_STATE(47)] = 694,
  [SMALL_STATE(48)] = 703,
  [SMALL_STATE(49)] = 712,
  [SMALL_STATE(50)] = 721,
  [SMALL_STATE(51)] = 730,
  [SMALL_STATE(52)] = 739,
  [SMALL_STATE(53)] = 748,
  [SMALL_STATE(54)] = 760,
  [SMALL_STATE(55)] = 772,
  [SMALL_STATE(56)] = 784,
  [SMALL_STATE(57)] = 796,
  [SMALL_STATE(58)] = 808,
  [SMALL_STATE(59)] = 820,
  [SMALL_STATE(60)] = 832,
  [SMALL_STATE(61)] = 846,
  [SMALL_STATE(62)] = 860,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 886,
  [SMALL_STATE(65)] = 898,
  [SMALL_STATE(66)] = 912,
  [SMALL_STATE(67)] = 921,
  [SMALL_STATE(68)] = 934,
  [SMALL_STATE(69)] = 945,
  [SMALL_STATE(70)] = 952,
  [SMALL_STATE(71)] = 965,
  [SMALL_STATE(72)] = 978,
  [SMALL_STATE(73)] = 991,
  [SMALL_STATE(74)] = 1002,
  [SMALL_STATE(75)] = 1015,
  [SMALL_STATE(76)] = 1028,
  [SMALL_STATE(77)] = 1039,
  [SMALL_STATE(78)] = 1050,
  [SMALL_STATE(79)] = 1059,
  [SMALL_STATE(80)] = 1068,
  [SMALL_STATE(81)] = 1081,
  [SMALL_STATE(82)] = 1092,
  [SMALL_STATE(83)] = 1103,
  [SMALL_STATE(84)] = 1110,
  [SMALL_STATE(85)] = 1123,
  [SMALL_STATE(86)] = 1134,
  [SMALL_STATE(87)] = 1147,
  [SMALL_STATE(88)] = 1160,
  [SMALL_STATE(89)] = 1169,
  [SMALL_STATE(90)] = 1180,
  [SMALL_STATE(91)] = 1193,
  [SMALL_STATE(92)] = 1203,
  [SMALL_STATE(93)] = 1213,
  [SMALL_STATE(94)] = 1223,
  [SMALL_STATE(95)] = 1233,
  [SMALL_STATE(96)] = 1243,
  [SMALL_STATE(97)] = 1253,
  [SMALL_STATE(98)] = 1263,
  [SMALL_STATE(99)] = 1273,
  [SMALL_STATE(100)] = 1283,
  [SMALL_STATE(101)] = 1289,
  [SMALL_STATE(102)] = 1295,
  [SMALL_STATE(103)] = 1305,
  [SMALL_STATE(104)] = 1315,
  [SMALL_STATE(105)] = 1325,
  [SMALL_STATE(106)] = 1335,
  [SMALL_STATE(107)] = 1345,
  [SMALL_STATE(108)] = 1351,
  [SMALL_STATE(109)] = 1357,
  [SMALL_STATE(110)] = 1367,
  [SMALL_STATE(111)] = 1377,
  [SMALL_STATE(112)] = 1387,
  [SMALL_STATE(113)] = 1397,
  [SMALL_STATE(114)] = 1407,
  [SMALL_STATE(115)] = 1417,
  [SMALL_STATE(116)] = 1427,
  [SMALL_STATE(117)] = 1437,
  [SMALL_STATE(118)] = 1447,
  [SMALL_STATE(119)] = 1453,
  [SMALL_STATE(120)] = 1459,
  [SMALL_STATE(121)] = 1469,
  [SMALL_STATE(122)] = 1479,
  [SMALL_STATE(123)] = 1489,
  [SMALL_STATE(124)] = 1499,
  [SMALL_STATE(125)] = 1509,
  [SMALL_STATE(126)] = 1516,
  [SMALL_STATE(127)] = 1523,
  [SMALL_STATE(128)] = 1530,
  [SMALL_STATE(129)] = 1537,
  [SMALL_STATE(130)] = 1544,
  [SMALL_STATE(131)] = 1551,
  [SMALL_STATE(132)] = 1558,
  [SMALL_STATE(133)] = 1565,
  [SMALL_STATE(134)] = 1570,
  [SMALL_STATE(135)] = 1577,
  [SMALL_STATE(136)] = 1584,
  [SMALL_STATE(137)] = 1591,
  [SMALL_STATE(138)] = 1598,
  [SMALL_STATE(139)] = 1603,
  [SMALL_STATE(140)] = 1608,
  [SMALL_STATE(141)] = 1615,
  [SMALL_STATE(142)] = 1620,
  [SMALL_STATE(143)] = 1627,
  [SMALL_STATE(144)] = 1632,
  [SMALL_STATE(145)] = 1639,
  [SMALL_STATE(146)] = 1646,
  [SMALL_STATE(147)] = 1651,
  [SMALL_STATE(148)] = 1656,
  [SMALL_STATE(149)] = 1661,
  [SMALL_STATE(150)] = 1668,
  [SMALL_STATE(151)] = 1675,
  [SMALL_STATE(152)] = 1682,
  [SMALL_STATE(153)] = 1689,
  [SMALL_STATE(154)] = 1696,
  [SMALL_STATE(155)] = 1701,
  [SMALL_STATE(156)] = 1708,
  [SMALL_STATE(157)] = 1715,
  [SMALL_STATE(158)] = 1722,
  [SMALL_STATE(159)] = 1729,
  [SMALL_STATE(160)] = 1736,
  [SMALL_STATE(161)] = 1743,
  [SMALL_STATE(162)] = 1748,
  [SMALL_STATE(163)] = 1755,
  [SMALL_STATE(164)] = 1760,
  [SMALL_STATE(165)] = 1767,
  [SMALL_STATE(166)] = 1772,
  [SMALL_STATE(167)] = 1779,
  [SMALL_STATE(168)] = 1786,
  [SMALL_STATE(169)] = 1793,
  [SMALL_STATE(170)] = 1800,
  [SMALL_STATE(171)] = 1807,
  [SMALL_STATE(172)] = 1814,
  [SMALL_STATE(173)] = 1821,
  [SMALL_STATE(174)] = 1828,
  [SMALL_STATE(175)] = 1835,
  [SMALL_STATE(176)] = 1840,
  [SMALL_STATE(177)] = 1845,
  [SMALL_STATE(178)] = 1852,
  [SMALL_STATE(179)] = 1856,
  [SMALL_STATE(180)] = 1860,
  [SMALL_STATE(181)] = 1864,
  [SMALL_STATE(182)] = 1868,
  [SMALL_STATE(183)] = 1872,
  [SMALL_STATE(184)] = 1876,
  [SMALL_STATE(185)] = 1880,
  [SMALL_STATE(186)] = 1884,
  [SMALL_STATE(187)] = 1888,
  [SMALL_STATE(188)] = 1892,
  [SMALL_STATE(189)] = 1896,
  [SMALL_STATE(190)] = 1900,
  [SMALL_STATE(191)] = 1904,
  [SMALL_STATE(192)] = 1908,
  [SMALL_STATE(193)] = 1912,
  [SMALL_STATE(194)] = 1916,
  [SMALL_STATE(195)] = 1920,
  [SMALL_STATE(196)] = 1924,
  [SMALL_STATE(197)] = 1928,
  [SMALL_STATE(198)] = 1932,
  [SMALL_STATE(199)] = 1936,
  [SMALL_STATE(200)] = 1940,
  [SMALL_STATE(201)] = 1944,
  [SMALL_STATE(202)] = 1948,
  [SMALL_STATE(203)] = 1952,
  [SMALL_STATE(204)] = 1956,
  [SMALL_STATE(205)] = 1960,
  [SMALL_STATE(206)] = 1964,
  [SMALL_STATE(207)] = 1968,
  [SMALL_STATE(208)] = 1972,
  [SMALL_STATE(209)] = 1976,
  [SMALL_STATE(210)] = 1980,
  [SMALL_STATE(211)] = 1984,
  [SMALL_STATE(212)] = 1988,
  [SMALL_STATE(213)] = 1992,
  [SMALL_STATE(214)] = 1996,
  [SMALL_STATE(215)] = 2000,
  [SMALL_STATE(216)] = 2004,
  [SMALL_STATE(217)] = 2008,
  [SMALL_STATE(218)] = 2012,
  [SMALL_STATE(219)] = 2016,
  [SMALL_STATE(220)] = 2020,
  [SMALL_STATE(221)] = 2024,
  [SMALL_STATE(222)] = 2028,
  [SMALL_STATE(223)] = 2032,
  [SMALL_STATE(224)] = 2036,
  [SMALL_STATE(225)] = 2040,
  [SMALL_STATE(226)] = 2044,
  [SMALL_STATE(227)] = 2048,
  [SMALL_STATE(228)] = 2052,
  [SMALL_STATE(229)] = 2056,
  [SMALL_STATE(230)] = 2060,
  [SMALL_STATE(231)] = 2064,
  [SMALL_STATE(232)] = 2068,
  [SMALL_STATE(233)] = 2072,
  [SMALL_STATE(234)] = 2076,
  [SMALL_STATE(235)] = 2080,
  [SMALL_STATE(236)] = 2084,
  [SMALL_STATE(237)] = 2088,
  [SMALL_STATE(238)] = 2092,
  [SMALL_STATE(239)] = 2096,
  [SMALL_STATE(240)] = 2100,
  [SMALL_STATE(241)] = 2104,
  [SMALL_STATE(242)] = 2108,
  [SMALL_STATE(243)] = 2112,
  [SMALL_STATE(244)] = 2116,
  [SMALL_STATE(245)] = 2120,
  [SMALL_STATE(246)] = 2124,
  [SMALL_STATE(247)] = 2128,
  [SMALL_STATE(248)] = 2132,
  [SMALL_STATE(249)] = 2136,
  [SMALL_STATE(250)] = 2140,
  [SMALL_STATE(251)] = 2144,
  [SMALL_STATE(252)] = 2148,
  [SMALL_STATE(253)] = 2152,
  [SMALL_STATE(254)] = 2156,
  [SMALL_STATE(255)] = 2160,
  [SMALL_STATE(256)] = 2164,
  [SMALL_STATE(257)] = 2168,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_side, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1, 0, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_basic, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 9, 0, 16),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 7, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 8, 0, 9),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 10, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 10, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 7, 0, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 10, 0, 19),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 13, 0, 16),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 11, 0, 25),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 11, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, 0, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 13),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 9, 0, 14),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 27),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 28),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 12, 0, 29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7, 0, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_short, 12, 0, 16),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 10),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 8, 0, 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_long, 12, 0, 16),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 13, 0, 31),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 8, 0, 12),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_value_mutliline, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_value_mutliline_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_value_mutliline_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_setting_default_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 18),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 18),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 4, 0, 17),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 4, 0, 17),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_definition_short_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 33), SHIFT_REPEAT(115),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 33),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_any_with_nl, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_property_definition, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_basic, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_standalone_multiline, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_single, 1, 0, 21),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_single, 1, 0, 21),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_enquoted_identifier, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_basic, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier_multi2, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_inline, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_setting_default, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 4, 0, 32),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 4, 0, 32),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_definition_composite_repeat1, 2, 0, 30),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_setting, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition_composite, 3, 0, 30),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition_composite, 3, 0, 30),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 5, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_column, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 7),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 7),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_setting_definition, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_action, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_type_ref, 3, 0, 22),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref, 3, 0, 22),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type_ref_item, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 1, 0, 8),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 8),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 6, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2, 0, 26),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, 0, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_name, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_standalone, 7, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_symbol, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_setting_standalone, 6, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, 0, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 3, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_setting, 4, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enquoted_identifier, 3, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_event, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_standalone, 3, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
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
