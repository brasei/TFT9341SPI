// This comes with no warranty, implied or otherwise

// This data structure was designed to support Proportional fonts
// on Arduinos. It can however handle any ttf font that has been converted
// using the conversion program. These could be fixed width or proportional 
// fonts. Individual characters do not have to be multiples of 8 bits wide. 
// Any width is fine and does not need to be fixed.

// The data bits are packed to minimize data requirements, but the tradeoff
// is that a header is required per character.

// Gothic14b.c
// Point Size   : 14
// Memory usage : 1301 bytes
// # characters : 95

// Header Format (to make Arduino UTFT Compatible):
// ------------------------------------------------
// Character Width (Used as a marker to indicate use this format. i.e.: = 0x00)
// Character Height
// First Character (Reserved. 0x00)
// Number Of Characters (Reserved. 0x00)

#include <avr/pgmspace.h>

const uint8_t Gothic14b[] PROGMEM = 
{
0x00, 0x0D, 0x00, 0x00,

// Individual Character Format:
// ----------------------------
// Character Code
// Adjusted Y Offset
// Width
// Height
// xOffset
// xDelta (the distance to move the cursor. Effective width of the character.)
// Data[n]

// NOTE: You can remove any of these characters if they are not needed in
// your application. The first character number in each Glyph indicates
// the ASCII character code. Therefore, these do not have to be sequential.
// Just remove all the content for a particular character to save space.

// ' '
0x20,0x0C,0x00,0x00,0x00,0x04,

// '!'
0x21,0x02,0x02,0x0A,0x01,0x04,
0xFF,0xFC,0xF0,
// '"'
0x22,0x02,0x03,0x03,0x00,0x05,
0xB6,0x80,
// '#'
0x23,0x02,0x09,0x0A,0xFF,0x08,
0x1B,0x0D,0x9F,0xCF,0xE3,0x63,0xF9,0xFC,0xDC,0x6C,0x36,0x00,
// '$'
0x24,0x01,0x06,0x0D,0x00,0x08,
0x31,0xEF,0xB2,0xE1,0xC3,0x83,0x4F,0xF7,0x8C,0x30,
// '%'
0x25,0x02,0x0B,0x0A,0x00,0x0C,
0x70,0xD1,0xF2,0x24,0x45,0x07,0x20,0x0B,0x82,0x88,0x91,0x12,0x24,0x38,
// '&'
0x26,0x02,0x09,0x0A,0x01,0x0A,
0x38,0x3E,0x1B,0x0F,0x03,0x83,0xC3,0x3D,0x9C,0xFE,0x3D,0x80,
// '''
0x27,0x02,0x01,0x03,0x00,0x03,
0xE0,
// '('
0x28,0x02,0x04,0x0D,0x01,0x05,
0x36,0x6C,0xCC,0xCC,0xCC,0x66,0x30,
// ')'
0x29,0x02,0x04,0x0D,0x00,0x05,
0xC6,0x63,0x33,0x33,0x33,0x66,0xC0,
// '*'
0x2A,0x02,0x05,0x05,0x01,0x06,
0x27,0xDD,0xF2,0x00,
// '+'
0x2B,0x02,0x08,0x08,0x00,0x08,
0x18,0x18,0x18,0xFF,0xFF,0x18,0x18,0x18,
// ','
0x2C,0x0A,0x03,0x04,0x00,0x04,
0x05,0x20,
// '-'
0x2D,0x07,0x03,0x02,0x01,0x06,
0xFC,
// '.'
0x2E,0x0A,0x02,0x02,0x01,0x04,
0xF0,
// '/'
0x2F,0x02,0x06,0x0C,0x00,0x06,
0x08,0x20,0x84,0x10,0x42,0x08,0x21,0x04,0x10,
// '0'
0x30,0x02,0x07,0x0A,0x00,0x08,
0x38,0xFB,0xBE,0x3C,0x78,0xF1,0xF7,0x7C,0x70,
// '1'
0x31,0x02,0x04,0x0A,0x01,0x08,
0x7F,0x33,0x33,0x33,0x33,
// '2'
0x32,0x02,0x07,0x0A,0x00,0x08,
0x3C,0xFF,0x9E,0x30,0x41,0x86,0x18,0x7F,0xFC,
// '3'
0x33,0x02,0x07,0x0A,0x00,0x08,
0x3C,0xFF,0x18,0xE1,0xC1,0xF1,0xF3,0x7C,0x70,
// '4'
0x34,0x02,0x07,0x0A,0x00,0x08,
0x0C,0x38,0xF1,0xE6,0xD9,0xBF,0xFF,0x0C,0x18,
// '5'
0x35,0x02,0x07,0x0A,0x00,0x08,
0x3E,0x7D,0x83,0xC7,0xC0,0xC1,0xE3,0x7C,0x70,
// '6'
0x36,0x02,0x06,0x0A,0x01,0x08,
0x10,0xC3,0x18,0x7B,0xFC,0xF3,0xFD,0xE0,
// '7'
0x37,0x02,0x07,0x0A,0x00,0x08,
0xFF,0xFC,0x30,0x61,0x83,0x0C,0x18,0x60,0x80,
// '8'
0x38,0x02,0x07,0x0A,0x00,0x08,
0x7D,0xFF,0x1E,0x37,0xCF,0xB1,0xE3,0xFE,0xF8,
// '9'
0x39,0x02,0x06,0x0A,0x01,0x08,
0x7B,0xFC,0xF3,0xFD,0xE1,0x8C,0x30,0x80,
// ':'
0x3A,0x05,0x02,0x07,0x01,0x04,
0xF0,0x3C,
// ';'
0x3B,0x05,0x03,0x09,0x00,0x04,
0x6C,0x00,0x0A,0x40,
// '<'
0x3C,0x03,0x06,0x08,0x01,0x08,
0x04,0xFF,0xB0,0xF8,0xF0,0x40,
// '='
0x3D,0x04,0x06,0x05,0x01,0x08,
0xFF,0xF0,0x3F,0xFC,
// '>'
0x3E,0x03,0x06,0x08,0x01,0x08,
0x83,0xC7,0xC3,0x7F,0xC8,0x00,
// '?'
0x3F,0x02,0x07,0x0A,0x00,0x08,
0x3C,0xFF,0x18,0x30,0xC3,0x06,0x00,0x18,0x30,
// '@'
0x40,0x02,0x0A,0x0A,0x00,0x0A,
0x1E,0x08,0x64,0x0E,0x7D,0xBF,0x6C,0x9B,0xE9,0x7C,0x21,0x87,0x80,
// 'A'
0x41,0x02,0x0B,0x0A,0x00,0x0A,
0x0E,0x01,0xC0,0x38,0x0D,0x81,0xB0,0x63,0x0F,0xE1,0xFC,0x60,0xCC,0x18,
// 'B'
0x42,0x02,0x06,0x0A,0x01,0x08,
0xF3,0xED,0xB6,0xF3,0xEC,0xF3,0xFF,0xE0,
// 'C'
0x43,0x02,0x09,0x0A,0x01,0x0B,
0x1E,0x3F,0x98,0x78,0x0C,0x06,0x03,0x00,0xC2,0x7F,0x8F,0x00,
// 'D'
0x44,0x02,0x08,0x0A,0x01,0x0A,
0xF8,0xFE,0xC6,0xC3,0xC3,0xC3,0xC3,0xC6,0xFE,0xFC,
// 'E'
0x45,0x02,0x05,0x0A,0x01,0x07,
0xFF,0xF1,0x8F,0xFF,0x18,0xFF,0xC0,
// 'F'
0x46,0x02,0x05,0x0A,0x01,0x07,
0xFF,0xF1,0x8F,0xFF,0x18,0xC6,0x00,
// 'G'
0x47,0x02,0x0A,0x0A,0x01,0x0C,
0x1E,0x1F,0xE7,0x1B,0x00,0xC0,0x31,0xFE,0x7D,0xC6,0x7F,0x87,0x80,
// 'H'
0x48,0x02,0x08,0x0A,0x01,0x0A,
0xC3,0xC3,0xC3,0xC3,0xFF,0xFF,0xC3,0xC3,0xC3,0xC3,
// 'I'
0x49,0x02,0x02,0x0A,0x01,0x04,
0xFF,0xFF,0xF0,
// 'J'
0x4A,0x02,0x06,0x0A,0x00,0x07,
0x0C,0x30,0xC3,0x0C,0x30,0xD3,0xFD,0xE0,
// 'K'
0x4B,0x02,0x08,0x0A,0x01,0x09,
0xC6,0xCC,0xD8,0xF0,0xF0,0xF0,0xD8,0xCC,0xCC,0xC6,
// 'L'
0x4C,0x02,0x05,0x0A,0x01,0x06,
0xC6,0x31,0x8C,0x63,0x18,0xFF,0xC0,
// 'M'
0x4D,0x02,0x0B,0x0A,0x01,0x0D,
0x60,0xCE,0x39,0xC7,0x78,0xFF,0xBF,0xB6,0xF7,0xDE,0x73,0xCE,0x79,0xCC,
// 'N'
0x4E,0x02,0x08,0x0A,0x01,0x0A,
0xC3,0xE3,0xE3,0xF3,0xDB,0xDB,0xCF,0xC7,0xC7,0xC3,
// 'O'
0x4F,0x02,0x0A,0x0A,0x01,0x0C,
0x1E,0x1F,0xE6,0x1B,0x03,0xC0,0xF0,0x3C,0x0D,0x86,0x7F,0x87,0x80,
// 'P'
0x50,0x02,0x06,0x0A,0x01,0x08,
0xFB,0xFC,0xF3,0xFF,0xEC,0x30,0xC3,0x00,
// 'Q'
0x51,0x02,0x0B,0x0B,0x01,0x0C,
0x1E,0x0F,0xE1,0x86,0x60,0xEC,0x0D,0x81,0xB1,0xB3,0x1C,0x7F,0x83,0xF0,0x03,0x00,
// 'R'
0x52,0x02,0x07,0x0A,0x01,0x08,
0xF9,0xFB,0x36,0x6F,0xDF,0x36,0x6C,0xCD,0x98,
// 'S'
0x53,0x02,0x06,0x0A,0x00,0x07,
0x7B,0xFC,0xB8,0x70,0xE0,0xD3,0xFD,0xE0,
// 'T'
0x54,0x02,0x06,0x0A,0x00,0x06,
0xFF,0xF3,0x0C,0x30,0xC3,0x0C,0x30,0xC0,
// 'U'
0x55,0x02,0x07,0x0A,0x01,0x09,
0xC7,0x8F,0x1E,0x3C,0x78,0xF1,0xE3,0x7C,0x70,
// 'V'
0x56,0x02,0x0B,0x0A,0xFF,0x0A,
0x60,0xCC,0x18,0xC6,0x18,0xC3,0x18,0x36,0x06,0xC0,0x70,0x0E,0x01,0xC0,
// 'W'
0x57,0x02,0x0D,0x0A,0x00,0x0D,
0xC7,0x1E,0x38,0xD9,0xCC,0xDF,0x66,0xDB,0x36,0xD9,0xF7,0xC7,0x1C,0x38,0xE1,0xC7,0x00,
// 'X'
0x58,0x02,0x0A,0x0A,0x00,0x0A,
0x61,0x8C,0xC3,0x30,0x78,0x0C,0x03,0x01,0xE0,0xCC,0x33,0x18,0x60,
// 'Y'
0x59,0x02,0x08,0x0A,0x00,0x08,
0x66,0x66,0x66,0x3C,0x3C,0x18,0x18,0x18,0x18,0x18,
// 'Z'
0x5A,0x02,0x05,0x0A,0x01,0x07,
0xFF,0xCC,0x63,0x31,0x8C,0xFF,0xC0,
// '['
0x5B,0x02,0x03,0x0D,0x01,0x04,
0xFF,0x6D,0xB6,0xDB,0x7E,
// '\'
0x5C,0x02,0x07,0x0C,0x01,0x09,
0x40,0x80,0x81,0x02,0x02,0x04,0x04,0x08,0x10,0x10,0x20,
// ']'
0x5D,0x02,0x03,0x0D,0x00,0x04,
0xFD,0xB6,0xDB,0x6D,0xFE,
// '^'
0x5E,0x02,0x07,0x08,0x00,0x08,
0x38,0x70,0xE3,0xE6,0xCD,0x9B,0x36,
// '_'
0x5F,0x0D,0x07,0x01,0x00,0x07,
0xFE,
// '`'
0x60,0x00,0x04,0x03,0x00,0x06,
0xE6,0x30,
// 'a'
0x61,0x05,0x07,0x07,0x01,0x09,
0x36,0xFF,0x1E,0x3C,0x6F,0xCD,0x80,
// 'b'
0x62,0x02,0x07,0x0A,0x01,0x09,
0xC1,0x83,0x06,0xCF,0xD8,0xF1,0xE3,0xFD,0xB0,
// 'c'
0x63,0x05,0x07,0x07,0x01,0x09,
0x3C,0xFF,0x96,0x0E,0x4F,0xCF,0x00,
// 'd'
0x64,0x02,0x07,0x0A,0x01,0x09,
0x06,0x0C,0x19,0xB7,0xF8,0xF1,0xE3,0x7E,0x6C,
// 'e'
0x65,0x05,0x07,0x07,0x01,0x09,
0x38,0xFB,0x1F,0xFC,0x0F,0xCF,0x00,
// 'f'
0x66,0x02,0x04,0x0A,0x00,0x04,
0x37,0x6F,0xF6,0x66,0x66,
// 'g'
0x67,0x05,0x08,0x0A,0x00,0x09,
0x3B,0x3F,0x63,0x63,0x63,0x3F,0x1B,0x07,0x7E,0x3C,
// 'h'
0x68,0x02,0x06,0x0A,0x01,0x08,
0xC3,0x0C,0x36,0xFF,0x3C,0xF3,0xCF,0x30,
// 'i'
0x69,0x02,0x02,0x0A,0x01,0x04,
0xF3,0xFF,0xF0,
// 'j'
0x6A,0x02,0x03,0x0D,0x00,0x04,
0x6C,0x36,0xDB,0x6D,0xFC,
// 'k'
0x6B,0x02,0x08,0x0A,0x01,0x08,
0xC0,0xC0,0xC0,0xCC,0xD8,0xF0,0xF0,0xD8,0xCC,0xC6,
// 'l'
0x6C,0x02,0x02,0x0A,0x01,0x04,
0xFF,0xFF,0xF0,
// 'm'
0x6D,0x05,0x0C,0x07,0x01,0x0E,
0xDC,0xEF,0xFF,0xE7,0x3C,0x63,0xC6,0x3C,0x63,0xC6,0x30,
// 'n'
0x6E,0x05,0x06,0x07,0x01,0x08,
0xDB,0xFC,0xF3,0xCF,0x3C,0xC0,
// 'o'
0x6F,0x05,0x07,0x07,0x01,0x09,
0x38,0xFB,0x1E,0x3C,0x6F,0x8E,0x00,
// 'p'
0x70,0x05,0x07,0x0A,0x01,0x09,
0xD9,0xFB,0x1E,0x3C,0x7F,0xB6,0x60,0xC1,0x80,
// 'q'
0x71,0x05,0x07,0x0A,0x01,0x09,
0x77,0xFF,0x1E,0x3C,0x6F,0xCD,0x83,0x06,0x0C,
// 'r'
0x72,0x05,0x04,0x07,0x00,0x04,
0xDF,0xCC,0xCC,0xC0,
// 's'
0x73,0x05,0x04,0x07,0x01,0x06,
0x6F,0xC6,0x3F,0xE0,
// 't'
0x74,0x02,0x04,0x0A,0x00,0x04,
0x66,0x6F,0xF6,0x66,0x66,
// 'u'
0x75,0x05,0x06,0x07,0x01,0x08,
0xCF,0x3C,0xF3,0xCF,0xF7,0x80,
// 'v'
0x76,0x05,0x09,0x07,0xFF,0x07,
0x63,0x31,0x8D,0x86,0xC1,0xC0,0xE0,0x20,
// 'w'
0x77,0x05,0x0B,0x07,0x00,0x0B,
0x6E,0xCD,0xD9,0xBB,0x3F,0xC3,0xB8,0x77,0x0C,0x60,
// 'x'
0x78,0x05,0x09,0x07,0xFF,0x08,
0x63,0x1B,0x07,0x03,0x81,0xC1,0xB1,0x8C,
// 'y'
0x79,0x05,0x08,0x0A,0x00,0x07,
0xC6,0x66,0x6C,0x7C,0x3C,0x38,0x18,0x30,0x30,0x30,
// 'z'
0x7A,0x05,0x06,0x07,0x00,0x06,
0x7D,0xE1,0x8C,0x61,0xFF,0xC0,
// '{'
0x7B,0x02,0x05,0x0D,0x00,0x05,
0x19,0xCC,0x67,0x73,0x8E,0x31,0x8C,0x71,0x80,
// '|'
0x7C,0x02,0x01,0x0D,0x03,0x08,
0xFF,0xF8,
// '}'
0x7D,0x02,0x05,0x0D,0x00,0x05,
0xC7,0x18,0xC7,0x1C,0xEE,0x63,0x19,0xCC,0x00,
// '~'
0x7E,0x05,0x07,0x03,0x00,0x08,
0x73,0xFE,0x70,

// Terminator
0xFF
};