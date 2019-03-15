// This comes with no warranty, implied or otherwise

// This data structure was designed to support Proportional fonts
// on Arduinos. It can however handle any ttf font that has been converted
// using the conversion program. These could be fixed width or proportional 
// fonts. Individual characters do not have to be multiples of 8 bits wide. 
// Any width is fine and does not need to be fixed.

// The data bits are packed to minimize data requirements, but the tradeoff
// is that a header is required per character.

// Gothic14.c
// Point Size   : 14
// Memory usage : 1254 bytes
// # characters : 95

// Header Format (to make Arduino UTFT Compatible):
// ------------------------------------------------
// Character Width (Used as a marker to indicate use this format. i.e.: = 0x00)
// Character Height
// First Character (Reserved. 0x00)
// Number Of Characters (Reserved. 0x00)

#include <avr/pgmspace.h>

const uint8_t Gothic14[] PROGMEM = 
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
0x20,0x0B,0x00,0x00,0x00,0x04,

// '!'
0x21,0x01,0x01,0x0A,0x01,0x04,
0xFE,0xC0,
// '"'
0x22,0x01,0x03,0x03,0x00,0x04,
0xB6,0x80,
// '#'
0x23,0x01,0x07,0x0A,0x01,0x0A,
0x14,0x28,0x07,0xF2,0x85,0x3F,0xA8,0x50,0xA0,
// '$'
0x24,0x00,0x07,0x0D,0x00,0x08,
0x10,0x71,0x52,0x87,0x06,0x07,0x09,0x13,0x25,0xF0,0x81,0x00,
// '%'
0x25,0x01,0x0A,0x0A,0x00,0x0B,
0x7F,0xA2,0x48,0xA2,0x28,0x74,0x02,0xE1,0x44,0x51,0x24,0x50,0xE0,
// '&'
0x26,0x01,0x09,0x0A,0x01,0x0B,
0x38,0x22,0x11,0x07,0x03,0x02,0x42,0x15,0x04,0x85,0x3C,0x40,
// '''
0x27,0x01,0x01,0x03,0x01,0x03,
0xE0,
// '('
0x28,0x01,0x02,0x0D,0x02,0x05,
0x5A,0xAA,0xA9,0x40,
// ')'
0x29,0x01,0x02,0x0D,0x01,0x05,
0xA5,0x55,0x56,0x80,
// '*'
0x2A,0x01,0x05,0x04,0x00,0x06,
0x21,0x9C,0x40,
// '+'
0x2B,0x02,0x07,0x07,0x01,0x09,
0x10,0x20,0x47,0xF1,0x02,0x04,0x00,
// ','
0x2C,0x09,0x02,0x03,0x01,0x04,
0x68,
// '-'
0x2D,0x07,0x04,0x01,0x00,0x05,
0xF0,
// '.'
0x2E,0x09,0x02,0x02,0x01,0x04,
0xF0,
// '/'
0x2F,0x01,0x05,0x0B,0x01,0x06,
0x08,0x84,0x22,0x10,0x88,0x42,0x20,
// '0'
0x30,0x01,0x07,0x0A,0x00,0x08,
0x38,0x8A,0x0C,0x18,0x30,0x60,0xC1,0x44,0x70,
// '1'
0x31,0x01,0x03,0x0A,0x02,0x08,
0xE4,0x92,0x49,0x24,
// '2'
0x32,0x01,0x07,0x0A,0x00,0x08,
0x3C,0x86,0x08,0x10,0x41,0x00,0x00,0x01,0xFC,
// '3'
0x33,0x01,0x07,0x0A,0x00,0x08,
0x3C,0x86,0x08,0x11,0xC0,0x40,0xC1,0x02,0x78,
// '4'
0x34,0x01,0x07,0x0A,0x00,0x08,
0x04,0x08,0x30,0xA1,0x44,0x91,0x7F,0x04,0x08,
// '5'
0x35,0x01,0x07,0x0A,0x00,0x08,
0x3E,0x41,0x03,0xE4,0x20,0x40,0xC1,0x42,0x78,
// '6'
0x36,0x01,0x06,0x0A,0x01,0x08,
0x08,0x42,0x08,0x7B,0x18,0x61,0x85,0xE0,
// '7'
0x37,0x01,0x06,0x0A,0x01,0x08,
0xFC,0x20,0x84,0x10,0x82,0x10,0x42,0x00,
// '8'
0x38,0x01,0x07,0x0A,0x00,0x08,
0x7D,0x06,0x0C,0x1F,0xF0,0x60,0xC1,0x82,0xF8,
// '9'
0x39,0x01,0x07,0x0A,0x00,0x08,
0x7D,0x06,0x0C,0x18,0x0F,0x82,0x08,0x20,0x00,
// ':'
0x3A,0x04,0x02,0x07,0x01,0x04,
0xF0,0x3C,
// ';'
0x3B,0x04,0x02,0x08,0x01,0x04,
0xF0,0x1A,
// '<'
0x3C,0x02,0x07,0x07,0x00,0x08,
0x02,0x19,0xC6,0x07,0x01,0x80,0x80,
// '='
0x3D,0x04,0x06,0x04,0x01,0x08,
0xFC,0x00,0x3F,
// '>'
0x3E,0x02,0x07,0x07,0x00,0x08,
0x80,0xC0,0x70,0x31,0xCC,0x20,0x00,
// '?'
0x3F,0x01,0x05,0x0A,0x01,0x08,
0x74,0x62,0x22,0x24,0xC0,0x31,0x80,
// '@'
0x40,0x01,0x0A,0x0A,0x01,0x0C,
0x1E,0x08,0x44,0x0A,0x39,0x92,0x68,0x9A,0x39,0xE4,0x20,0x47,0xE0,
// 'A'
0x41,0x01,0x09,0x0A,0x00,0x09,
0x08,0x0E,0x05,0x02,0x82,0x21,0x11,0xFC,0x82,0x41,0x40,0x40,
// 'B'
0x42,0x01,0x06,0x0A,0x01,0x08,
0xF2,0x28,0xA2,0xFA,0x18,0x61,0x87,0xE0,
// 'C'
0x43,0x01,0x09,0x0A,0x01,0x0B,
0x1E,0x10,0x90,0x30,0x08,0x04,0x02,0x00,0x81,0x21,0x0F,0x00,
// 'D'
0x44,0x01,0x08,0x0A,0x01,0x0A,
0xF8,0x84,0x82,0x81,0x81,0x81,0x81,0x82,0x84,0xF8,
// 'E'
0x45,0x01,0x06,0x0A,0x01,0x08,
0xFE,0x08,0x20,0xFE,0x08,0x20,0x83,0xF0,
// 'F'
0x46,0x01,0x05,0x0A,0x01,0x07,
0xFC,0x21,0x0F,0xC2,0x10,0x84,0x00,
// 'G'
0x47,0x01,0x0A,0x0A,0x01,0x0C,
0x1E,0x08,0x44,0x0A,0x00,0x80,0x20,0xF8,0x05,0x02,0x20,0x87,0xC0,
// 'H'
0x48,0x01,0x06,0x0A,0x02,0x0A,
0x86,0x18,0x61,0xFE,0x18,0x61,0x86,0x10,
// 'I'
0x49,0x01,0x01,0x0A,0x01,0x03,
0xFF,0xC0,
// 'J'
0x4A,0x01,0x05,0x0A,0x01,0x07,
0x08,0x42,0x10,0x84,0x21,0x8B,0x80,
// 'K'
0x4B,0x01,0x07,0x0A,0x01,0x08,
0x85,0x32,0x86,0x0C,0x14,0x24,0x48,0x89,0x08,
// 'L'
0x4C,0x01,0x05,0x0A,0x01,0x06,
0x84,0x21,0x08,0x42,0x10,0x87,0xC0,
// 'M'
0x4D,0x01,0x0B,0x0A,0x01,0x0D,
0x40,0x48,0x0B,0x83,0xD0,0x59,0x03,0x22,0x60,0x4C,0x51,0x8E,0x30,0x84,
// 'N'
0x4E,0x01,0x08,0x0A,0x01,0x0A,
0x81,0x81,0xC1,0xA1,0x91,0x89,0x85,0x83,0x83,0x81,
// 'O'
0x4F,0x01,0x0A,0x0A,0x01,0x0C,
0x1E,0x08,0x44,0x0A,0x01,0x80,0x60,0x18,0x05,0x02,0x21,0x07,0x80,
// 'P'
0x50,0x01,0x06,0x0A,0x01,0x08,
0xFA,0x18,0x61,0xFA,0x08,0x20,0x82,0x00,
// 'Q'
0x51,0x01,0x0A,0x0B,0x01,0x0C,
0x1E,0x08,0x44,0x0A,0x01,0x80,0x60,0x18,0x45,0x0A,0x23,0x07,0xA0,0x04,
// 'R'
0x52,0x01,0x07,0x0A,0x01,0x09,
0xFD,0x06,0x0C,0x1F,0xD4,0x24,0x44,0x85,0x04,
// 'S'
0x53,0x01,0x06,0x0A,0x00,0x07,
0x39,0x14,0x08,0x10,0x20,0x61,0x44,0xE0,
// 'T'
0x54,0x01,0x05,0x0A,0x00,0x05,
0xF9,0x08,0x42,0x10,0x84,0x21,0x00,
// 'U'
0x55,0x01,0x07,0x0A,0x01,0x09,
0x83,0x06,0x0C,0x18,0x30,0x60,0xC1,0x82,0xF8,
// 'V'
0x56,0x01,0x09,0x0A,0x00,0x09,
0x80,0xA0,0x90,0x48,0x22,0x21,0x10,0x50,0x28,0x1C,0x04,0x00,
// 'W'
0x57,0x01,0x0D,0x0A,0x01,0x0F,
0x82,0x0C,0x10,0x51,0x44,0x8A,0x24,0x51,0x14,0x50,0xA2,0x87,0x1C,0x10,0x40,0x82,0x00,
// 'X'
0x58,0x01,0x09,0x0A,0x00,0x09,
0x41,0x11,0x08,0x82,0x80,0x80,0x40,0x50,0x44,0x22,0x20,0x80,
// 'Y'
0x59,0x01,0x07,0x0A,0x00,0x07,
0x82,0x89,0x11,0x41,0x02,0x04,0x08,0x10,0x20,
// 'Z'
0x5A,0x01,0x06,0x0A,0x00,0x07,
0xFC,0x20,0x84,0x10,0x82,0x10,0x43,0xF0,
// '['
0x5B,0x01,0x02,0x0D,0x02,0x05,
0xEA,0xAA,0xAA,0xC0,
// '\'
0x5C,0x01,0x07,0x0B,0x00,0x08,
0x80,0x81,0x01,0x02,0x02,0x02,0x04,0x04,0x08,0x08,
// ']'
0x5D,0x01,0x02,0x0D,0x01,0x05,
0xD5,0x55,0x55,0xC0,
// '^'
0x5E,0x01,0x07,0x07,0x01,0x09,
0x10,0x70,0xA2,0x44,0x48,0xA0,0x80,
// '_'
0x5F,0x0C,0x07,0x01,0x00,0x07,
0xFE,
// '`'
0x60,0x00,0x03,0x02,0x00,0x05,
0x44,
// 'a'
0x61,0x04,0x08,0x07,0x01,0x0A,
0x3D,0x43,0x81,0x81,0x81,0x43,0x3D,
// 'b'
0x62,0x01,0x08,0x0A,0x01,0x0A,
0x80,0x80,0x80,0xBC,0xC2,0x81,0x81,0x81,0xC2,0xBC,
// 'c'
0x63,0x04,0x07,0x07,0x01,0x09,
0x3C,0x86,0x04,0x08,0x08,0x4F,0x00,
// 'd'
0x64,0x01,0x08,0x0A,0x01,0x0A,
0x01,0x01,0x01,0x3D,0x43,0x81,0x81,0x81,0x43,0x3D,
// 'e'
0x65,0x04,0x07,0x07,0x01,0x09,
0x38,0x8A,0x0F,0xF8,0x08,0x4F,0x00,
// 'f'
0x66,0x01,0x04,0x0A,0x00,0x04,
0x34,0x4F,0x44,0x44,0x44,
// 'g'
0x67,0x04,0x07,0x0A,0x01,0x09,
0x3A,0x8E,0x0C,0x18,0x28,0xCE,0x81,0x84,0xF0,
// 'h'
0x68,0x01,0x07,0x0A,0x01,0x09,
0x81,0x02,0x05,0xCC,0x50,0x60,0xC1,0x83,0x04,
// 'i'
0x69,0x01,0x01,0x0A,0x01,0x03,
0xDF,0xC0,
// 'j'
0x6A,0x01,0x02,0x0D,0x00,0x03,
0x51,0x55,0x55,0x80,
// 'k'
0x6B,0x01,0x06,0x0A,0x01,0x07,
0x82,0x08,0x22,0xB3,0x0C,0x28,0x92,0x20,
// 'l'
0x6C,0x01,0x01,0x0A,0x01,0x03,
0xFF,0xC0,
// 'm'
0x6D,0x04,0x0B,0x07,0x01,0x0D,
0xB9,0xD9,0xCE,0x10,0xC2,0x18,0x43,0x08,0x61,0x08,
// 'n'
0x6E,0x04,0x07,0x07,0x01,0x09,
0xB9,0x8A,0x0C,0x18,0x30,0x60,0x80,
// 'o'
0x6F,0x04,0x07,0x07,0x01,0x09,
0x38,0x8A,0x0C,0x18,0x28,0x8E,0x00,
// 'p'
0x70,0x04,0x08,0x0A,0x01,0x0A,
0xBC,0xC2,0x81,0x81,0x81,0xC2,0xBC,0x80,0x80,0x80,
// 'q'
0x71,0x04,0x08,0x0A,0x01,0x0A,
0x3D,0x43,0x81,0x81,0x81,0x43,0x3D,0x01,0x01,0x01,
// 'r'
0x72,0x04,0x03,0x07,0x01,0x04,
0xBA,0x49,0x20,
// 's'
0x73,0x04,0x04,0x07,0x00,0x05,
0x69,0x86,0x19,0x60,
// 't'
0x74,0x01,0x03,0x0A,0x01,0x05,
0x49,0x74,0x92,0x48,
// 'u'
0x75,0x04,0x07,0x07,0x01,0x09,
0x83,0x06,0x0C,0x18,0x28,0x8E,0x00,
// 'v'
0x76,0x04,0x07,0x07,0x00,0x08,
0x82,0x89,0x12,0x02,0x87,0x04,0x00,
// 'w'
0x77,0x04,0x0B,0x07,0x00,0x0C,
0x84,0x28,0x89,0x39,0x15,0x42,0xA8,0x73,0x04,0x40,
// 'x'
0x78,0x04,0x07,0x07,0x00,0x07,
0x82,0x88,0xA0,0x82,0x88,0xA0,0x80,
// 'y'
0x79,0x04,0x08,0x0A,0x00,0x08,
0x81,0x42,0x42,0x24,0x24,0x18,0x18,0x10,0x10,0x20,
// 'z'
0x7A,0x04,0x06,0x07,0x00,0x06,
0xFC,0x21,0x00,0x21,0x0F,0xC0,
// '{'
0x7B,0x01,0x03,0x0D,0x01,0x05,
0x29,0x24,0xA2,0x49,0x22,
// '|'
0x7C,0x01,0x01,0x0D,0x04,0x09,
0xFF,0xF8,
// '}'
0x7D,0x01,0x03,0x0D,0x00,0x04,
0x89,0x24,0x8A,0x49,0x28,
// '~'
0x7E,0x05,0x06,0x02,0x01,0x08,
0x66,0x60,

// Terminator
0xFF
};