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
      optional($.entities),
      optional($.arcs),
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
      $._boolean_option,
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

    _boolean_option: $ => seq(
      $.boolean_option_key,
      $.equals,
      $._booleanlike
    ),

    boolean_option_key: $ => choice(
      'wordwraparcs',
      'wordwrapentities',
      'wordwrapboxes'
    ),

    // entities --------------------------------
    entities: $ => seq(
      repeat(
        seq(
          $.entity,
          $.comma
        )
      ),
      $.entity,
      $.semicolon
    ),

    entity: $ => seq(
      $.entity_identifier,
      optional($.entity_attributes)
    ),

    entity_attributes: $ => seq(
      $.square_bracket_open,
      optional(
        seq(
          repeat(
            seq(
              $.entity_attribute,
              $.comma
            )
          ),
          $.entity_attribute
        )
      ),
      $.square_bracket_close
    ),

    entity_attribute: $ => choice(
      $._string_entity_attribute,
      $._boolean_entity_attribute
    ),

    _boolean_entity_attribute: $ => seq(
      $.boolean_entity_attribute_key,
      optional(
        seq(
          $.equals,
          $._booleanlike
        )
      )
    ),

    boolean_entity_attribute_key: $ => 'activation',

    _string_entity_attribute: $ => seq(
      $.string_entity_attribute_key,
      $.equals,
      choice(
        $.string,
        alias($.identifier, $.string)
      )
    ),

    string_entity_attribute_key: $ => choice(
      'label',
      'idurl',
      'id',
      'url',
      'linecolor',
      'linecolour',
      'textcolor',
      'textcolour',
      'textbgcolor',
      'textbgcolour',
      'arclinecolor',
      'arclinecolour',
      'arctextcolor',
      'arctextcolour',
      'arctextbgcolor',
      'arctextbgcolour',
      'title'
    ),

    // arcs ------------------------------------
    arcs: $ => repeat1(
      seq(
        repeat(
          seq(
            $.arc,
            $.comma
          )
        ),
        $.arc,
        $.semicolon
      )
    ),

    arc: $ => choice(
      seq(
        $._dual_arc,
        optional($.arc_attributes)
      ),
      seq(
        $.single_arc,
        optional($.arc_attributes)
      ),
      seq(
        $.comment_arc,
        optional($.arc_attributes)
      ),
      $._inline_expression_arc
    ),
    _dual_arc: $ => choice(
      seq(
        $.entity_identifier,
        choice(
          $.forward_arrow,
          $.bidirectional_arrow
        ),
        choice(
          $.entity_identifier,
          $.entity_wildcard
        )
      ),
      seq(
        choice(
          $.entity_identifier,
          $.entity_wildcard
        ),
        $.backward_arrow,
        $.entity_identifier
      ),
      seq(
        $.entity_identifier,
        $.box,
        $.entity_identifier
      )
    ),

    forward_arrow: $ => choice(
      '->',
      '=>',
      ':>',
      '=>>',
      '>>',
      '-x',
      '-X'
    ),

    backward_arrow: $ => choice(
      '<-',
      '<=',
      '<:',
      '<<=',
      '<<',
      'x-',
      'X-'
    ),

    bidirectional_arrow: $ => choice(
      '<->',
      '<=>',
      '<:>',
      '<<=>>',
      '<<>>',
      '--',
      '==',
      '::',
      '..'
    ),

    box: $ => choice(
      'note',
      'abox',
      'rbox',
      'box'
    ),

    single_arc: $ => choice(
      '|||',
      '...'
    ),

    comment_arc: $ => '---',

    _inline_expression_arc: $ => seq(
      $.entity_identifier,
      $.inline_expression_token,
      $.entity_identifier,
      optional($.arc_attributes),
      $.inline_expression
    ),

    inline_expression_token: $ => choice(
      'alt',
      'else',
      'opt',
      'break',
      'par',
      'seq',
      'strict',
      'neg',
      'critical',
      'ignore',
      'consider',
      'assert',
      'loop',
      'ref',
      'exc'
    ),

    inline_expression: $ => seq(
      $.curly_bracket_open,
      optional($.arcs),
      $.curly_bracket_close
    ),

    arc_attributes: $ => seq(
      $.square_bracket_open,
      optional(
        seq(
          repeat(
            seq(
              $.arc_attribute,
              $.comma
            )
          ),
          $.arc_attribute
        )
      ),
      $.square_bracket_close
    ),

    arc_attribute: $ => choice(
      $._string_arc_attribute,
      $._number_arc_attribute,
      $._boolean_arc_attribute,
      $.value_only_arc_attribute_key
    ),

    _string_arc_attribute: $ => seq(
      $.string_arc_attribute_key,
      $.equals,
      choice(
        $.string,
        alias($.identifier, 'string')
      )
    ),

    string_arc_attribute_key: $ => choice(
      'label',
      'idurl',
      'id',
      'url',
      'linecolor',
      'linecolour',
      'textcolor',
      'textcolour',
      'textbgcolor',
      'textbgcolour',
      'title'
    ),

    _boolean_arc_attribute: $ => seq(
      $.boolean_arc_attribute_key,
      $.equals,
      $._booleanlike
    ),

    boolean_arc_attribute_key: $ => 'activation',

    value_only_arc_attribute_key: $ => choice(
      'activate',
      'deactivate'
    ),

    _number_arc_attribute: $ => seq(
      $.number_arc_attribute_key,
      $.equals,
      $._numberlike
    ),

    number_arc_attribute_key: $ => 'arcskip',

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

    _identifier: $ => /[A-Za-z_0-9]+/,

    identifier: $ => $._identifier,

    entity_identifier: $ => choice(
      $._identifier,
      $._string
    ),

    _numberlike: $ => choice(
      $.number,
      $.numberlike_string
    ),

    number: $ => $._number,

    _number: $ => choice(
      $._integer,
      $._real
    ),

    _integer: $ => /-?[0-9]+/,

    _real: $ => /-?[0-9]+\.[0-9]+/,

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

    _booleanlike: $ => choice(
      $.boolean,
      $.booleanlike_string
    ),

    boolean: $ => $._boolean,

    _boolean: $ => choice(
      'true',
      'false',
      'on',
      'off',
      '0',
      '1'
    ),

    booleanlike_string: $ => seq(
      '"',
      $._boolean,
      '"'
    ),

    string: $ => $._string,

    _string: $ => seq(
      '"',
      repeat(
        choice(
          /[^"]/,
          '\\"'
        )
      ),
      '"'
    ),

    escape_sequence: $ => token.immediate(
      '\\"'
    ),

    entity_wildcard: $ => choice(
      '*',
      '"*"'
    ),

    // comment matching: shamelessly stolen from the c tree sitter grammer
    // at https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
    // ... and they reference stackoverflow:
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(
      choice(
        prec(-10, /\/\/.*/),
        prec(-10, /#.*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        )
      )
    )
  }
})
