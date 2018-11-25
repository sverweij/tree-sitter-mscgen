module.exports = grammar({
  name: 'mscgen',

  extras: $ => [
    $.comment,
    /[\s]/
  ],

  rules: {
    sequence_chart: $ => seq(
      $.start_token,
      $.curly_bracket_open,
      optional($.options),
      // optional($.entities),
      // optional($.arcs),
      $.curly_bracket_close
    ),

    // options ---------------------------------

    options: $ => seq(
      repeat(
        seq(
          $.option,
          $.comma
        )
      ),
      $.option,
      $.semicolon
    ),

    option: $ => choice(
      $._numerical_option,
      $._size_option,
      // TODO - hier gebleven
      // $._boolean_option,
      $._string_option
    ),

    _numerical_option: $ => seq(
      $.numerical_option_key,
      $.equals,
      $._numberlike
    ),

    numerical_option_key: $ => choice(
      'hscale',
      'arcgradient'
    ),

    _size_option: $ => seq(
      $.size_option_key,
      $.equals,
      $._sizelike
    ),

    size_option_key: $ => 'width',

    _string_option: $ => seq(
      $.string_option_key,
      $.equals,
      $.string
    ),

    string_option_key: $ => 'watermark',

    // entities --------------------------------

    // arcs ------------------------------------

    // generic stuff ---------------------------

    start_token: $ => choice(
      'msc',
      'xu'
    ),

    curly_bracket_open: $ => '{',

    curly_bracket_close: $ => '}',

    square_bracket_open: $ => '[',

    square_bracket_close: $ => ']',

    equals: $ => '=',

    comma: $ => ',',

    colon: $ => ':',

    semicolon: $ => ';',

    _dot: $ => '.',

    _identifier: $ => /([^;, "\t\n\r=\-><:{[])+/,

    entity_identifier: $ => choice(
      $._identifier,
      $._quoted_string
    ),

    _numberlike: $ => choice(
      $.number,
      $.numberlike_string
    ),

    number: $ => $._number,

    _number: $ => choice(
      $._cardinal,
      $._real
    ),

    _cardinal: $ => /[0-9]+/,

    _real: $ => seq(
      $._cardinal,
      $._dot,
      $._cardinal
    ),

    numberlike_string: $ => seq(
      '"',
      $._number,
      '"'
    ),

    _sizelike: $ => choice(
      $.size,
      $.sizelike_string
    ),

    size: $ => $._size,

    _size: $ => choice(
      $._number,
      'auto'
    ),

    sizelike_string: $ => seq(
      '"',
      $._size,
      '"'
    ),

    string: $ => $._quoted_string,

    _quoted_string: $ => seq(
      '"',
      /[^"]*/,
      '"'
    ),

    // comment matching: shamelessly stolen from the c tree sitter grammer
    // at https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
    // ... and they reference stackoverflow:
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq('#', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
})
