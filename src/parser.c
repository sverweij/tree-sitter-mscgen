#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 43
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_hscale = 1,
  anon_sym_arcgradient = 2,
  sym_size_option_key = 3,
  sym_string_option_key = 4,
  anon_sym_msc = 5,
  anon_sym_xu = 6,
  sym_curly_bracket_open = 7,
  sym_curly_bracket_close = 8,
  sym_square_bracket_open = 9,
  sym_square_bracket_close = 10,
  sym_equals = 11,
  sym_comma = 12,
  sym_colon = 13,
  sym_semicolon = 14,
  sym__dot = 15,
  sym__cardinal = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_auto = 18,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 19,
  sym_comment = 20,
  sym_sequence_chart = 21,
  sym_options = 22,
  sym_option = 23,
  sym__numerical_option = 24,
  sym_numerical_option_key = 25,
  sym__size_option = 26,
  sym__string_option = 27,
  sym_start_token = 28,
  sym__numberlike = 29,
  sym_number = 30,
  sym__number = 31,
  sym__real = 32,
  sym_numberlike_string = 33,
  sym__sizelike = 34,
  sym_size = 35,
  sym__size = 36,
  sym_sizelike_string = 37,
  sym_string = 38,
  sym__quoted_string = 39,
  aux_sym_options_repeat1 = 40,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_hscale] = "hscale",
  [anon_sym_arcgradient] = "arcgradient",
  [sym_size_option_key] = "size_option_key",
  [sym_string_option_key] = "string_option_key",
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
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = "/[^\"]*/",
  [sym_comment] = "comment",
  [sym_sequence_chart] = "sequence_chart",
  [sym_options] = "options",
  [sym_option] = "option",
  [sym__numerical_option] = "_numerical_option",
  [sym_numerical_option_key] = "numerical_option_key",
  [sym__size_option] = "_size_option",
  [sym__string_option] = "_string_option",
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
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(29);
      if (lookahead == 'm')
        ADVANCE(35);
      if (lookahead == 'w')
        ADVANCE(38);
      if (lookahead == 'x')
        ADVANCE(51);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
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
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_square_bracket_open);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_square_bracket_close);
      END_STATE();
    case 15:
      if (lookahead == 'r')
        ADVANCE(16);
      if (lookahead == 'u')
        ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'c')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'g')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'a')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'd')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'i')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'e')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 't')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_arcgradient);
      END_STATE();
    case 26:
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'o')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 29:
      if (lookahead == 's')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'c')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'a')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'l')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_hscale);
      END_STATE();
    case 35:
      if (lookahead == 's')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'c')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_msc);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'r')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'm')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'a')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'k')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string_option_key);
      END_STATE();
    case 47:
      if (lookahead == 'd')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 't')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'h')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_size_option_key);
      END_STATE();
    case 51:
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_xu);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_curly_bracket_open);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_curly_bracket_close);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__cardinal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == 'm')
        ADVANCE(35);
      if (lookahead == 'x')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    case 58:
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
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'h')
        ADVANCE(29);
      if (lookahead == 'w')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == 'r')
        ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == 'a')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'u')
        ADVANCE(26);
      END_STATE();
    case 65:
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
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(67);
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(68);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(71);
      if (lookahead == '/')
        ADVANCE(68);
      if (lookahead != 0)
        ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(67);
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 59},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 59},
  [19] = {.lex_state = 59},
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 62},
  [22] = {.lex_state = 59},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 66},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 62},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 62},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 63},
  [39] = {.lex_state = 65},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 62},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_hscale] = ACTIONS(1),
    [anon_sym_arcgradient] = ACTIONS(1),
    [sym_size_option_key] = ACTIONS(1),
    [sym_string_option_key] = ACTIONS(1),
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
    [sym__cardinal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_sequence_chart] = STATE(3),
    [sym_start_token] = STATE(4),
    [anon_sym_msc] = ACTIONS(3),
    [anon_sym_xu] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_curly_bracket_open] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_curly_bracket_open] = ACTIONS(11),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_options] = STATE(10),
    [sym_option] = STATE(11),
    [sym__numerical_option] = STATE(12),
    [sym_numerical_option_key] = STATE(13),
    [sym__size_option] = STATE(12),
    [sym__string_option] = STATE(12),
    [aux_sym_options_repeat1] = STATE(14),
    [anon_sym_hscale] = ACTIONS(13),
    [anon_sym_arcgradient] = ACTIONS(13),
    [sym_size_option_key] = ACTIONS(15),
    [sym_string_option_key] = ACTIONS(17),
    [sym_curly_bracket_close] = ACTIONS(19),
    [sym_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_equals] = ACTIONS(21),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_equals] = ACTIONS(23),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_equals] = ACTIONS(25),
    [sym_comment] = ACTIONS(5),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_curly_bracket_close] = ACTIONS(29),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_comma] = ACTIONS(31),
    [sym_semicolon] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym_comma] = ACTIONS(35),
    [sym_semicolon] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
  },
  [13] = {
    [sym_equals] = ACTIONS(37),
    [sym_comment] = ACTIONS(5),
  },
  [14] = {
    [sym_option] = STATE(21),
    [sym__numerical_option] = STATE(12),
    [sym_numerical_option_key] = STATE(13),
    [sym__size_option] = STATE(12),
    [sym__string_option] = STATE(12),
    [aux_sym_options_repeat1] = STATE(22),
    [anon_sym_hscale] = ACTIONS(13),
    [anon_sym_arcgradient] = ACTIONS(13),
    [sym_size_option_key] = ACTIONS(15),
    [sym_string_option_key] = ACTIONS(17),
    [sym_comment] = ACTIONS(5),
  },
  [15] = {
    [sym__number] = STATE(26),
    [sym__real] = STATE(26),
    [sym__sizelike] = STATE(25),
    [sym_size] = STATE(25),
    [sym__size] = STATE(26),
    [sym_sizelike_string] = STATE(25),
    [sym__cardinal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_auto] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
  },
  [16] = {
    [sym_string] = STATE(28),
    [sym__quoted_string] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(5),
  },
  [18] = {
    [anon_sym_hscale] = ACTIONS(49),
    [anon_sym_arcgradient] = ACTIONS(49),
    [sym_size_option_key] = ACTIONS(49),
    [sym_string_option_key] = ACTIONS(49),
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [sym_curly_bracket_close] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym__numberlike] = STATE(31),
    [sym_number] = STATE(31),
    [sym__number] = STATE(32),
    [sym__real] = STATE(32),
    [sym_numberlike_string] = STATE(31),
    [sym__cardinal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym_comma] = ACTIONS(31),
    [sym_semicolon] = ACTIONS(55),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym_option] = STATE(34),
    [sym__numerical_option] = STATE(12),
    [sym_numerical_option_key] = STATE(13),
    [sym__size_option] = STATE(12),
    [sym__string_option] = STATE(12),
    [aux_sym_options_repeat1] = STATE(22),
    [anon_sym_hscale] = ACTIONS(57),
    [anon_sym_arcgradient] = ACTIONS(57),
    [sym_size_option_key] = ACTIONS(60),
    [sym_string_option_key] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [23] = {
    [sym_comma] = ACTIONS(66),
    [sym_semicolon] = ACTIONS(66),
    [sym__dot] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [sym_comment] = ACTIONS(5),
  },
  [24] = {
    [sym__number] = STATE(36),
    [sym__real] = STATE(36),
    [sym__size] = STATE(36),
    [sym__cardinal] = ACTIONS(39),
    [anon_sym_auto] = ACTIONS(70),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [sym_comma] = ACTIONS(72),
    [sym_semicolon] = ACTIONS(72),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [sym_comma] = ACTIONS(74),
    [sym_semicolon] = ACTIONS(74),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(78),
  },
  [28] = {
    [sym_comma] = ACTIONS(80),
    [sym_semicolon] = ACTIONS(80),
    [sym_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_comma] = ACTIONS(82),
    [sym_semicolon] = ACTIONS(82),
    [sym_comment] = ACTIONS(5),
  },
  [30] = {
    [sym__number] = STATE(38),
    [sym__real] = STATE(38),
    [sym__cardinal] = ACTIONS(39),
    [sym_comment] = ACTIONS(5),
  },
  [31] = {
    [sym_comma] = ACTIONS(84),
    [sym_semicolon] = ACTIONS(84),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_comma] = ACTIONS(86),
    [sym_semicolon] = ACTIONS(86),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym_curly_bracket_close] = ACTIONS(88),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [sym_comma] = ACTIONS(31),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [sym__cardinal] = ACTIONS(90),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_comma] = ACTIONS(98),
    [sym_semicolon] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_comma] = ACTIONS(100),
    [sym_semicolon] = ACTIONS(100),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym_comma] = ACTIONS(102),
    [sym_semicolon] = ACTIONS(102),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_comma] = ACTIONS(104),
    [sym_semicolon] = ACTIONS(104),
    [sym_comment] = ACTIONS(5),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_start_token, 1),
  [9] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_numerical_option_key, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 3),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_option, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, SHIFT(27),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_sequence_chart, 4),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_options, 2),
  [53] = {.count = 1, .reusable = true}, SHIFT(30),
  [55] = {.count = 1, .reusable = true}, SHIFT(33),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(8),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym__number, 1),
  [68] = {.count = 1, .reusable = true}, SHIFT(35),
  [70] = {.count = 1, .reusable = true}, SHIFT(36),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym__size_option, 3),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_size, 1),
  [76] = {.count = 1, .reusable = false}, SHIFT(37),
  [78] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__string_option, 3),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__numerical_option, 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_options, 3),
  [90] = {.count = 1, .reusable = true}, SHIFT(39),
  [92] = {.count = 1, .reusable = true}, SHIFT(40),
  [94] = {.count = 1, .reusable = true}, SHIFT(41),
  [96] = {.count = 1, .reusable = true}, SHIFT(42),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__real, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_sizelike_string, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_numberlike_string, 3),
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
