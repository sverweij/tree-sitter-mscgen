#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 103
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_hscale = 1,
  anon_sym_arcgradient = 2,
  sym_size_option_key = 3,
  sym_string_option_key = 4,
  anon_sym_wordwraparcs = 5,
  anon_sym_wordwrapentities = 6,
  anon_sym_wordwrapboxes = 7,
  sym_boolean_entity_attribute_key = 8,
  anon_sym_label = 9,
  anon_sym_idurl = 10,
  anon_sym_id = 11,
  anon_sym_url = 12,
  anon_sym_linecolor = 13,
  anon_sym_linecolour = 14,
  anon_sym_textcolor = 15,
  anon_sym_textcolour = 16,
  anon_sym_textbgcolor = 17,
  anon_sym_textbgcolour = 18,
  anon_sym_arctextcolor = 19,
  anon_sym_arctextcolour = 20,
  anon_sym_arctextbgcolor = 21,
  anon_sym_arctextbgcolour = 22,
  anon_sym_title = 23,
  anon_sym_LT_DASH_GT = 24,
  anon_sym_LT_EQ_GT = 25,
  anon_sym_LT_COLON_GT = 26,
  anon_sym_LT_LT_EQ_GT_GT = 27,
  anon_sym_LT_LT_GT_GT = 28,
  anon_sym_DASH_GT = 29,
  anon_sym_EQ_GT = 30,
  anon_sym_COLON_GT = 31,
  anon_sym_EQ_GT_GT = 32,
  anon_sym_GT_GT = 33,
  anon_sym_DASHx = 34,
  anon_sym_DASHX = 35,
  anon_sym_LT_DASH = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_LT_COLON = 38,
  anon_sym_LT_LT_EQ = 39,
  anon_sym_LT_LT = 40,
  anon_sym_x_DASH = 41,
  anon_sym_X_DASH = 42,
  anon_sym_DASH_DASH = 43,
  anon_sym_EQ_EQ = 44,
  anon_sym_COLON_COLON = 45,
  anon_sym_DOT_DOT = 46,
  anon_sym_box = 47,
  anon_sym_abox = 48,
  anon_sym_rbox = 49,
  anon_sym_note = 50,
  anon_sym_msc = 51,
  anon_sym_xu = 52,
  sym_curly_bracket_open = 53,
  sym_curly_bracket_close = 54,
  sym_square_bracket_open = 55,
  sym_square_bracket_close = 56,
  sym_equals = 57,
  sym_comma = 58,
  sym_colon = 59,
  sym_semicolon = 60,
  sym__dot = 61,
  sym__identifier = 62,
  sym__cardinal = 63,
  anon_sym_DQUOTE = 64,
  anon_sym_auto = 65,
  anon_sym_true = 66,
  anon_sym_false = 67,
  anon_sym_on = 68,
  anon_sym_off = 69,
  anon_sym_0 = 70,
  anon_sym_1 = 71,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 72,
  sym_comment = 73,
  sym_sequence_chart = 74,
  sym_options = 75,
  sym_option = 76,
  sym__numerical_option = 77,
  sym_numerical_option_key = 78,
  sym__size_option = 79,
  sym__string_option = 80,
  sym__boolean_option = 81,
  sym_boolean_option_key = 82,
  sym_entities = 83,
  sym_entity = 84,
  sym_entity_attributes = 85,
  sym_entity_attribute = 86,
  sym__boolean_entity_attribute = 87,
  sym__string_entity_attribute = 88,
  sym_string_entity_attribute_key = 89,
  sym_arcs = 90,
  sym_arc = 91,
  sym__dual_arc = 92,
  sym_arrow = 93,
  sym_start_token = 94,
  sym_entity_identifier = 95,
  sym__numberlike = 96,
  sym_number = 97,
  sym__number = 98,
  sym__real = 99,
  sym_numberlike_string = 100,
  sym__sizelike = 101,
  sym_size = 102,
  sym__size = 103,
  sym_sizelike_string = 104,
  sym__booleanlike = 105,
  sym_boolean = 106,
  sym__boolean = 107,
  sym_booleanlike_string = 108,
  sym_string = 109,
  sym__quoted_string = 110,
  aux_sym_options_repeat1 = 111,
  aux_sym_entities_repeat1 = 112,
  aux_sym_entity_attributes_repeat1 = 113,
  aux_sym_arcs_repeat1 = 114,
  aux_sym_arcs_repeat2 = 115,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_hscale] = "hscale",
  [anon_sym_arcgradient] = "arcgradient",
  [sym_size_option_key] = "size_option_key",
  [sym_string_option_key] = "string_option_key",
  [anon_sym_wordwraparcs] = "wordwraparcs",
  [anon_sym_wordwrapentities] = "wordwrapentities",
  [anon_sym_wordwrapboxes] = "wordwrapboxes",
  [sym_boolean_entity_attribute_key] = "boolean_entity_attribute_key",
  [anon_sym_label] = "label",
  [anon_sym_idurl] = "idurl",
  [anon_sym_id] = "id",
  [anon_sym_url] = "url",
  [anon_sym_linecolor] = "linecolor",
  [anon_sym_linecolour] = "linecolour",
  [anon_sym_textcolor] = "textcolor",
  [anon_sym_textcolour] = "textcolour",
  [anon_sym_textbgcolor] = "textbgcolor",
  [anon_sym_textbgcolour] = "textbgcolour",
  [anon_sym_arctextcolor] = "arctextcolor",
  [anon_sym_arctextcolour] = "arctextcolour",
  [anon_sym_arctextbgcolor] = "arctextbgcolor",
  [anon_sym_arctextbgcolour] = "arctextbgcolour",
  [anon_sym_title] = "title",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_COLON_GT] = "<:>",
  [anon_sym_LT_LT_EQ_GT_GT] = "<<=>>",
  [anon_sym_LT_LT_GT_GT] = "<<>>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_EQ_GT_GT] = "=>>",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_DASHx] = "-x",
  [anon_sym_DASHX] = "-X",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_x_DASH] = "x-",
  [anon_sym_X_DASH] = "X-",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_box] = "box",
  [anon_sym_abox] = "abox",
  [anon_sym_rbox] = "rbox",
  [anon_sym_note] = "note",
  [anon_sym_msc] = "msc",
  [anon_sym_xu] = "xu",
  [sym_curly_bracket_open] = "curly_bracket_open",
  [sym_curly_bracket_close] = "curly_bracket_close",
  [sym_square_bracket_open] = "square_bracket_open",
  [sym_square_bracket_close] = "square_bracket_close",
  [sym_equals] = "equals",
  [sym_comma] = "comma",
  [sym_colon] = "colon",
  [sym_semicolon] = "semicolon",
  [sym__dot] = "_dot",
  [sym__identifier] = "_identifier",
  [sym__cardinal] = "_cardinal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_auto] = "auto",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = "/[^\"]*/",
  [sym_comment] = "comment",
  [sym_sequence_chart] = "sequence_chart",
  [sym_options] = "options",
  [sym_option] = "option",
  [sym__numerical_option] = "_numerical_option",
  [sym_numerical_option_key] = "numerical_option_key",
  [sym__size_option] = "_size_option",
  [sym__string_option] = "_string_option",
  [sym__boolean_option] = "_boolean_option",
  [sym_boolean_option_key] = "boolean_option_key",
  [sym_entities] = "entities",
  [sym_entity] = "entity",
  [sym_entity_attributes] = "entity_attributes",
  [sym_entity_attribute] = "entity_attribute",
  [sym__boolean_entity_attribute] = "_boolean_entity_attribute",
  [sym__string_entity_attribute] = "_string_entity_attribute",
  [sym_string_entity_attribute_key] = "string_entity_attribute_key",
  [sym_arcs] = "arcs",
  [sym_arc] = "arc",
  [sym__dual_arc] = "_dual_arc",
  [sym_arrow] = "arrow",
  [sym_start_token] = "start_token",
  [sym_entity_identifier] = "entity_identifier",
  [sym__numberlike] = "_numberlike",
  [sym_number] = "number",
  [sym__number] = "_number",
  [sym__real] = "_real",
  [sym_numberlike_string] = "numberlike_string",
  [sym__sizelike] = "_sizelike",
  [sym_size] = "size",
  [sym__size] = "_size",
  [sym_sizelike_string] = "sizelike_string",
  [sym__booleanlike] = "_booleanlike",
  [sym_boolean] = "boolean",
  [sym__boolean] = "_boolean",
  [sym_booleanlike_string] = "booleanlike_string",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_entities_repeat1] = "entities_repeat1",
  [aux_sym_entity_attributes_repeat1] = "entity_attributes_repeat1",
  [aux_sym_arcs_repeat1] = "arcs_repeat1",
  [aux_sym_arcs_repeat2] = "arcs_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_hscale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arcgradient] = {
    .visible = true,
    .named = false,
  },
  [sym_size_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_string_option_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wordwraparcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wordwrapentities] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wordwrapboxes] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean_entity_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linecolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linecolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textbgcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textbgcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextbgcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arctextbgcolour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xu] = {
    .visible = true,
    .named = false,
  },
  [sym_curly_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_square_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_square_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__cardinal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_chart] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__numerical_option] = {
    .visible = false,
    .named = true,
  },
  [sym_numerical_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym__size_option] = {
    .visible = false,
    .named = true,
  },
  [sym__string_option] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_option] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_entities] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_entity_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__string_entity_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_string_entity_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [sym_arcs] = {
    .visible = true,
    .named = true,
  },
  [sym_arc] = {
    .visible = true,
    .named = true,
  },
  [sym__dual_arc] = {
    .visible = false,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_start_token] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__numberlike] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__real] = {
    .visible = false,
    .named = true,
  },
  [sym_numberlike_string] = {
    .visible = true,
    .named = true,
  },
  [sym__sizelike] = {
    .visible = false,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [sym__size] = {
    .visible = false,
    .named = true,
  },
  [sym_sizelike_string] = {
    .visible = true,
    .named = true,
  },
  [sym__booleanlike] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_booleanlike_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entities_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arcs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arcs_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '1')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == 'X')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(92);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'h')
        ADVANCE(100);
      if (lookahead == 'i')
        ADVANCE(106);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 'o')
        ADVANCE(133);
      if (lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 't')
        ADVANCE(141);
      if (lookahead == 'u')
        ADVANCE(168);
      if (lookahead == 'w')
        ADVANCE(171);
      if (lookahead == 'x')
        ADVANCE(208);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('2' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 5:
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == 'X')
        ADVANCE(8);
      if (lookahead == 'x')
        ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASHX);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASHx);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__dot);
      if (lookahead == '.')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 12:
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__cardinal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_colon);
      if (lookahead == ':')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 23:
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '>')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      if (lookahead == '>')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_COLON_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '>')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ_GT_GT);
      END_STATE();
    case 32:
      if (lookahead == '>')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_LT_GT_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_equals);
      if (lookahead == '=')
        ADVANCE(37);
      if (lookahead == '>')
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '>')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ_GT_GT);
      END_STATE();
    case 40:
      if (lookahead == '>')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 42:
      if (lookahead == '-')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_X_DASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_square_bracket_open);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_square_bracket_close);
      END_STATE();
    case 46:
      if (lookahead == 'b')
        ADVANCE(47);
      if (lookahead == 'c')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(59);
      if (lookahead == 'u')
        ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'o')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'x')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_abox);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'v')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 't')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'i')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'o')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'n')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_boolean_entity_attribute_key);
      END_STATE();
    case 59:
      if (lookahead == 'c')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'g')
        ADVANCE(61);
      if (lookahead == 't')
        ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'r')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'd')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'i')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 't')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_arcgradient);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'x')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 't')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'b')
        ADVANCE(73);
      if (lookahead == 'c')
        ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'g')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'c')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'o')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'l')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 'u')
        ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_arctextbgcolor);
      END_STATE();
    case 80:
      if (lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_arctextbgcolour);
      END_STATE();
    case 82:
      if (lookahead == 'o')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'l')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'o')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'r')
        ADVANCE(86);
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_arctextcolor);
      END_STATE();
    case 87:
      if (lookahead == 'r')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_arctextcolour);
      END_STATE();
    case 89:
      if (lookahead == 't')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'o')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 92:
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'x')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 95:
      if (lookahead == 'a')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 's')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 100:
      if (lookahead == 's')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'a')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_hscale);
      END_STATE();
    case 106:
      if (lookahead == 'd')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'u')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'r')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'l')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_idurl);
      END_STATE();
    case 111:
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'b')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'e')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'l')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 116:
      if (lookahead == 'n')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'c')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'o')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'l')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'o')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(123);
      if (lookahead == 'u')
        ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_linecolor);
      END_STATE();
    case 124:
      if (lookahead == 'r')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_linecolour);
      END_STATE();
    case 126:
      if (lookahead == 's')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'c')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_msc);
      END_STATE();
    case 129:
      if (lookahead == 'o')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 't')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'e')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 133:
      if (lookahead == 'f')
        ADVANCE(134);
      if (lookahead == 'n')
        ADVANCE(136);
      END_STATE();
    case 134:
      if (lookahead == 'f')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 137:
      if (lookahead == 'b')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'o')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'x')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_rbox);
      END_STATE();
    case 141:
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead == 'i')
        ADVANCE(161);
      if (lookahead == 'r')
        ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'x')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'b')
        ADVANCE(145);
      if (lookahead == 'c')
        ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == 'g')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'c')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'l')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'o')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 'u')
        ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_textbgcolor);
      END_STATE();
    case 152:
      if (lookahead == 'r')
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_textbgcolour);
      END_STATE();
    case 154:
      if (lookahead == 'o')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'l')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'o')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'r')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_textcolor);
      END_STATE();
    case 159:
      if (lookahead == 'r')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_textcolour);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'l')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 165:
      if (lookahead == 'u')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'e')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 168:
      if (lookahead == 'r')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'l')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 171:
      if (lookahead == 'a')
        ADVANCE(172);
      if (lookahead == 'i')
        ADVANCE(180);
      if (lookahead == 'o')
        ADVANCE(184);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'r')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'm')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'a')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'k')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string_option_key);
      END_STATE();
    case 180:
      if (lookahead == 'd')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'h')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_size_option_key);
      END_STATE();
    case 184:
      if (lookahead == 'r')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'd')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'w')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'r')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'p')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'a')
        ADVANCE(191);
      if (lookahead == 'b')
        ADVANCE(195);
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 191:
      if (lookahead == 'r')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'c')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 's')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_wordwraparcs);
      END_STATE();
    case 195:
      if (lookahead == 'o')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'x')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'e')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 's')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_wordwrapboxes);
      END_STATE();
    case 200:
      if (lookahead == 'n')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 't')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'i')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 't')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'i')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'e')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 's')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_wordwrapentities);
      END_STATE();
    case 208:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_x_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_xu);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_curly_bracket_open);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == 'm')
        ADVANCE(126);
      if (lookahead == 'x')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      END_STATE();
    case 214:
      if (lookahead == 'u')
        ADVANCE(210);
      END_STATE();
    case 215:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(219);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'h')
        ADVANCE(234);
      if (lookahead == 'w')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '*')
        ADVANCE(221);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_arcgradient);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_hscale);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'o')
        ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm')
        ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_string_option_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h')
        ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_size_option_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w')
        ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(260);
      if (lookahead == 'b')
        ADVANCE(264);
      if (lookahead == 'e')
        ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c')
        ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_wordwraparcs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x')
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_wordwrapboxes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't')
        ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i')
        ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's')
        ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_wordwrapentities);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 278:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(279);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 280:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(282);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == 'X')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'b')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'x')
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      END_STATE();
    case 281:
      if (lookahead == '.')
        ADVANCE(11);
      END_STATE();
    case 282:
      if (lookahead == ':')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      END_STATE();
    case 283:
      if (lookahead == '=')
        ADVANCE(37);
      if (lookahead == '>')
        ADVANCE(38);
      END_STATE();
    case 284:
      if (lookahead == 'b')
        ADVANCE(47);
      END_STATE();
    case 285:
      if (lookahead == '-')
        ADVANCE(209);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(287);
      if (lookahead == '/')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(288);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(290);
      if (lookahead == '/')
        ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(291);
      if (lookahead != 0)
        ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(291);
      if (lookahead == '/')
        ADVANCE(288);
      if (lookahead != 0)
        ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(287);
      if (lookahead == '/')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(288);
      END_STATE();
    case 293:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(219);
      if (lookahead == '}')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 294:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == 'a')
        ADVANCE(295);
      if (lookahead == 'h')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(171);
      if (lookahead == '}')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      END_STATE();
    case 295:
      if (lookahead == 'r')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'c')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'g')
        ADVANCE(61);
      END_STATE();
    case 298:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < ':' || lookahead > '>') &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(222);
      END_STATE();
    case 299:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == 'a')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 300:
      if (lookahead == 'u')
        ADVANCE(89);
      END_STATE();
    case 301:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(302);
      if (lookahead == '1')
        ADVANCE(303);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'o')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 304:
      if (lookahead == 'r')
        ADVANCE(165);
      END_STATE();
    case 305:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(306);
      if (lookahead == 'i')
        ADVANCE(106);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == 't')
        ADVANCE(309);
      if (lookahead == 'u')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(305);
      END_STATE();
    case 306:
      if (lookahead == 'c')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'c')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 't')
        ADVANCE(69);
      END_STATE();
    case 309:
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead == 'i')
        ADVANCE(161);
      END_STATE();
    case 310:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 312:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(312);
      END_STATE();
    case 313:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(282);
      if (lookahead == ';')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == 'X')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'b')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 'r')
        ADVANCE(137);
      if (lookahead == 'x')
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 213},
  [2] = {.lex_state = 215},
  [3] = {.lex_state = 216},
  [4] = {.lex_state = 215},
  [5] = {.lex_state = 217},
  [6] = {.lex_state = 278},
  [7] = {.lex_state = 278},
  [8] = {.lex_state = 278},
  [9] = {.lex_state = 278},
  [10] = {.lex_state = 216},
  [11] = {.lex_state = 280},
  [12] = {.lex_state = 286},
  [13] = {.lex_state = 293},
  [14] = {.lex_state = 280},
  [15] = {.lex_state = 280},
  [16] = {.lex_state = 278},
  [17] = {.lex_state = 278},
  [18] = {.lex_state = 293},
  [19] = {.lex_state = 280},
  [20] = {.lex_state = 294},
  [21] = {.lex_state = 280},
  [22] = {.lex_state = 280},
  [23] = {.lex_state = 280},
  [24] = {.lex_state = 294},
  [25] = {.lex_state = 298},
  [26] = {.lex_state = 298},
  [27] = {.lex_state = 293},
  [28] = {.lex_state = 299},
  [29] = {.lex_state = 294},
  [30] = {.lex_state = 294},
  [31] = {.lex_state = 216},
  [32] = {.lex_state = 293},
  [33] = {.lex_state = 294},
  [34] = {.lex_state = 294},
  [35] = {.lex_state = 293},
  [36] = {.lex_state = 299},
  [37] = {.lex_state = 301},
  [38] = {.lex_state = 280},
  [39] = {.lex_state = 298},
  [40] = {.lex_state = 293},
  [41] = {.lex_state = 298},
  [42] = {.lex_state = 293},
  [43] = {.lex_state = 298},
  [44] = {.lex_state = 305},
  [45] = {.lex_state = 280},
  [46] = {.lex_state = 298},
  [47] = {.lex_state = 280},
  [48] = {.lex_state = 294},
  [49] = {.lex_state = 280},
  [50] = {.lex_state = 280},
  [51] = {.lex_state = 298},
  [52] = {.lex_state = 280},
  [53] = {.lex_state = 298},
  [54] = {.lex_state = 293},
  [55] = {.lex_state = 310},
  [56] = {.lex_state = 299},
  [57] = {.lex_state = 280},
  [58] = {.lex_state = 280},
  [59] = {.lex_state = 280},
  [60] = {.lex_state = 312},
  [61] = {.lex_state = 313},
  [62] = {.lex_state = 216},
  [63] = {.lex_state = 294},
  [64] = {.lex_state = 299},
  [65] = {.lex_state = 280},
  [66] = {.lex_state = 280},
  [67] = {.lex_state = 301},
  [68] = {.lex_state = 280},
  [69] = {.lex_state = 312},
  [70] = {.lex_state = 278},
  [71] = {.lex_state = 278},
  [72] = {.lex_state = 280},
  [73] = {.lex_state = 278},
  [74] = {.lex_state = 278},
  [75] = {.lex_state = 278},
  [76] = {.lex_state = 305},
  [77] = {.lex_state = 280},
  [78] = {.lex_state = 293},
  [79] = {.lex_state = 278},
  [80] = {.lex_state = 293},
  [81] = {.lex_state = 278},
  [82] = {.lex_state = 293},
  [83] = {.lex_state = 278},
  [84] = {.lex_state = 299},
  [85] = {.lex_state = 294},
  [86] = {.lex_state = 216},
  [87] = {.lex_state = 294},
  [88] = {.lex_state = 294},
  [89] = {.lex_state = 301},
  [90] = {.lex_state = 280},
  [91] = {.lex_state = 305},
  [92] = {.lex_state = 294},
  [93] = {.lex_state = 278},
  [94] = {.lex_state = 305},
  [95] = {.lex_state = 310},
  [96] = {.lex_state = 280},
  [97] = {.lex_state = 280},
  [98] = {.lex_state = 312},
  [99] = {.lex_state = 278},
  [100] = {.lex_state = 278},
  [101] = {.lex_state = 280},
  [102] = {.lex_state = 278},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_hscale] = ACTIONS(1),
    [anon_sym_arcgradient] = ACTIONS(1),
    [sym_size_option_key] = ACTIONS(1),
    [sym_string_option_key] = ACTIONS(1),
    [anon_sym_wordwraparcs] = ACTIONS(1),
    [anon_sym_wordwrapentities] = ACTIONS(1),
    [anon_sym_wordwrapboxes] = ACTIONS(1),
    [sym_boolean_entity_attribute_key] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_idurl] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(3),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_linecolor] = ACTIONS(1),
    [anon_sym_linecolour] = ACTIONS(1),
    [anon_sym_textcolor] = ACTIONS(1),
    [anon_sym_textcolour] = ACTIONS(1),
    [anon_sym_textbgcolor] = ACTIONS(1),
    [anon_sym_textbgcolour] = ACTIONS(1),
    [anon_sym_arctextcolor] = ACTIONS(1),
    [anon_sym_arctextcolour] = ACTIONS(1),
    [anon_sym_arctextbgcolor] = ACTIONS(1),
    [anon_sym_arctextbgcolour] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_COLON_GT] = ACTIONS(1),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_EQ_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_DASHx] = ACTIONS(1),
    [anon_sym_DASHX] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(3),
    [anon_sym_LT_COLON] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_x_DASH] = ACTIONS(1),
    [anon_sym_X_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_abox] = ACTIONS(1),
    [anon_sym_rbox] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_msc] = ACTIONS(1),
    [anon_sym_xu] = ACTIONS(1),
    [sym_curly_bracket_open] = ACTIONS(1),
    [sym_curly_bracket_close] = ACTIONS(1),
    [sym_square_bracket_open] = ACTIONS(1),
    [sym_square_bracket_close] = ACTIONS(1),
    [sym_equals] = ACTIONS(3),
    [sym_comma] = ACTIONS(1),
    [sym_colon] = ACTIONS(3),
    [sym_semicolon] = ACTIONS(1),
    [sym__dot] = ACTIONS(3),
    [sym__cardinal] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_sequence_chart] = STATE(3),
    [sym_start_token] = STATE(4),
    [anon_sym_msc] = ACTIONS(5),
    [anon_sym_xu] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_curly_bracket_open] = ACTIONS(9),
    [sym_comment] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym_curly_bracket_open] = ACTIONS(13),
    [sym_comment] = ACTIONS(7),
  },
  [5] = {
    [sym_options] = STATE(13),
    [sym_option] = STATE(14),
    [sym__numerical_option] = STATE(15),
    [sym_numerical_option_key] = STATE(16),
    [sym__size_option] = STATE(15),
    [sym__string_option] = STATE(15),
    [sym__boolean_option] = STATE(15),
    [sym_boolean_option_key] = STATE(17),
    [sym_entities] = STATE(18),
    [sym_entity] = STATE(19),
    [sym_arcs] = STATE(20),
    [sym_arc] = STATE(21),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(23),
    [sym__quoted_string] = STATE(11),
    [aux_sym_options_repeat1] = STATE(24),
    [aux_sym_entities_repeat1] = STATE(25),
    [aux_sym_arcs_repeat1] = STATE(26),
    [aux_sym_arcs_repeat2] = STATE(27),
    [anon_sym_hscale] = ACTIONS(15),
    [anon_sym_arcgradient] = ACTIONS(15),
    [sym_size_option_key] = ACTIONS(17),
    [sym_string_option_key] = ACTIONS(19),
    [anon_sym_wordwraparcs] = ACTIONS(21),
    [anon_sym_wordwrapentities] = ACTIONS(21),
    [anon_sym_wordwrapboxes] = ACTIONS(21),
    [sym_curly_bracket_close] = ACTIONS(23),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [6] = {
    [sym_equals] = ACTIONS(31),
    [sym_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_equals] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [8] = {
    [sym_equals] = ACTIONS(35),
    [sym_comment] = ACTIONS(7),
  },
  [9] = {
    [sym_equals] = ACTIONS(37),
    [sym_comment] = ACTIONS(7),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(7),
  },
  [11] = {
    [anon_sym_LT_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_EQ_GT] = ACTIONS(41),
    [anon_sym_LT_COLON_GT] = ACTIONS(41),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(41),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(41),
    [anon_sym_EQ_GT] = ACTIONS(43),
    [anon_sym_COLON_GT] = ACTIONS(41),
    [anon_sym_EQ_GT_GT] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(41),
    [anon_sym_DASHx] = ACTIONS(41),
    [anon_sym_DASHX] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LT_COLON] = ACTIONS(43),
    [anon_sym_LT_LT_EQ] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_x_DASH] = ACTIONS(41),
    [anon_sym_X_DASH] = ACTIONS(41),
    [anon_sym_DASH_DASH] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_box] = ACTIONS(41),
    [anon_sym_abox] = ACTIONS(41),
    [anon_sym_rbox] = ACTIONS(41),
    [anon_sym_note] = ACTIONS(41),
    [sym_square_bracket_open] = ACTIONS(41),
    [sym_comma] = ACTIONS(41),
    [sym_semicolon] = ACTIONS(41),
    [sym_comment] = ACTIONS(7),
  },
  [12] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(45),
    [sym_comment] = ACTIONS(29),
  },
  [13] = {
    [sym_entities] = STATE(32),
    [sym_entity] = STATE(19),
    [sym_arcs] = STATE(33),
    [sym_arc] = STATE(21),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(23),
    [sym__quoted_string] = STATE(11),
    [aux_sym_entities_repeat1] = STATE(25),
    [aux_sym_arcs_repeat1] = STATE(26),
    [aux_sym_arcs_repeat2] = STATE(27),
    [sym_curly_bracket_close] = ACTIONS(47),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [14] = {
    [sym_comma] = ACTIONS(49),
    [sym_semicolon] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
  },
  [15] = {
    [sym_comma] = ACTIONS(53),
    [sym_semicolon] = ACTIONS(53),
    [sym_comment] = ACTIONS(7),
  },
  [16] = {
    [sym_equals] = ACTIONS(55),
    [sym_comment] = ACTIONS(7),
  },
  [17] = {
    [sym_equals] = ACTIONS(57),
    [sym_comment] = ACTIONS(7),
  },
  [18] = {
    [sym_arcs] = STATE(33),
    [sym_arc] = STATE(21),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(38),
    [sym__quoted_string] = STATE(11),
    [aux_sym_arcs_repeat1] = STATE(26),
    [aux_sym_arcs_repeat2] = STATE(27),
    [sym_curly_bracket_close] = ACTIONS(47),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [19] = {
    [sym_comma] = ACTIONS(59),
    [sym_semicolon] = ACTIONS(61),
    [sym_comment] = ACTIONS(7),
  },
  [20] = {
    [sym_curly_bracket_close] = ACTIONS(63),
    [sym_comment] = ACTIONS(7),
  },
  [21] = {
    [sym_comma] = ACTIONS(65),
    [sym_semicolon] = ACTIONS(67),
    [sym_comment] = ACTIONS(7),
  },
  [22] = {
    [sym_comma] = ACTIONS(69),
    [sym_semicolon] = ACTIONS(69),
    [sym_comment] = ACTIONS(7),
  },
  [23] = {
    [sym_entity_attributes] = STATE(45),
    [sym_arrow] = STATE(46),
    [anon_sym_LT_DASH_GT] = ACTIONS(71),
    [anon_sym_LT_EQ_GT] = ACTIONS(71),
    [anon_sym_LT_COLON_GT] = ACTIONS(71),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(71),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_COLON_GT] = ACTIONS(71),
    [anon_sym_EQ_GT_GT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_DASHx] = ACTIONS(71),
    [anon_sym_DASHX] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LT_COLON] = ACTIONS(73),
    [anon_sym_LT_LT_EQ] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_x_DASH] = ACTIONS(71),
    [anon_sym_X_DASH] = ACTIONS(71),
    [anon_sym_DASH_DASH] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_box] = ACTIONS(71),
    [anon_sym_abox] = ACTIONS(71),
    [anon_sym_rbox] = ACTIONS(71),
    [anon_sym_note] = ACTIONS(71),
    [sym_square_bracket_open] = ACTIONS(75),
    [sym_comma] = ACTIONS(77),
    [sym_semicolon] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
  },
  [24] = {
    [sym_option] = STATE(47),
    [sym__numerical_option] = STATE(15),
    [sym_numerical_option_key] = STATE(16),
    [sym__size_option] = STATE(15),
    [sym__string_option] = STATE(15),
    [sym__boolean_option] = STATE(15),
    [sym_boolean_option_key] = STATE(17),
    [aux_sym_options_repeat1] = STATE(48),
    [anon_sym_hscale] = ACTIONS(79),
    [anon_sym_arcgradient] = ACTIONS(79),
    [sym_size_option_key] = ACTIONS(81),
    [sym_string_option_key] = ACTIONS(83),
    [anon_sym_wordwraparcs] = ACTIONS(85),
    [anon_sym_wordwrapentities] = ACTIONS(85),
    [anon_sym_wordwrapboxes] = ACTIONS(85),
    [sym_comment] = ACTIONS(7),
  },
  [25] = {
    [sym_entity] = STATE(49),
    [sym_entity_identifier] = STATE(50),
    [sym__quoted_string] = STATE(11),
    [aux_sym_entities_repeat1] = STATE(51),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [26] = {
    [sym_arc] = STATE(52),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(38),
    [sym__quoted_string] = STATE(11),
    [aux_sym_arcs_repeat1] = STATE(53),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [27] = {
    [sym_arc] = STATE(21),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(38),
    [sym__quoted_string] = STATE(11),
    [aux_sym_arcs_repeat1] = STATE(26),
    [aux_sym_arcs_repeat2] = STATE(54),
    [sym_curly_bracket_close] = ACTIONS(87),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [28] = {
    [sym__number] = STATE(58),
    [sym__real] = STATE(58),
    [sym__sizelike] = STATE(57),
    [sym_size] = STATE(57),
    [sym__size] = STATE(58),
    [sym_sizelike_string] = STATE(57),
    [sym__cardinal] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_auto] = ACTIONS(93),
    [sym_comment] = ACTIONS(7),
  },
  [29] = {
    [sym_string] = STATE(59),
    [sym__quoted_string] = STATE(60),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(7),
  },
  [30] = {
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_comment] = ACTIONS(7),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(7),
  },
  [32] = {
    [sym_arcs] = STATE(63),
    [sym_arc] = STATE(21),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(38),
    [sym__quoted_string] = STATE(11),
    [aux_sym_arcs_repeat1] = STATE(26),
    [aux_sym_arcs_repeat2] = STATE(27),
    [sym_curly_bracket_close] = ACTIONS(99),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [33] = {
    [sym_curly_bracket_close] = ACTIONS(101),
    [sym_comment] = ACTIONS(7),
  },
  [34] = {
    [anon_sym_hscale] = ACTIONS(103),
    [anon_sym_arcgradient] = ACTIONS(103),
    [sym_size_option_key] = ACTIONS(103),
    [sym_string_option_key] = ACTIONS(103),
    [anon_sym_wordwraparcs] = ACTIONS(103),
    [anon_sym_wordwrapentities] = ACTIONS(103),
    [anon_sym_wordwrapboxes] = ACTIONS(103),
    [sym_comment] = ACTIONS(7),
  },
  [35] = {
    [sym_curly_bracket_close] = ACTIONS(105),
    [sym__identifier] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(29),
  },
  [36] = {
    [sym__numberlike] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(66),
    [sym__real] = STATE(66),
    [sym_numberlike_string] = STATE(65),
    [sym__cardinal] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_comment] = ACTIONS(7),
  },
  [37] = {
    [sym__booleanlike] = STATE(68),
    [sym_boolean] = STATE(68),
    [sym__boolean] = STATE(69),
    [sym_booleanlike_string] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_on] = ACTIONS(113),
    [anon_sym_off] = ACTIONS(113),
    [anon_sym_0] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [38] = {
    [sym_arrow] = STATE(46),
    [anon_sym_LT_DASH_GT] = ACTIONS(71),
    [anon_sym_LT_EQ_GT] = ACTIONS(71),
    [anon_sym_LT_COLON_GT] = ACTIONS(71),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(71),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_COLON_GT] = ACTIONS(71),
    [anon_sym_EQ_GT_GT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_DASHx] = ACTIONS(71),
    [anon_sym_DASHX] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LT_COLON] = ACTIONS(73),
    [anon_sym_LT_LT_EQ] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_x_DASH] = ACTIONS(71),
    [anon_sym_X_DASH] = ACTIONS(71),
    [anon_sym_DASH_DASH] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_box] = ACTIONS(71),
    [anon_sym_abox] = ACTIONS(71),
    [anon_sym_rbox] = ACTIONS(71),
    [anon_sym_note] = ACTIONS(71),
    [sym_comment] = ACTIONS(7),
  },
  [39] = {
    [sym__identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [sym_comment] = ACTIONS(29),
  },
  [40] = {
    [sym_curly_bracket_close] = ACTIONS(119),
    [sym__identifier] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_comment] = ACTIONS(29),
  },
  [41] = {
    [sym__identifier] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_comment] = ACTIONS(29),
  },
  [42] = {
    [sym_curly_bracket_close] = ACTIONS(127),
    [sym__identifier] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_comment] = ACTIONS(29),
  },
  [43] = {
    [sym__identifier] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_comment] = ACTIONS(29),
  },
  [44] = {
    [sym_entity_attribute] = STATE(73),
    [sym__boolean_entity_attribute] = STATE(74),
    [sym__string_entity_attribute] = STATE(74),
    [sym_string_entity_attribute_key] = STATE(75),
    [aux_sym_entity_attributes_repeat1] = STATE(76),
    [sym_boolean_entity_attribute_key] = ACTIONS(135),
    [anon_sym_label] = ACTIONS(137),
    [anon_sym_idurl] = ACTIONS(137),
    [anon_sym_id] = ACTIONS(139),
    [anon_sym_url] = ACTIONS(137),
    [anon_sym_linecolor] = ACTIONS(137),
    [anon_sym_linecolour] = ACTIONS(137),
    [anon_sym_textcolor] = ACTIONS(137),
    [anon_sym_textcolour] = ACTIONS(137),
    [anon_sym_textbgcolor] = ACTIONS(137),
    [anon_sym_textbgcolour] = ACTIONS(137),
    [anon_sym_arctextcolor] = ACTIONS(137),
    [anon_sym_arctextcolour] = ACTIONS(137),
    [anon_sym_arctextbgcolor] = ACTIONS(137),
    [anon_sym_arctextbgcolour] = ACTIONS(137),
    [anon_sym_title] = ACTIONS(137),
    [sym_square_bracket_close] = ACTIONS(141),
    [sym_comment] = ACTIONS(7),
  },
  [45] = {
    [sym_comma] = ACTIONS(143),
    [sym_semicolon] = ACTIONS(143),
    [sym_comment] = ACTIONS(7),
  },
  [46] = {
    [sym_entity_identifier] = STATE(77),
    [sym__quoted_string] = STATE(11),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [47] = {
    [sym_comma] = ACTIONS(49),
    [sym_semicolon] = ACTIONS(145),
    [sym_comment] = ACTIONS(7),
  },
  [48] = {
    [sym_option] = STATE(79),
    [sym__numerical_option] = STATE(15),
    [sym_numerical_option_key] = STATE(16),
    [sym__size_option] = STATE(15),
    [sym__string_option] = STATE(15),
    [sym__boolean_option] = STATE(15),
    [sym_boolean_option_key] = STATE(17),
    [aux_sym_options_repeat1] = STATE(48),
    [anon_sym_hscale] = ACTIONS(147),
    [anon_sym_arcgradient] = ACTIONS(147),
    [sym_size_option_key] = ACTIONS(150),
    [sym_string_option_key] = ACTIONS(153),
    [anon_sym_wordwraparcs] = ACTIONS(156),
    [anon_sym_wordwrapentities] = ACTIONS(156),
    [anon_sym_wordwrapboxes] = ACTIONS(156),
    [sym_comment] = ACTIONS(7),
  },
  [49] = {
    [sym_comma] = ACTIONS(59),
    [sym_semicolon] = ACTIONS(159),
    [sym_comment] = ACTIONS(7),
  },
  [50] = {
    [sym_entity_attributes] = STATE(45),
    [sym_square_bracket_open] = ACTIONS(75),
    [sym_comma] = ACTIONS(77),
    [sym_semicolon] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
  },
  [51] = {
    [sym_entity] = STATE(81),
    [sym_entity_identifier] = STATE(50),
    [sym__quoted_string] = STATE(11),
    [aux_sym_entities_repeat1] = STATE(51),
    [sym__identifier] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_comment] = ACTIONS(29),
  },
  [52] = {
    [sym_comma] = ACTIONS(65),
    [sym_semicolon] = ACTIONS(167),
    [sym_comment] = ACTIONS(7),
  },
  [53] = {
    [sym_arc] = STATE(83),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(38),
    [sym__quoted_string] = STATE(11),
    [aux_sym_arcs_repeat1] = STATE(53),
    [sym__identifier] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [sym_comment] = ACTIONS(29),
  },
  [54] = {
    [sym_arc] = STATE(21),
    [sym__dual_arc] = STATE(22),
    [sym_entity_identifier] = STATE(38),
    [sym__quoted_string] = STATE(11),
    [aux_sym_arcs_repeat1] = STATE(26),
    [aux_sym_arcs_repeat2] = STATE(54),
    [sym_curly_bracket_close] = ACTIONS(127),
    [sym__identifier] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [sym_comment] = ACTIONS(29),
  },
  [55] = {
    [sym_comma] = ACTIONS(181),
    [sym_semicolon] = ACTIONS(181),
    [sym__dot] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_comment] = ACTIONS(7),
  },
  [56] = {
    [sym__number] = STATE(85),
    [sym__real] = STATE(85),
    [sym__size] = STATE(85),
    [sym__cardinal] = ACTIONS(89),
    [anon_sym_auto] = ACTIONS(185),
    [sym_comment] = ACTIONS(7),
  },
  [57] = {
    [sym_comma] = ACTIONS(187),
    [sym_semicolon] = ACTIONS(187),
    [sym_comment] = ACTIONS(7),
  },
  [58] = {
    [sym_comma] = ACTIONS(189),
    [sym_semicolon] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
  },
  [59] = {
    [sym_comma] = ACTIONS(191),
    [sym_semicolon] = ACTIONS(191),
    [sym_comment] = ACTIONS(7),
  },
  [60] = {
    [sym_square_bracket_close] = ACTIONS(193),
    [sym_comma] = ACTIONS(193),
    [sym_semicolon] = ACTIONS(193),
    [sym_comment] = ACTIONS(7),
  },
  [61] = {
    [anon_sym_LT_DASH_GT] = ACTIONS(195),
    [anon_sym_LT_EQ_GT] = ACTIONS(195),
    [anon_sym_LT_COLON_GT] = ACTIONS(195),
    [anon_sym_LT_LT_EQ_GT_GT] = ACTIONS(195),
    [anon_sym_LT_LT_GT_GT] = ACTIONS(195),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(197),
    [anon_sym_COLON_GT] = ACTIONS(195),
    [anon_sym_EQ_GT_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_DASHx] = ACTIONS(195),
    [anon_sym_DASHX] = ACTIONS(195),
    [anon_sym_LT_DASH] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_LT_COLON] = ACTIONS(197),
    [anon_sym_LT_LT_EQ] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_x_DASH] = ACTIONS(195),
    [anon_sym_X_DASH] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(195),
    [anon_sym_box] = ACTIONS(195),
    [anon_sym_abox] = ACTIONS(195),
    [anon_sym_rbox] = ACTIONS(195),
    [anon_sym_note] = ACTIONS(195),
    [sym_square_bracket_open] = ACTIONS(195),
    [sym_square_bracket_close] = ACTIONS(195),
    [sym_comma] = ACTIONS(195),
    [sym_semicolon] = ACTIONS(195),
    [sym_comment] = ACTIONS(7),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
  },
  [63] = {
    [sym_curly_bracket_close] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
  },
  [64] = {
    [sym__number] = STATE(87),
    [sym__real] = STATE(87),
    [sym__cardinal] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
  },
  [65] = {
    [sym_comma] = ACTIONS(203),
    [sym_semicolon] = ACTIONS(203),
    [sym_comment] = ACTIONS(7),
  },
  [66] = {
    [sym_comma] = ACTIONS(205),
    [sym_semicolon] = ACTIONS(205),
    [sym_comment] = ACTIONS(7),
  },
  [67] = {
    [sym__boolean] = STATE(88),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_on] = ACTIONS(207),
    [anon_sym_off] = ACTIONS(207),
    [anon_sym_0] = ACTIONS(207),
    [anon_sym_1] = ACTIONS(207),
    [sym_comment] = ACTIONS(7),
  },
  [68] = {
    [sym_comma] = ACTIONS(209),
    [sym_semicolon] = ACTIONS(209),
    [sym_comment] = ACTIONS(7),
  },
  [69] = {
    [sym_square_bracket_close] = ACTIONS(211),
    [sym_comma] = ACTIONS(211),
    [sym_semicolon] = ACTIONS(211),
    [sym_comment] = ACTIONS(7),
  },
  [70] = {
    [sym_square_bracket_close] = ACTIONS(213),
    [sym_equals] = ACTIONS(215),
    [sym_comma] = ACTIONS(213),
    [sym_comment] = ACTIONS(7),
  },
  [71] = {
    [sym_equals] = ACTIONS(217),
    [sym_comment] = ACTIONS(7),
  },
  [72] = {
    [sym_comma] = ACTIONS(219),
    [sym_semicolon] = ACTIONS(219),
    [sym_comment] = ACTIONS(7),
  },
  [73] = {
    [sym_square_bracket_close] = ACTIONS(221),
    [sym_comma] = ACTIONS(223),
    [sym_comment] = ACTIONS(7),
  },
  [74] = {
    [sym_square_bracket_close] = ACTIONS(225),
    [sym_comma] = ACTIONS(225),
    [sym_comment] = ACTIONS(7),
  },
  [75] = {
    [sym_equals] = ACTIONS(227),
    [sym_comment] = ACTIONS(7),
  },
  [76] = {
    [sym_entity_attribute] = STATE(93),
    [sym__boolean_entity_attribute] = STATE(74),
    [sym__string_entity_attribute] = STATE(74),
    [sym_string_entity_attribute_key] = STATE(75),
    [aux_sym_entity_attributes_repeat1] = STATE(94),
    [sym_boolean_entity_attribute_key] = ACTIONS(135),
    [anon_sym_label] = ACTIONS(137),
    [anon_sym_idurl] = ACTIONS(137),
    [anon_sym_id] = ACTIONS(139),
    [anon_sym_url] = ACTIONS(137),
    [anon_sym_linecolor] = ACTIONS(137),
    [anon_sym_linecolour] = ACTIONS(137),
    [anon_sym_textcolor] = ACTIONS(137),
    [anon_sym_textcolour] = ACTIONS(137),
    [anon_sym_textbgcolor] = ACTIONS(137),
    [anon_sym_textbgcolour] = ACTIONS(137),
    [anon_sym_arctextcolor] = ACTIONS(137),
    [anon_sym_arctextcolour] = ACTIONS(137),
    [anon_sym_arctextbgcolor] = ACTIONS(137),
    [anon_sym_arctextbgcolour] = ACTIONS(137),
    [anon_sym_title] = ACTIONS(137),
    [sym_comment] = ACTIONS(7),
  },
  [77] = {
    [sym_comma] = ACTIONS(229),
    [sym_semicolon] = ACTIONS(229),
    [sym_comment] = ACTIONS(7),
  },
  [78] = {
    [sym_curly_bracket_close] = ACTIONS(231),
    [sym__identifier] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [sym_comment] = ACTIONS(29),
  },
  [79] = {
    [sym_comma] = ACTIONS(49),
    [sym_comment] = ACTIONS(7),
  },
  [80] = {
    [sym_curly_bracket_close] = ACTIONS(235),
    [sym__identifier] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_comment] = ACTIONS(29),
  },
  [81] = {
    [sym_comma] = ACTIONS(59),
    [sym_comment] = ACTIONS(7),
  },
  [82] = {
    [sym_curly_bracket_close] = ACTIONS(239),
    [sym__identifier] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_comment] = ACTIONS(29),
  },
  [83] = {
    [sym_comma] = ACTIONS(65),
    [sym_comment] = ACTIONS(7),
  },
  [84] = {
    [sym__cardinal] = ACTIONS(243),
    [sym_comment] = ACTIONS(7),
  },
  [85] = {
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_comment] = ACTIONS(7),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_comment] = ACTIONS(7),
  },
  [87] = {
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_comment] = ACTIONS(7),
  },
  [88] = {
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_comment] = ACTIONS(7),
  },
  [89] = {
    [sym__booleanlike] = STATE(99),
    [sym_boolean] = STATE(99),
    [sym__boolean] = STATE(69),
    [sym_booleanlike_string] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_on] = ACTIONS(113),
    [anon_sym_off] = ACTIONS(113),
    [anon_sym_0] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [90] = {
    [sym_comma] = ACTIONS(253),
    [sym_semicolon] = ACTIONS(253),
    [sym_comment] = ACTIONS(7),
  },
  [91] = {
    [sym_boolean_entity_attribute_key] = ACTIONS(255),
    [anon_sym_label] = ACTIONS(255),
    [anon_sym_idurl] = ACTIONS(255),
    [anon_sym_id] = ACTIONS(257),
    [anon_sym_url] = ACTIONS(255),
    [anon_sym_linecolor] = ACTIONS(255),
    [anon_sym_linecolour] = ACTIONS(255),
    [anon_sym_textcolor] = ACTIONS(255),
    [anon_sym_textcolour] = ACTIONS(255),
    [anon_sym_textbgcolor] = ACTIONS(255),
    [anon_sym_textbgcolour] = ACTIONS(255),
    [anon_sym_arctextcolor] = ACTIONS(255),
    [anon_sym_arctextcolour] = ACTIONS(255),
    [anon_sym_arctextbgcolor] = ACTIONS(255),
    [anon_sym_arctextbgcolour] = ACTIONS(255),
    [anon_sym_title] = ACTIONS(255),
    [sym_comment] = ACTIONS(7),
  },
  [92] = {
    [sym_string] = STATE(100),
    [sym__quoted_string] = STATE(60),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(7),
  },
  [93] = {
    [sym_square_bracket_close] = ACTIONS(259),
    [sym_comma] = ACTIONS(223),
    [sym_comment] = ACTIONS(7),
  },
  [94] = {
    [sym_entity_attribute] = STATE(102),
    [sym__boolean_entity_attribute] = STATE(74),
    [sym__string_entity_attribute] = STATE(74),
    [sym_string_entity_attribute_key] = STATE(75),
    [aux_sym_entity_attributes_repeat1] = STATE(94),
    [sym_boolean_entity_attribute_key] = ACTIONS(261),
    [anon_sym_label] = ACTIONS(264),
    [anon_sym_idurl] = ACTIONS(264),
    [anon_sym_id] = ACTIONS(267),
    [anon_sym_url] = ACTIONS(264),
    [anon_sym_linecolor] = ACTIONS(264),
    [anon_sym_linecolour] = ACTIONS(264),
    [anon_sym_textcolor] = ACTIONS(264),
    [anon_sym_textcolour] = ACTIONS(264),
    [anon_sym_textbgcolor] = ACTIONS(264),
    [anon_sym_textbgcolour] = ACTIONS(264),
    [anon_sym_arctextcolor] = ACTIONS(264),
    [anon_sym_arctextcolour] = ACTIONS(264),
    [anon_sym_arctextbgcolor] = ACTIONS(264),
    [anon_sym_arctextbgcolour] = ACTIONS(264),
    [anon_sym_title] = ACTIONS(264),
    [sym_comment] = ACTIONS(7),
  },
  [95] = {
    [sym_comma] = ACTIONS(270),
    [sym_semicolon] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [sym_comment] = ACTIONS(7),
  },
  [96] = {
    [sym_comma] = ACTIONS(272),
    [sym_semicolon] = ACTIONS(272),
    [sym_comment] = ACTIONS(7),
  },
  [97] = {
    [sym_comma] = ACTIONS(274),
    [sym_semicolon] = ACTIONS(274),
    [sym_comment] = ACTIONS(7),
  },
  [98] = {
    [sym_square_bracket_close] = ACTIONS(276),
    [sym_comma] = ACTIONS(276),
    [sym_semicolon] = ACTIONS(276),
    [sym_comment] = ACTIONS(7),
  },
  [99] = {
    [sym_square_bracket_close] = ACTIONS(278),
    [sym_comma] = ACTIONS(278),
    [sym_comment] = ACTIONS(7),
  },
  [100] = {
    [sym_square_bracket_close] = ACTIONS(280),
    [sym_comma] = ACTIONS(280),
    [sym_comment] = ACTIONS(7),
  },
  [101] = {
    [sym_comma] = ACTIONS(282),
    [sym_semicolon] = ACTIONS(282),
    [sym_comment] = ACTIONS(7),
  },
  [102] = {
    [sym_comma] = ACTIONS(223),
    [sym_comment] = ACTIONS(7),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_start_token, 1),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_numerical_option_key, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(28),
  [35] = {.count = 1, .reusable = true}, SHIFT(29),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_option_key, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 3),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_entity_identifier, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_entity_identifier, 1),
  [45] = {.count = 1, .reusable = false}, SHIFT(30),
  [47] = {.count = 1, .reusable = false}, SHIFT(31),
  [49] = {.count = 1, .reusable = true}, SHIFT(34),
  [51] = {.count = 1, .reusable = true}, SHIFT(35),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_option, 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = true}, SHIFT(37),
  [59] = {.count = 1, .reusable = true}, SHIFT(39),
  [61] = {.count = 1, .reusable = true}, SHIFT(40),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(41),
  [67] = {.count = 1, .reusable = true}, SHIFT(42),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_arc, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(43),
  [73] = {.count = 1, .reusable = false}, SHIFT(43),
  [75] = {.count = 1, .reusable = true}, SHIFT(44),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_entity, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(6),
  [81] = {.count = 1, .reusable = true}, SHIFT(7),
  [83] = {.count = 1, .reusable = true}, SHIFT(8),
  [85] = {.count = 1, .reusable = true}, SHIFT(9),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_arcs, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(55),
  [91] = {.count = 1, .reusable = true}, SHIFT(56),
  [93] = {.count = 1, .reusable = true}, SHIFT(58),
  [95] = {.count = 1, .reusable = true}, SHIFT(61),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 4),
  [99] = {.count = 1, .reusable = false}, SHIFT(62),
  [101] = {.count = 1, .reusable = true}, SHIFT(62),
  [103] = {.count = 1, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_options, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_options, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(64),
  [111] = {.count = 1, .reusable = true}, SHIFT(67),
  [113] = {.count = 1, .reusable = true}, SHIFT(69),
  [115] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entities_repeat1, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entities_repeat1, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_entities, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_entities, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_arrow, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_arrow, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(70),
  [137] = {.count = 1, .reusable = true}, SHIFT(71),
  [139] = {.count = 1, .reusable = false}, SHIFT(71),
  [141] = {.count = 1, .reusable = true}, SHIFT(72),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_entity, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(78),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(6),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(7),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(8),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(9),
  [159] = {.count = 1, .reusable = true}, SHIFT(80),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entities_repeat1, 2), SHIFT_REPEAT(11),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entities_repeat1, 2), SHIFT_REPEAT(12),
  [167] = {.count = 1, .reusable = true}, SHIFT(82),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(11),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat1, 2), SHIFT_REPEAT(12),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(11),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 2), SHIFT_REPEAT(12),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__number, 1),
  [183] = {.count = 1, .reusable = true}, SHIFT(84),
  [185] = {.count = 1, .reusable = true}, SHIFT(85),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__size_option, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_size, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__string_option, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__quoted_string, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 5),
  [201] = {.count = 1, .reusable = true}, SHIFT(86),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__numerical_option, 3),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [207] = {.count = 1, .reusable = true}, SHIFT(88),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_option, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_entity_attribute, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(89),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_string_entity_attribute_key, 1),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(90),
  [223] = {.count = 1, .reusable = true}, SHIFT(91),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attribute, 1),
  [227] = {.count = 1, .reusable = true}, SHIFT(92),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__dual_arc, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_options, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_options, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_entities, 3),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_entities, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arcs_repeat2, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arcs_repeat2, 3),
  [243] = {.count = 1, .reusable = true}, SHIFT(95),
  [245] = {.count = 1, .reusable = true}, SHIFT(96),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 6),
  [249] = {.count = 1, .reusable = true}, SHIFT(97),
  [251] = {.count = 1, .reusable = true}, SHIFT(98),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 3),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entity_attributes_repeat1, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(101),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(70),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(71),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entity_attributes_repeat1, 2), SHIFT_REPEAT(71),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym__real, 3),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_sizelike_string, 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_numberlike_string, 3),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_booleanlike_string, 3),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_entity_attribute, 3),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym__string_entity_attribute, 3),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_entity_attributes, 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mscgen() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
