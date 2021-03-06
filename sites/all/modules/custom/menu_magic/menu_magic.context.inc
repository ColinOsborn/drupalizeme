<?php

function menu_magic_node_context($node) {
  $text = _menu_magicify($node->body['und'][0]['value']);
  $output = array(
    '#type'   => 'markup',
    '#markup' => $text,
  );
  return $output;
}


/**
 * Helper function.
 */
function _menu_magicify($text) {
  $substitutions = array (
    ' ' => ' ',
    '!' => "¡",          # ¡
    '"' => "„",          # „
    '#' => '#',
    '$' => '$',
    '%' => '%',
    '&' => "⅋",          # ⅋
    "'" => "͵",           # ͵
    '(' => ')',
    ')' => '(',
    '*' => '*',
    '+' => '+',
    ',' => "‘",          # ‘
    '-' => '-',
    '.' => "˙",          # ˙
    '/' => '/',
    '0' => '0',
    '1' => "⃓",           # ,⃓ can be improved
    '2' => "ჷ",          # ჷ
    '3' => "ε",          # ε
    '4' => "⇁⃓",         # ⇁⃓ can be improved
    '5' => "ᔕ",          # ᔕ or maybe just "S"
    '6' => '9',
    '7' => "_̸",          # _̸
    '8' => '8',
    '9' => '6',
    ':' => ':',
    ';' => "⋅̕",           # ⋅̕ sloppy, should be improved
    '<' => '>',
    '=' => '=',
    '>' => '<',
    '?' => "¿",          # ¿
    '@' => '@',          # can be improved
    'A' => "Ꮜ",          # Ꮜ
    'B' => "ϴ",          # ϴ can be improved
    'C' => "Ɔ",          # Ɔ
    'D' => 'p',          # should be an uppercase D!!
    'E' => "Ǝ",          # Ǝ
    'F' => "Ⅎ",          # Ⅎ
    'G' => "⅁",          # ⅁
    'H' => 'H',
    'I' => 'I',
    'J' => "ſ",          # ſ̲
    'K' => "ʞ",          # ʞ should be an uppercase K!!
    'L' => "⅂",          # ⅂
    'M' => "Ɯ",          # Ɯ or maybe just "W"
    'N' => 'N',
    'O' => 'O',
    'P' => 'd',          # should be uppercase P
    'Q' => "Ծ",          # Ծ can be improved
    'R' => "Ȣ",          # Ȣ can be improved
    'S' => 'S',
    'T' => "⊥",          # ⊥
    'U' => "ᑎ",          # ᑎ
    'V' => "Λ",          # Λ
    'W' => 'M',
    'X' => 'X',
    'Y' => "⅄",          # ⅄
    'Z' => 'Z',
    '[' => ']',
    '\\' => '\\',
    ']' => '[',
    '^' => "‿",          # ‿
    '_' => "‾",          # ‾
    '`' => " ̖",          #  ̖
    'a' => "ɐ",          # ɐ
    'b' => 'q',
    'c' => "ɔ",          # ɔ
    'd' => 'p',
    'e' => "ǝ",          # ǝ
    'f' => "ɟ",          # ɟ
    'g' => "ɓ",          # ɓ
    'h' => "ɥ",          # ɥ
    'i' => "ı̣",          # ı̣
    'j' => "ſ",         # ſ̣
    'k' => "ʞ",          # ʞ
    'l' => "Ʈ",          # Ʈ can be improved
    'm' => "ɯ",          # ɯ
    'n' => 'u',
    'o' => 'o',
    'p' => 'd',
    'q' => 'b',
    'r' => "ɹ",          # ɹ
    's' => 's',
    't' => "ʇ",          # ʇ
    'u' => 'n',
    'v' => "ʌ",          # ʌ
    'w' => "ʍ",          # ʍ
    'x' => 'x',
    'y' => "ʎ",          # ʎ
    'z' => 'z',
    '{' => '}',
    '|' => '|',
    '}' => '{',
    '~' => "∼",          # ∼
  );
  $find = array_keys($substitutions);
  $replace = array_values($substitutions);

  return str_replace($find, $replace, $text);
}
