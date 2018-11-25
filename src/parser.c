#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 51
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_msc = 8,
  anon_sym_xu = 9,
  sym_curly_bracket_open = 10,
  sym_curly_bracket_close = 11,
  sym_square_bracket_open = 12,
  sym_square_bracket_close = 13,
  sym_equals = 14,
  sym_comma = 15,
  sym_colon = 16,
  sym_semicolon = 17,
  sym__dot = 18,
  sym__cardinal = 19,
  anon_sym_DQUOTE = 20,
  anon_sym_auto = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_on = 24,
  anon_sym_off = 25,
  anon_sym_0 = 26,
  anon_sym_1 = 27,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 28,
  sym_comment = 29,
  sym_sequence_chart = 30,
  sym_options = 31,
  sym_option = 32,
  sym__numerical_option = 33,
  sym_numerical_option_key = 34,
  sym__size_option = 35,
  sym__string_option = 36,
  sym__boolean_option = 37,
  sym_boolean_option_key = 38,
  sym_start_token = 39,
  sym__numberlike = 40,
  sym_number = 41,
  sym__number = 42,
  sym__real = 43,
  sym_numberlike_string = 44,
  sym__sizelike = 45,
  sym_size = 46,
  sym__size = 47,
  sym_sizelike_string = 48,
  sym__booleanlike = 49,
  sym_boolean = 50,
  sym__boolean = 51,
  sym_booleanlike_string = 52,
  sym_string = 53,
  sym__quoted_string = 54,
  aux_sym_options_repeat1 = 55,
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
  [sym_start_token] = "start_token",
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
  [sym_start_token] = {
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
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == '1')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == ']')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(32);
      if (lookahead == 'h')
        ADVANCE(37);
      if (lookahead == 'm')
        ADVANCE(43);
      if (lookahead == 'o')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'w')
        ADVANCE(54);
      if (lookahead == 'x')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(93);
      if (lookahead == '}')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('2' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
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
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 6:
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__cardinal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_square_bracket_open);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_square_bracket_close);
      END_STATE();
    case 18:
      if (lookahead == 'r')
        ADVANCE(19);
      if (lookahead == 'u')
        ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'c')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'g')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'r')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'a')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'd')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'i')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 't')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_arcgradient);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'o')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 32:
      if (lookahead == 'a')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'l')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 's')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 37:
      if (lookahead == 's')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'c')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'a')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'l')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_hscale);
      END_STATE();
    case 43:
      if (lookahead == 's')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'c')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_msc);
      END_STATE();
    case 46:
      if (lookahead == 'f')
        ADVANCE(47);
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'f')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 50:
      if (lookahead == 'r')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 54:
      if (lookahead == 'a')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 't')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'r')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'm')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'r')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'k')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_option_key);
      END_STATE();
    case 63:
      if (lookahead == 'd')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 't')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'h')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_size_option_key);
      END_STATE();
    case 67:
      if (lookahead == 'r')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'd')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'w')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'r')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'a')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'p')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 'b')
        ADVANCE(78);
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'c')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 's')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_wordwraparcs);
      END_STATE();
    case 78:
      if (lookahead == 'o')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'x')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'e')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_wordwrapboxes);
      END_STATE();
    case 83:
      if (lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'i')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'i')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 's')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_wordwrapentities);
      END_STATE();
    case 91:
      if (lookahead == 'u')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_xu);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_curly_bracket_open);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      END_STATE();
    case 95:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == 'm')
        ADVANCE(43);
      if (lookahead == 'x')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      END_STATE();
    case 96:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      END_STATE();
    case 97:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      END_STATE();
    case 98:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == 'a')
        ADVANCE(99);
      if (lookahead == 'h')
        ADVANCE(37);
      if (lookahead == 'w')
        ADVANCE(54);
      if (lookahead == '}')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 100:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      END_STATE();
    case 101:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      END_STATE();
    case 102:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == 'a')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 103:
      if (lookahead == 'u')
        ADVANCE(29);
      END_STATE();
    case 104:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(105);
      if (lookahead == '1')
        ADVANCE(106);
      if (lookahead == 'f')
        ADVANCE(32);
      if (lookahead == 'o')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 107:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(109);
      if (lookahead == '/')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(110);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(112);
      if (lookahead == '/')
        ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(113);
      if (lookahead == '/')
        ADVANCE(110);
      if (lookahead != 0)
        ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(109);
      if (lookahead == '/')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 96},
  [3] = {.lex_state = 97},
  [4] = {.lex_state = 96},
  [5] = {.lex_state = 98},
  [6] = {.lex_state = 100},
  [7] = {.lex_state = 100},
  [8] = {.lex_state = 100},
  [9] = {.lex_state = 100},
  [10] = {.lex_state = 97},
  [11] = {.lex_state = 98},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 100},
  [15] = {.lex_state = 100},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 102},
  [18] = {.lex_state = 102},
  [19] = {.lex_state = 97},
  [20] = {.lex_state = 98},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 104},
  [24] = {.lex_state = 101},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 107},
  [27] = {.lex_state = 102},
  [28] = {.lex_state = 101},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 108},
  [31] = {.lex_state = 101},
  [32] = {.lex_state = 101},
  [33] = {.lex_state = 102},
  [34] = {.lex_state = 101},
  [35] = {.lex_state = 101},
  [36] = {.lex_state = 104},
  [37] = {.lex_state = 101},
  [38] = {.lex_state = 101},
  [39] = {.lex_state = 98},
  [40] = {.lex_state = 101},
  [41] = {.lex_state = 102},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 102},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 101},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 101},
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
    [anon_sym_msc] = ACTIONS(1),
    [anon_sym_xu] = ACTIONS(1),
    [sym_curly_bracket_open] = ACTIONS(1),
    [sym_curly_bracket_close] = ACTIONS(1),
    [sym_square_bracket_open] = ACTIONS(1),
    [sym_square_bracket_close] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
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
    [sym_options] = STATE(11),
    [sym_option] = STATE(12),
    [sym__numerical_option] = STATE(13),
    [sym_numerical_option_key] = STATE(14),
    [sym__size_option] = STATE(13),
    [sym__string_option] = STATE(13),
    [sym__boolean_option] = STATE(13),
    [sym_boolean_option_key] = STATE(15),
    [aux_sym_options_repeat1] = STATE(16),
    [anon_sym_hscale] = ACTIONS(15),
    [anon_sym_arcgradient] = ACTIONS(15),
    [sym_size_option_key] = ACTIONS(17),
    [sym_string_option_key] = ACTIONS(19),
    [anon_sym_wordwraparcs] = ACTIONS(21),
    [anon_sym_wordwrapentities] = ACTIONS(21),
    [anon_sym_wordwrapboxes] = ACTIONS(21),
    [sym_curly_bracket_close] = ACTIONS(23),
    [sym_comment] = ACTIONS(7),
  },
  [6] = {
    [sym_equals] = ACTIONS(25),
    [sym_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_equals] = ACTIONS(27),
    [sym_comment] = ACTIONS(7),
  },
  [8] = {
    [sym_equals] = ACTIONS(29),
    [sym_comment] = ACTIONS(7),
  },
  [9] = {
    [sym_equals] = ACTIONS(31),
    [sym_comment] = ACTIONS(7),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [11] = {
    [sym_curly_bracket_close] = ACTIONS(35),
    [sym_comment] = ACTIONS(7),
  },
  [12] = {
    [sym_comma] = ACTIONS(37),
    [sym_semicolon] = ACTIONS(39),
    [sym_comment] = ACTIONS(7),
  },
  [13] = {
    [sym_comma] = ACTIONS(41),
    [sym_semicolon] = ACTIONS(41),
    [sym_comment] = ACTIONS(7),
  },
  [14] = {
    [sym_equals] = ACTIONS(43),
    [sym_comment] = ACTIONS(7),
  },
  [15] = {
    [sym_equals] = ACTIONS(45),
    [sym_comment] = ACTIONS(7),
  },
  [16] = {
    [sym_option] = STATE(24),
    [sym__numerical_option] = STATE(13),
    [sym_numerical_option_key] = STATE(14),
    [sym__size_option] = STATE(13),
    [sym__string_option] = STATE(13),
    [sym__boolean_option] = STATE(13),
    [sym_boolean_option_key] = STATE(15),
    [aux_sym_options_repeat1] = STATE(25),
    [anon_sym_hscale] = ACTIONS(15),
    [anon_sym_arcgradient] = ACTIONS(15),
    [sym_size_option_key] = ACTIONS(17),
    [sym_string_option_key] = ACTIONS(19),
    [anon_sym_wordwraparcs] = ACTIONS(21),
    [anon_sym_wordwrapentities] = ACTIONS(21),
    [anon_sym_wordwrapboxes] = ACTIONS(21),
    [sym_comment] = ACTIONS(7),
  },
  [17] = {
    [sym__number] = STATE(29),
    [sym__real] = STATE(29),
    [sym__sizelike] = STATE(28),
    [sym_size] = STATE(28),
    [sym__size] = STATE(29),
    [sym_sizelike_string] = STATE(28),
    [sym__cardinal] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_auto] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
  },
  [18] = {
    [sym_string] = STATE(31),
    [sym__quoted_string] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_comment] = ACTIONS(7),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(7),
  },
  [20] = {
    [anon_sym_hscale] = ACTIONS(57),
    [anon_sym_arcgradient] = ACTIONS(57),
    [sym_size_option_key] = ACTIONS(57),
    [sym_string_option_key] = ACTIONS(57),
    [anon_sym_wordwraparcs] = ACTIONS(57),
    [anon_sym_wordwrapentities] = ACTIONS(57),
    [anon_sym_wordwrapboxes] = ACTIONS(57),
    [sym_comment] = ACTIONS(7),
  },
  [21] = {
    [sym_curly_bracket_close] = ACTIONS(59),
    [sym_comment] = ACTIONS(7),
  },
  [22] = {
    [sym__numberlike] = STATE(34),
    [sym_number] = STATE(34),
    [sym__number] = STATE(35),
    [sym__real] = STATE(35),
    [sym_numberlike_string] = STATE(34),
    [sym__cardinal] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_comment] = ACTIONS(7),
  },
  [23] = {
    [sym__booleanlike] = STATE(37),
    [sym_boolean] = STATE(37),
    [sym__boolean] = STATE(38),
    [sym_booleanlike_string] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_on] = ACTIONS(65),
    [anon_sym_off] = ACTIONS(65),
    [anon_sym_0] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [sym_comment] = ACTIONS(7),
  },
  [24] = {
    [sym_comma] = ACTIONS(37),
    [sym_semicolon] = ACTIONS(67),
    [sym_comment] = ACTIONS(7),
  },
  [25] = {
    [sym_option] = STATE(40),
    [sym__numerical_option] = STATE(13),
    [sym_numerical_option_key] = STATE(14),
    [sym__size_option] = STATE(13),
    [sym__string_option] = STATE(13),
    [sym__boolean_option] = STATE(13),
    [sym_boolean_option_key] = STATE(15),
    [aux_sym_options_repeat1] = STATE(25),
    [anon_sym_hscale] = ACTIONS(69),
    [anon_sym_arcgradient] = ACTIONS(69),
    [sym_size_option_key] = ACTIONS(72),
    [sym_string_option_key] = ACTIONS(75),
    [anon_sym_wordwraparcs] = ACTIONS(78),
    [anon_sym_wordwrapentities] = ACTIONS(78),
    [anon_sym_wordwrapboxes] = ACTIONS(78),
    [sym_comment] = ACTIONS(7),
  },
  [26] = {
    [sym_comma] = ACTIONS(81),
    [sym_semicolon] = ACTIONS(81),
    [sym__dot] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_comment] = ACTIONS(7),
  },
  [27] = {
    [sym__number] = STATE(42),
    [sym__real] = STATE(42),
    [sym__size] = STATE(42),
    [sym__cardinal] = ACTIONS(47),
    [anon_sym_auto] = ACTIONS(85),
    [sym_comment] = ACTIONS(7),
  },
  [28] = {
    [sym_comma] = ACTIONS(87),
    [sym_semicolon] = ACTIONS(87),
    [sym_comment] = ACTIONS(7),
  },
  [29] = {
    [sym_comma] = ACTIONS(89),
    [sym_semicolon] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
  },
  [30] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(91),
    [sym_comment] = ACTIONS(93),
  },
  [31] = {
    [sym_comma] = ACTIONS(95),
    [sym_semicolon] = ACTIONS(95),
    [sym_comment] = ACTIONS(7),
  },
  [32] = {
    [sym_comma] = ACTIONS(97),
    [sym_semicolon] = ACTIONS(97),
    [sym_comment] = ACTIONS(7),
  },
  [33] = {
    [sym__number] = STATE(44),
    [sym__real] = STATE(44),
    [sym__cardinal] = ACTIONS(47),
    [sym_comment] = ACTIONS(7),
  },
  [34] = {
    [sym_comma] = ACTIONS(99),
    [sym_semicolon] = ACTIONS(99),
    [sym_comment] = ACTIONS(7),
  },
  [35] = {
    [sym_comma] = ACTIONS(101),
    [sym_semicolon] = ACTIONS(101),
    [sym_comment] = ACTIONS(7),
  },
  [36] = {
    [sym__boolean] = STATE(45),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [anon_sym_on] = ACTIONS(103),
    [anon_sym_off] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(103),
    [anon_sym_1] = ACTIONS(103),
    [sym_comment] = ACTIONS(7),
  },
  [37] = {
    [sym_comma] = ACTIONS(105),
    [sym_semicolon] = ACTIONS(105),
    [sym_comment] = ACTIONS(7),
  },
  [38] = {
    [sym_comma] = ACTIONS(107),
    [sym_semicolon] = ACTIONS(107),
    [sym_comment] = ACTIONS(7),
  },
  [39] = {
    [sym_curly_bracket_close] = ACTIONS(109),
    [sym_comment] = ACTIONS(7),
  },
  [40] = {
    [sym_comma] = ACTIONS(37),
    [sym_comment] = ACTIONS(7),
  },
  [41] = {
    [sym__cardinal] = ACTIONS(111),
    [sym_comment] = ACTIONS(7),
  },
  [42] = {
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_comment] = ACTIONS(7),
  },
  [43] = {
    [anon_sym_DQUOTE] = ACTIONS(115),
    [sym_comment] = ACTIONS(7),
  },
  [44] = {
    [anon_sym_DQUOTE] = ACTIONS(117),
    [sym_comment] = ACTIONS(7),
  },
  [45] = {
    [anon_sym_DQUOTE] = ACTIONS(119),
    [sym_comment] = ACTIONS(7),
  },
  [46] = {
    [sym_comma] = ACTIONS(121),
    [sym_semicolon] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_comment] = ACTIONS(7),
  },
  [47] = {
    [sym_comma] = ACTIONS(123),
    [sym_semicolon] = ACTIONS(123),
    [sym_comment] = ACTIONS(7),
  },
  [48] = {
    [sym_comma] = ACTIONS(125),
    [sym_semicolon] = ACTIONS(125),
    [sym_comment] = ACTIONS(7),
  },
  [49] = {
    [sym_comma] = ACTIONS(127),
    [sym_semicolon] = ACTIONS(127),
    [sym_comment] = ACTIONS(7),
  },
  [50] = {
    [sym_comma] = ACTIONS(129),
    [sym_semicolon] = ACTIONS(129),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_numerical_option_key, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_option_key, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 3),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_option, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, SHIFT(29),
  [53] = {.count = 1, .reusable = true}, SHIFT(30),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 4),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_options, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(33),
  [63] = {.count = 1, .reusable = true}, SHIFT(36),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, SHIFT(39),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(6),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(7),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(8),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(9),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__number, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(41),
  [85] = {.count = 1, .reusable = true}, SHIFT(42),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__size_option, 3),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_size, 1),
  [91] = {.count = 1, .reusable = false}, SHIFT(43),
  [93] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__string_option, 3),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__numerical_option, 3),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(45),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_option, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_options, 3),
  [111] = {.count = 1, .reusable = true}, SHIFT(46),
  [113] = {.count = 1, .reusable = true}, SHIFT(47),
  [115] = {.count = 1, .reusable = true}, SHIFT(48),
  [117] = {.count = 1, .reusable = true}, SHIFT(49),
  [119] = {.count = 1, .reusable = true}, SHIFT(50),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__real, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_sizelike_string, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_numberlike_string, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_booleanlike_string, 3),
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
