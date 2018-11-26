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
      $.string
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
      'arctextcolor',
      'arctextcolour',
      'arctextbgcolor',
      'arctextbgcolour',
      'title'
    ),

    // TODO hier gebleven. Next: unit tests voor entities

    // _number_arc_attribute: $ => seq(
    //   $.number_arc_attribute_key,
    //   $.equals,
    //   $._numberlike
    // ),

    // number_arc_attribute_key: $ => 'arcskip',

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

    arc: $ => seq(
      choice(
        $._dual_arc
        // $._single_arc,
        // $._comment_arc,
        // $._span_arc
      )
      // optional($.arc_attributes)
    ),

    _dual_arc: $ => seq(
      $.entity_identifier,
      $.arrow,
      $.entity_identifier
    ),

    arrow: $ => choice(
      '<->',
      '<=>',
      '<:>',
      '<<=>>',
      '<<>>',
      '->',
      '=>',
      ':>',
      '=>>',
      '>>',
      '-x',
      '-X',
      '<-',
      '<=',
      '<:',
      '<<=',
      '<<',
      'x-',
      'X-',
      '--',
      '==',
      '::',
      '..',
      'box',
      'abox',
      'rbox',
      'note'
    ),

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
