// This comes with no warranty, implied or otherwise

// This data structure was designed to support Proportional fonts
// on Arduinos. It can however handle any ttf font that has been converted
// using the conversion program. These could be fixed width or proportional 
// fonts. Individual characters do not have to be multiples of 8 bits wide. 
// Any width is fine and does not need to be fixed.

// The data bits are packed to minimize data requirements, but the tradeoff
// is that a header is required per character.

// Gothicb.c
// Point Size   : 38
// Memory usage : 5724 bytes
// # characters : 95

// Header Format (to make Arduino UTFT Compatible):
// ------------------------------------------------
// Character Width (Used as a marker to indicate use this format. i.e.: = 0x00)
// Character Height
// First Character (Reserved. 0x00)
// Number Of Characters (Reserved. 0x00)

#include <avr/pgmspace.h>

const uint8_t Gothicb38[] PROGMEM = 
{
0x00, 0x22, 0x00, 0x00,

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
0x20,0x1F,0x00,0x00,0x00,0x0B,

// '!'
0x21,0x03,0x06,0x1C,0x02,0x0B,
0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x00,0x07,0xBF,0xFF,0xFF,0xDE,
// '"'
0x22,0x03,0x0D,0x09,0x01,0x0E,
0xF8,0xFF,0xC7,0xFE,0x3F,0xF1,0xFF,0x0F,0x38,0x39,0xC1,0xCE,0x0E,0x70,0x70,
// '#'
0x23,0x03,0x15,0x1C,0x01,0x17,
0x01,0xE3,0xC0,0x0F,0x1E,0x00,0x78,0xF0,0x07,0xCF,0x80,0x3C,0x78,0x01,0xE3,0xC0,0x0F,0x1E,0x00,0x78,0xF0,0x7F,0xFF,0xFB,0xFF,0xFF,0xDF,0xFF,0xFE,0xFF,0xFF,0xF0,0x78,0xF0,0x03,0xC7,0x80,0x1E,0x3C,0x1F,0xFF,0xFE,0xFF,0xFF,0xF7,0xFF,0xFF,0xBF,0xFF,0xFC,0x1E,0x3C,0x00,0xF1,0xE0,0x07,0x8F,0x00,0x3C,0x78,0x01,0xE3,0xC0,0x1E,0x3E,0x00,0xF1,0xE0,0x07,0x8F,0x00,0x3C,0x78,0x00,
// '$'
0x24,0x02,0x12,0x22,0x01,0x15,
0x00,0xE0,0x00,0x38,0x00,0x7F,0x80,0x3F,0xF8,0x1F,0xFF,0x0F,0xFF,0xE7,0xFF,0xF1,0xF8,0x78,0x7C,0x04,0x1F,0x00,0x07,0xE0,0x00,0xFC,0x00,0x3F,0xC0,0x07,0xFC,0x00,0x7F,0xC0,0x07,0xFC,0x00,0x7F,0x00,0x07,0xE0,0x00,0xFC,0x00,0x1F,0x10,0x07,0xCE,0x01,0xF7,0xC0,0xFF,0xF8,0x7F,0x7F,0xFF,0x9F,0xFF,0xE1,0xFF,0xF0,0x3F,0xF8,0x03,0xF8,0x00,0x38,0x00,0x0E,0x00,0x03,0x80,0x00,0xE0,0x00,0x38,0x00,
// '%'
0x25,0x03,0x1F,0x1D,0x01,0x21,
0x0F,0x80,0x01,0xF0,0x7F,0xE0,0x1F,0xC1,0xFF,0xFF,0xFF,0x03,0xC7,0xFF,0xFE,0x0F,0x07,0xFE,0x78,0x1C,0x07,0x00,0xE0,0x38,0x0E,0x03,0x80,0x70,0x1C,0x0F,0x00,0xF0,0x78,0x3C,0x00,0xF1,0xE0,0x70,0x01,0xFF,0xC1,0xC0,0x01,0xFF,0x07,0x80,0x00,0xF8,0x1E,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0xE0,0x00,0x00,0x03,0xC1,0xF0,0x00,0x0F,0x0F,0xF8,0x00,0x1C,0x3F,0xF8,0x00,0x70,0x78,0xF0,0x01,0xE1,0xE0,0xF0,0x07,0x83,0x80,0xE0,0x0E,0x07,0x01,0xC0,0x38,0x0E,0x03,0x80,0xF0,0x1E,0x0F,0x03,0xC0,0x1E,0x3C,0x0F,0x00,0x3F,0xF8,0x1C,0x00,0x3F,0xE0,0x78,0x00,0x1F,0x01,0xE0,0x00,0x00,0x00,
// '&'
0x26,0x05,0x17,0x1A,0x02,0x1A,
0x03,0xE0,0x00,0x1F,0xF0,0x00,0x7F,0xF0,0x00,0xFF,0xE0,0x03,0xFF,0xE0,0x07,0xC7,0xC0,0x0F,0x8F,0x80,0x1F,0x1F,0x00,0x1F,0x7C,0x00,0x3F,0xF8,0x00,0x3F,0xE0,0x00,0x3F,0x80,0x00,0xFE,0x00,0x03,0xFC,0x00,0x0F,0xFC,0x00,0x3F,0xFC,0x30,0x7C,0xFC,0xE1,0xF8,0xFF,0xE3,0xE0,0xFF,0xE7,0xC0,0xFF,0x0F,0xC1,0xFC,0x1F,0xFF,0xF8,0x1F,0xFF,0xF8,0x3F,0xFF,0xF8,0x3F,0xFD,0xF8,0x1F,0xC1,0xF8,
// '''
0x27,0x03,0x05,0x09,0x01,0x08,
0xFF,0xFF,0xFF,0x39,0xCE,0x70,
// '('
0x28,0x03,0x0B,0x23,0x02,0x0E,
0x07,0xE1,0xF8,0x3E,0x0F,0xC1,0xF0,0x7C,0x0F,0x83,0xF0,0x7C,0x0F,0x81,0xF0,0x7E,0x0F,0x81,0xF0,0x3E,0x07,0xC0,0xF8,0x1F,0x03,0xE0,0x7C,0x0F,0x81,0xF0,0x3E,0x07,0xE0,0x7C,0x0F,0x81,0xF0,0x3F,0x03,0xE0,0x7C,0x07,0xC0,0xFC,0x0F,0x81,0xF8,0x1F,0x80,
// ')'
0x29,0x03,0x0B,0x23,0x01,0x0E,
0xFC,0x0F,0xC0,0xF8,0x1F,0x81,0xF0,0x3F,0x03,0xE0,0x7E,0x07,0xC0,0xF8,0x1F,0x03,0xF0,0x3E,0x07,0xC0,0xF8,0x1F,0x03,0xE0,0x7C,0x0F,0x81,0xF0,0x3E,0x07,0xC0,0xF8,0x3F,0x07,0xC0,0xF8,0x1F,0x07,0xE0,0xF8,0x1F,0x07,0xC1,0xF8,0x3E,0x0F,0xC3,0xF0,0x00,
// '*'
0x2A,0x03,0x10,0x0D,0x01,0x11,
0x03,0xC0,0x03,0xC0,0x31,0xCC,0x79,0x9E,0xFF,0xFF,0x3F,0xFC,0x07,0xE0,0x3F,0xFC,0xFF,0xFF,0x79,0x9E,0x31,0xCC,0x03,0xC0,0x03,0xC0,
// '+'
0x2B,0x08,0x13,0x13,0x02,0x17,
0x01,0xF0,0x00,0x3E,0x00,0x07,0xC0,0x00,0xF8,0x00,0x1F,0x00,0x03,0xE0,0x00,0x7C,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x1F,0x00,0x03,0xE0,0x00,0x7C,0x00,0x0F,0x80,0x01,0xF0,0x00,0x3E,0x00,0x07,0xC0,0x00,
// ','
0x2C,0x1A,0x08,0x0A,0x01,0x0B,
0x00,0x0E,0x1F,0x1E,0x3E,0x3C,0x78,0x78,0x70,0x20,
// '-'
0x2D,0x12,0x09,0x05,0x03,0x10,
0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,
// '.'
0x2E,0x19,0x06,0x06,0x02,0x0B,
0x7B,0xFF,0xFF,0xFD,0xE0,
// '/'
0x2F,0x03,0x10,0x21,0x01,0x11,
0x00,0x0E,0x00,0x0E,0x00,0x1E,0x00,0x1C,0x00,0x1C,0x00,0x3C,0x00,0x38,0x00,0x38,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0xE0,0x00,0xE0,0x01,0xE0,0x01,0xC0,0x01,0xC0,0x03,0xC0,0x03,0x80,0x03,0x80,0x07,0x00,0x07,0x00,0x07,0x00,0x0E,0x00,0x0E,0x00,0x1E,0x00,0x1C,0x00,0x1C,0x00,0x3C,0x00,0x38,0x00,0x38,0x00,0x70,0x00,0x70,0x00,0x70,0x00,
// '0'
0x30,0x04,0x13,0x1B,0x01,0x15,
0x03,0xF8,0x01,0xFF,0xC0,0x7F,0xFC,0x1F,0xFF,0xC3,0xFF,0xF8,0xFE,0x3F,0x9F,0x03,0xF3,0xE0,0x3E,0xFC,0x07,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xFF,0x80,0x3F,0xF0,0x07,0xFE,0x00,0xFF,0xC0,0x1F,0xF8,0x03,0xFF,0x00,0x7F,0xF0,0x1F,0xBE,0x03,0xE7,0xE0,0xFC,0xFE,0x3F,0x8F,0xFF,0xE1,0xFF,0xFC,0x1F,0xFF,0x01,0xFF,0xC0,0x0F,0xE0,0x00,
// '1'
0x31,0x04,0x0A,0x1B,0x03,0x15,
0x1F,0xCF,0xF7,0xFD,0xFF,0xFF,0xC1,0xF0,0x7C,0x1F,0x07,0xC1,0xF0,0x7C,0x1F,0x07,0xC1,0xF0,0x7C,0x1F,0x07,0xC1,0xF0,0x7C,0x1F,0x07,0xC1,0xF0,0x7C,0x1F,0x07,0xC1,0xF0,0x7C,
// '2'
0x32,0x04,0x12,0x1B,0x01,0x15,
0x01,0xF8,0x01,0xFF,0x80,0xFF,0xF0,0x7F,0xFE,0x3F,0xFF,0x8F,0xC7,0xF3,0xE0,0xFD,0xF8,0x1F,0x7C,0x07,0xDF,0x01,0xF0,0x00,0x7C,0x00,0x3E,0x00,0x0F,0x80,0x07,0xC0,0x03,0xF0,0x01,0xF8,0x00,0xFC,0x00,0x7E,0x00,0x3F,0x00,0x1F,0x80,0x0F,0xC0,0x07,0xE0,0x03,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,
// '3'
0x33,0x04,0x13,0x1B,0x01,0x15,
0x01,0xF8,0x01,0xFF,0xC0,0x7F,0xFC,0x1F,0xFF,0xC3,0xFF,0xF8,0xFE,0x1F,0x9F,0x01,0xF0,0x00,0x3E,0x00,0x0F,0xC0,0x03,0xF0,0x07,0xFC,0x00,0xFF,0x00,0x1F,0xE0,0x03,0xFE,0x00,0x7F,0xE0,0x00,0xFE,0x00,0x07,0xE0,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xFF,0xC0,0x7E,0xFC,0x1F,0x9F,0xFF,0xF1,0xFF,0xFC,0x1F,0xFF,0x01,0xFF,0xC0,0x0F,0xE0,0x00,
// '4'
0x34,0x04,0x13,0x1B,0x01,0x15,
0x00,0x1F,0x80,0x03,0xF0,0x00,0xFE,0x00,0x3F,0xC0,0x0F,0xF8,0x01,0xFF,0x00,0x7F,0xE0,0x1F,0xFC,0x07,0xEF,0x80,0xFD,0xF0,0x3F,0x3E,0x0F,0xC7,0xC3,0xF0,0xF8,0x7E,0x1F,0x1F,0x83,0xE7,0xE0,0x7C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x1F,0x00,0x03,0xE0,0x00,0x7C,0x00,0x0F,0x80,0x01,0xF0,0x00,0x3E,0x00,
// '5'
0x35,0x04,0x12,0x1B,0x01,0x15,
0x07,0xFF,0xC1,0xFF,0xF0,0x7F,0xFC,0x3F,0xFF,0x0F,0xFF,0xC3,0xE0,0x00,0xF0,0x00,0x3C,0x00,0x1F,0x00,0x07,0xFC,0x01,0xFF,0xC0,0x7F,0xFC,0x3F,0xFF,0x0F,0xFF,0xE3,0xF1,0xF8,0x10,0x3F,0x00,0x07,0xC0,0x01,0xF0,0x00,0x7C,0x00,0x1F,0xF8,0x0F,0xFF,0x87,0xE7,0xFF,0xF8,0xFF,0xFC,0x3F,0xFE,0x03,0xFF,0x00,0x3F,0x00,
// '6'
0x36,0x04,0x11,0x1B,0x02,0x15,
0x00,0x40,0x00,0x78,0x00,0x3E,0x00,0x3F,0x00,0x1F,0x00,0x1F,0x80,0x0F,0x80,0x0F,0xC0,0x07,0xC0,0x07,0xE0,0x03,0xE0,0x03,0xFE,0x01,0xFF,0xC1,0xFF,0xF1,0xFF,0xFC,0xFF,0xFE,0x7E,0x3F,0xFC,0x07,0xFE,0x03,0xFF,0x01,0xFF,0x80,0xFF,0xF1,0xFD,0xFF,0xFC,0xFF,0xFE,0x3F,0xFE,0x07,0xFC,0x00,0xFC,0x00,
// '7'
0x37,0x04,0x12,0x1B,0x02,0x15,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x07,0xE0,0x01,0xF0,0x00,0xFC,0x00,0x3E,0x00,0x1F,0x80,0x07,0xC0,0x03,0xF0,0x00,0xF8,0x00,0x7E,0x00,0x1F,0x00,0x0F,0x80,0x03,0xE0,0x01,0xF0,0x00,0xFC,0x00,0x3E,0x00,0x1F,0x80,0x07,0xC0,0x03,0xF0,0x00,0xF8,0x00,0x7E,0x00,0x0F,0x00,0x00,0x40,0x00,
// '8'
0x38,0x04,0x13,0x1B,0x01,0x15,
0x03,0xF8,0x01,0xFF,0xC0,0x7F,0xFC,0x1F,0xFF,0xC3,0xFF,0xF8,0xFC,0x1F,0x9F,0x01,0xF3,0xE0,0x3E,0x7C,0x07,0xC7,0xC1,0xF0,0xFF,0xFE,0x0F,0xFF,0x81,0xFF,0xF0,0x7F,0xFF,0x1F,0xFF,0xF3,0xF0,0x7E,0xFC,0x07,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xFF,0xC0,0x7F,0xFC,0x1F,0xDF,0xFF,0xF3,0xFF,0xFE,0x3F,0xFF,0x83,0xFF,0xC0,0x0F,0xE0,0x00,
// '9'
0x39,0x04,0x11,0x1B,0x02,0x15,
0x03,0xE0,0x07,0xFC,0x0F,0xFF,0x8F,0xFF,0xE7,0xFF,0xF7,0xF1,0xFF,0xE0,0x7F,0xF0,0x1F,0xF8,0x0F,0xFC,0x07,0xFF,0x8F,0xCF,0xFF,0xE7,0xFF,0xF1,0xFF,0xF0,0x7F,0xF0,0x0F,0xF8,0x00,0xF8,0x00,0xFC,0x00,0x7C,0x00,0x7E,0x00,0x3E,0x00,0x3F,0x00,0x1F,0x00,0x1F,0x80,0x0F,0x80,0x03,0xC0,0x00,0x40,0x00,
// ':'
0x3A,0x0B,0x06,0x14,0x02,0x0B,
0x7B,0xFF,0xFF,0xFD,0xE0,0x00,0x00,0x00,0x00,0x00,0x07,0xBF,0xFF,0xFF,0xDE,
// ';'
0x3B,0x0B,0x08,0x19,0x01,0x0B,
0x3C,0x7E,0x7E,0x7E,0x7E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1F,0x1E,0x3E,0x3C,0x78,0x78,0x70,0x20,
// '<'
0x3C,0x06,0x13,0x17,0x02,0x17,
0x00,0x00,0x00,0x00,0x0C,0x00,0x07,0x80,0x03,0xF0,0x01,0xFE,0x00,0xFF,0x80,0x7F,0xC0,0x3F,0xE0,0x1F,0xF0,0x0F,0xF8,0x03,0xFC,0x00,0x7E,0x00,0x0F,0xF0,0x00,0xFF,0x80,0x07,0xFC,0x00,0x3F,0xE0,0x01,0xFF,0x00,0x0F,0xF8,0x00,0x7F,0x80,0x03,0xF0,0x00,0x1E,0x00,0x00,0xC0,0x00,0x00,
// '='
0x3D,0x0B,0x13,0x0D,0x02,0x17,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
// '>'
0x3E,0x06,0x13,0x17,0x02,0x17,
0x00,0x00,0x18,0x00,0x03,0xC0,0x00,0x7E,0x00,0x0F,0xF0,0x00,0xFF,0x80,0x07,0xFC,0x00,0x3F,0xE0,0x01,0xFF,0x00,0x0F,0xF8,0x00,0x7F,0x80,0x03,0xF0,0x01,0xFE,0x00,0xFF,0x80,0x7F,0xC0,0x3F,0xE0,0x1F,0xF0,0x0F,0xF8,0x03,0xFC,0x00,0x7E,0x00,0x0F,0x00,0x01,0x80,0x00,0x00,0x00,0x00,
// '?'
0x3F,0x03,0x11,0x1C,0x02,0x15,
0x03,0xF0,0x07,0xFE,0x07,0xFF,0x87,0xFF,0xE7,0xFF,0xF3,0xF0,0xFF,0xF0,0x3F,0xF0,0x1F,0xF8,0x0F,0x80,0x0F,0xC0,0x0F,0xC0,0x0F,0xE0,0x0F,0xE0,0x07,0xE0,0x07,0xE0,0x03,0xE0,0x03,0xF0,0x01,0xF0,0x00,0xF8,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x07,0xE0,0x03,0xF0,0x01,0xF8,0x00,0xFC,0x00,0x3C,0x00,
// '@'
0x40,0x03,0x1C,0x1C,0x00,0x1C,
0x00,0x1F,0xC0,0x00,0x0F,0xFF,0x80,0x03,0xFF,0xFE,0x00,0x7E,0x03,0xF0,0x0F,0x00,0x0F,0x81,0xE0,0x00,0x3C,0x3C,0x00,0x01,0xE3,0x81,0xF1,0xEE,0x70,0x7F,0xDC,0xF7,0x0F,0xFF,0xC7,0xF0,0xFF,0xFC,0x7E,0x1F,0x87,0xC7,0xE1,0xF0,0x3C,0x7E,0x3E,0x03,0xC7,0xE3,0xE0,0x3C,0x7E,0x3E,0x03,0x8E,0xE3,0xE0,0x78,0xEF,0x3F,0x0F,0x9C,0x71,0xFF,0xF9,0xC7,0x1F,0xFF,0xF8,0x38,0xFF,0x7E,0x03,0xC3,0xE3,0x80,0x1E,0x00,0x03,0xC0,0xF8,0x00,0xF8,0x07,0xE0,0x3F,0x00,0x3F,0xFF,0xE0,0x00,0xFF,0xF8,0x00,0x01,0xFC,0x00,
// 'A'
0x41,0x04,0x1B,0x1B,0x00,0x1C,
0x00,0x1F,0x00,0x00,0x07,0xF0,0x00,0x00,0xFE,0x00,0x00,0x1F,0xC0,0x00,0x07,0xFC,0x00,0x00,0xFF,0x80,0x00,0x3F,0xF8,0x00,0x07,0xFF,0x00,0x00,0xFB,0xE0,0x00,0x3F,0x7E,0x00,0x07,0xC7,0xC0,0x01,0xF8,0xFC,0x00,0x3E,0x0F,0x80,0x07,0xC1,0xF0,0x01,0xF8,0x3F,0x00,0x3E,0x03,0xE0,0x07,0xFF,0xFC,0x01,0xFF,0xFF,0xC0,0x3F,0xFF,0xF8,0x0F,0xFF,0xFF,0x81,0xFF,0xFF,0xF0,0x3E,0x00,0x3E,0x0F,0xC0,0x07,0xE1,0xF0,0x00,0x7C,0x7E,0x00,0x0F,0xCF,0x80,0x00,0xF9,0xF0,0x00,0x1F,0x00,
// 'B'
0x42,0x04,0x11,0x1B,0x03,0x16,
0xFF,0xC0,0x7F,0xF8,0x3F,0xFE,0x1F,0xFF,0x8F,0xFF,0xC7,0xC3,0xF3,0xE0,0xF9,0xF0,0x7C,0xF8,0x3E,0x7C,0x1F,0x3E,0x3F,0x1F,0xFF,0x0F,0xFF,0x87,0xFF,0xE3,0xFF,0xF9,0xFF,0xFE,0xF8,0x3F,0x7C,0x0F,0xFE,0x03,0xFF,0x01,0xFF,0x80,0xFF,0xC1,0xFF,0xFF,0xFD,0xFF,0xFE,0xFF,0xFE,0x7F,0xFE,0x3F,0xFC,0x00,
// 'C'
0x43,0x04,0x1A,0x1B,0x02,0x1E,
0x00,0x3F,0xC0,0x00,0x3F,0xFE,0x00,0x3F,0xFF,0xE0,0x1F,0xFF,0xFC,0x1F,0xFF,0xFF,0x87,0xF8,0x1F,0xF3,0xF8,0x00,0xF9,0xFC,0x00,0x1C,0x7E,0x00,0x00,0x1F,0x00,0x00,0x0F,0xC0,0x00,0x03,0xE0,0x00,0x00,0xF8,0x00,0x00,0x3E,0x00,0x00,0x0F,0x80,0x00,0x03,0xE0,0x00,0x00,0xFC,0x00,0x00,0x1F,0x00,0x00,0x07,0xE0,0x00,0x01,0xFC,0x00,0x18,0x3F,0x80,0x0F,0x07,0xF8,0x1F,0xE1,0xFF,0xFF,0xF8,0x3F,0xFF,0xFC,0x03,0xFF,0xFE,0x00,0x7F,0xFE,0x00,0x03,0xFC,0x00,
// 'D'
0x44,0x04,0x16,0x1B,0x03,0x1B,
0xFF,0xF0,0x03,0xFF,0xF8,0x0F,0xFF,0xF8,0x3F,0xFF,0xF0,0xFF,0xFF,0xE3,0xE0,0x7F,0xCF,0x80,0x7F,0x3E,0x00,0x7E,0xF8,0x00,0xFB,0xE0,0x03,0xEF,0x80,0x0F,0xFE,0x00,0x1F,0xF8,0x00,0x7F,0xE0,0x01,0xFF,0x80,0x07,0xFE,0x00,0x1F,0xF8,0x00,0x7F,0xE0,0x03,0xFF,0x80,0x0F,0xBE,0x00,0x7E,0xF8,0x03,0xF3,0xE0,0x3F,0xCF,0xFF,0xFE,0x3F,0xFF,0xF0,0xFF,0xFF,0x83,0xFF,0xFC,0x0F,0xFF,0x80,0x00,
// 'E'
0x45,0x04,0x0F,0x1B,0x03,0x14,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0xF8,0x01,0xF0,0x03,0xE0,0x07,0xC0,0x0F,0x80,0x1F,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,
// 'F'
0x46,0x04,0x0D,0x1B,0x03,0x12,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x3E,0x00,
// 'G'
0x47,0x04,0x1C,0x1B,0x02,0x20,
0x00,0x3F,0xE0,0x00,0x0F,0xFF,0xC0,0x03,0xFF,0xFE,0x00,0x7F,0xFF,0xF8,0x0F,0xFF,0xFF,0xC1,0xFE,0x03,0xF8,0x3F,0x80,0x0F,0x07,0xF0,0x00,0x60,0x7E,0x00,0x00,0x07,0xC0,0x00,0x00,0xFC,0x00,0x00,0x0F,0x80,0x00,0x00,0xF8,0x00,0x00,0x0F,0x80,0x3F,0xFF,0xF8,0x03,0xFF,0xFF,0x80,0x3F,0xFF,0xFC,0x03,0xFF,0xF7,0xC0,0x3F,0xFF,0x7E,0x00,0x03,0xE7,0xF0,0x00,0x7E,0x3F,0x80,0x0F,0xC1,0xFE,0x03,0xFC,0x0F,0xFF,0xFF,0x80,0x7F,0xFF,0xF0,0x03,0xFF,0xFE,0x00,0x0F,0xFF,0x80,0x00,0x3F,0xE0,0x00,
// 'H'
0x48,0x04,0x14,0x1B,0x03,0x1A,
0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xF0,
// 'I'
0x49,0x04,0x05,0x1B,0x03,0x0B,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
// 'J'
0x4A,0x04,0x0E,0x1B,0x01,0x12,
0x00,0x7C,0x01,0xF0,0x07,0xC0,0x1F,0x00,0x7C,0x01,0xF0,0x07,0xC0,0x1F,0x00,0x7C,0x01,0xF0,0x07,0xC0,0x1F,0x00,0x7C,0x01,0xF0,0x07,0xC0,0x1F,0x00,0x7C,0x01,0xF0,0x07,0xC0,0x1F,0x10,0x7C,0xF3,0xF7,0xFF,0xFF,0xFE,0x7F,0xF8,0x7F,0xC0,0x7C,0x00,
// 'K'
0x4B,0x04,0x15,0x1B,0x03,0x18,
0xF8,0x07,0xE7,0xC0,0x7E,0x3E,0x07,0xE1,0xF0,0x3F,0x0F,0x83,0xF0,0x7C,0x3F,0x03,0xE3,0xF0,0x1F,0x1F,0x00,0xF9,0xF8,0x07,0xDF,0x80,0x3F,0xF8,0x01,0xFF,0x80,0x0F,0xFC,0x00,0x7F,0xE0,0x03,0xFF,0x80,0x1F,0x7E,0x00,0xFB,0xF0,0x07,0xCF,0xC0,0x3E,0x3F,0x01,0xF0,0xFC,0x0F,0x87,0xF0,0x7C,0x1F,0x83,0xE0,0x7E,0x1F,0x01,0xF8,0xF8,0x07,0xE7,0xC0,0x3F,0x3E,0x00,0xFC,
// 'L'
0x4C,0x04,0x0D,0x1B,0x03,0x11,
0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
// 'M'
0x4D,0x04,0x1F,0x1B,0x01,0x22,
0x0F,0xC0,0x07,0xE0,0x1F,0x80,0x0F,0xC0,0x3F,0x00,0x1F,0x80,0xFF,0x00,0x7F,0x81,0xFE,0x00,0xFF,0x03,0xFC,0x01,0xFE,0x07,0xFC,0x07,0xFC,0x0F,0xF8,0x0F,0xF8,0x1F,0xF0,0x1F,0xF0,0x3F,0xE0,0x3F,0xE0,0xFF,0xE0,0xFF,0xE1,0xF7,0xC1,0xF7,0xC3,0xEF,0x83,0xEF,0x87,0xCF,0x8F,0x9F,0x0F,0x9F,0x1F,0x3E,0x1F,0x3E,0x3E,0x7C,0x3E,0x3E,0xF8,0xF8,0xF8,0x7D,0xF0,0xF9,0xF0,0xFF,0xE1,0xF3,0xE0,0xFF,0x83,0xE7,0xC1,0xFF,0x07,0xCF,0x83,0xFE,0x0F,0x9F,0x03,0xF8,0x1F,0x3E,0x07,0xF0,0x3E,0xF8,0x0F,0xE0,0x3F,0xF0,0x0F,0x80,0x7F,0xE0,0x1F,0x00,0xF8,
// 'N'
0x4E,0x04,0x16,0x1B,0x03,0x1C,
0xF8,0x00,0x7F,0xF0,0x01,0xFF,0xC0,0x07,0xFF,0x80,0x1F,0xFF,0x00,0x7F,0xFC,0x01,0xFF,0xF8,0x07,0xFF,0xF0,0x1F,0xFF,0xC0,0x7F,0xFF,0x81,0xFF,0xBF,0x07,0xFE,0x7E,0x1F,0xF9,0xF8,0x7F,0xE3,0xF1,0xFF,0x87,0xE7,0xFE,0x1F,0x9F,0xF8,0x3F,0x7F,0xE0,0x7F,0xFF,0x80,0xFF,0xFE,0x03,0xFF,0xF8,0x07,0xFF,0xE0,0x0F,0xFF,0x80,0x3F,0xFE,0x00,0x7F,0xF8,0x00,0xFF,0xE0,0x03,0xFF,0x80,0x07,0xC0,
// 'O'
0x4F,0x04,0x1C,0x1B,0x02,0x20,
0x00,0x3F,0xC0,0x00,0x0F,0xFF,0x00,0x03,0xFF,0xFC,0x00,0x7F,0xFF,0xE0,0x0F,0xFF,0xFF,0x01,0xFE,0x07,0xF8,0x3F,0x80,0x1F,0xC7,0xF0,0x00,0xFE,0x7E,0x00,0x07,0xE7,0xC0,0x00,0x3E,0xFC,0x00,0x03,0xFF,0x80,0x00,0x1F,0xF8,0x00,0x01,0xFF,0x80,0x00,0x1F,0xF8,0x00,0x01,0xFF,0x80,0x00,0x1F,0xFC,0x00,0x03,0xF7,0xC0,0x00,0x3E,0x7E,0x00,0x07,0xE7,0xF0,0x00,0xFE,0x3F,0x80,0x1F,0xC1,0xFE,0x07,0xF8,0x0F,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,0x03,0xFF,0xFC,0x00,0x0F,0xFF,0x00,0x00,0x3F,0xC0,0x00,
// 'P'
0x50,0x04,0x10,0x1B,0x03,0x15,
0xFF,0xE0,0xFF,0xF8,0xFF,0xFC,0xFF,0xFE,0xFF,0xFE,0xF8,0x3F,0xF8,0x1F,0xF8,0x1F,0xF8,0x1F,0xF8,0x1F,0xF8,0x3F,0xFF,0xFE,0xFF,0xFE,0xFF,0xFC,0xFF,0xF8,0xFF,0xE0,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,
// 'Q'
0x51,0x04,0x1E,0x1C,0x02,0x20,
0x00,0x3F,0xC0,0x00,0x03,0xFF,0xC0,0x00,0x3F,0xFF,0xC0,0x01,0xFF,0xFF,0x80,0x0F,0xFF,0xFF,0x00,0x7F,0x81,0xFE,0x03,0xF8,0x01,0xFC,0x1F,0xC0,0x03,0xF8,0x7E,0x00,0x07,0xE1,0xF0,0x00,0x0F,0x8F,0xC0,0x00,0x3F,0x3E,0x00,0x00,0x7C,0xF8,0x00,0x01,0xF3,0xE0,0x00,0x07,0xCF,0x80,0x00,0x1F,0x3E,0x00,0x00,0x7C,0xFC,0x07,0xE1,0xF1,0xF0,0x0F,0xCF,0x87,0xE0,0x1F,0xFE,0x1F,0xC0,0x3F,0xF8,0x3F,0x80,0xFF,0xC0,0x7F,0x81,0xFF,0x00,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xE0,0x03,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0x80,0x03,0xFC,0x3F,0x00,0x00,0x00,0x7E,
// 'R'
0x52,0x04,0x13,0x1B,0x03,0x16,
0xFF,0xE0,0x1F,0xFF,0x83,0xFF,0xF8,0x7F,0xFF,0x8F,0xFF,0xF1,0xF0,0x7F,0x3E,0x03,0xE7,0xC0,0x7C,0xF8,0x0F,0x9F,0x01,0xF3,0xE0,0xFE,0x7F,0xFF,0x8F,0xFF,0xF1,0xFF,0xFC,0x3F,0xFF,0x07,0xFF,0x80,0xF9,0xF0,0x1F,0x3F,0x03,0xE3,0xF0,0x7C,0x3E,0x0F,0x87,0xE1,0xF0,0x7C,0x3E,0x0F,0xC7,0xC0,0xF8,0xF8,0x1F,0x9F,0x01,0xFB,0xE0,0x1F,0x00,
// 'S'
0x53,0x04,0x11,0x1B,0x01,0x14,
0x07,0xE0,0x07,0xFC,0x07,0xFF,0x07,0xFF,0xC7,0xFF,0xF3,0xF1,0xF1,0xF0,0x70,0xF8,0x10,0x7E,0x00,0x1F,0x80,0x07,0xF0,0x01,0xFC,0x00,0x7F,0x00,0x1F,0xC0,0x07,0xF0,0x00,0xFC,0x00,0x3F,0x00,0x0F,0xC2,0x03,0xE7,0x01,0xFF,0xC0,0xFF,0xF0,0xFD,0xFF,0xFC,0x7F,0xFE,0x1F,0xFE,0x07,0xFE,0x00,0xFC,0x00,
// 'T'
0x54,0x04,0x0F,0x1B,0x00,0x10,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xF8,0x01,0xF0,0x03,0xE0,0x07,0xC0,0x0F,0x80,0x1F,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0xE0,0x07,0xC0,0x0F,0x80,0x1F,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0xE0,0x07,0xC0,0x0F,0x80,0x1F,0x00,
// 'U'
0x55,0x04,0x12,0x1B,0x03,0x18,
0xF8,0x07,0xFE,0x01,0xFF,0x80,0x7F,0xE0,0x1F,0xF8,0x07,0xFE,0x01,0xFF,0x80,0x7F,0xE0,0x1F,0xF8,0x07,0xFE,0x01,0xFF,0x80,0x7F,0xE0,0x1F,0xF8,0x07,0xFE,0x01,0xFF,0x80,0x7F,0xE0,0x1F,0xF8,0x07,0xFE,0x01,0xFF,0x80,0x7F,0xE0,0x1F,0xFC,0x0F,0xDF,0x87,0xE7,0xFF,0xF8,0xFF,0xFC,0x3F,0xFE,0x03,0xFF,0x00,0x3F,0x00,
// 'V'
0x56,0x04,0x19,0x1B,0x01,0x1B,
0x7C,0x00,0x1F,0x3E,0x00,0x0F,0x9F,0x80,0x0F,0xC7,0xC0,0x07,0xC3,0xE0,0x03,0xE1,0xF8,0x03,0xF0,0x7C,0x01,0xF0,0x3E,0x00,0xF8,0x1F,0x80,0xF8,0x07,0xC0,0x7C,0x03,0xE0,0x3E,0x00,0xF8,0x3E,0x00,0x7C,0x1F,0x00,0x3E,0x0F,0x80,0x0F,0x8F,0x80,0x07,0xC7,0xC0,0x03,0xF7,0xE0,0x00,0xFB,0xE0,0x00,0x7F,0xF0,0x00,0x3F,0xF8,0x00,0x0F,0xF8,0x00,0x07,0xFC,0x00,0x03,0xFE,0x00,0x00,0xFE,0x00,0x00,0x7F,0x00,0x00,0x3F,0x00,0x00,0x0F,0x80,0x00,
// 'W'
0x57,0x04,0x21,0x1B,0x00,0x22,
0x7C,0x03,0xE0,0x1F,0x3E,0x01,0xF0,0x0F,0x9F,0x01,0xFC,0x07,0xCF,0x80,0xFE,0x03,0xE3,0xE0,0x7F,0x03,0xE1,0xF0,0x3F,0x81,0xF0,0xF8,0x3F,0xE0,0xF8,0x7C,0x1F,0xF0,0x7C,0x3F,0x0F,0xF8,0x7E,0x0F,0x87,0xFC,0x3E,0x07,0xC7,0xDF,0x1F,0x03,0xE3,0xEF,0x8F,0x81,0xF1,0xF7,0xC7,0xC0,0x7D,0xF1,0xF7,0xC0,0x3E,0xF8,0xFB,0xE0,0x1F,0x7C,0x7D,0xF0,0x0F,0xFE,0x3F,0xF8,0x07,0xFE,0x0F,0xFC,0x01,0xFF,0x07,0xFC,0x00,0xFF,0x83,0xFE,0x00,0x7F,0xC1,0xFF,0x00,0x3F,0xC0,0x7F,0x80,0x0F,0xE0,0x3F,0x80,0x07,0xF0,0x1F,0xC0,0x03,0xF8,0x0F,0xE0,0x01,0xF8,0x03,0xF0,0x00,0x7C,0x01,0xF8,0x00,
// 'X'
0x58,0x04,0x19,0x1B,0x00,0x1A,
0x7E,0x00,0x3F,0x1F,0x80,0x3F,0x07,0xC0,0x1F,0x03,0xF0,0x1F,0x80,0xFC,0x1F,0x80,0x3E,0x0F,0x80,0x1F,0x8F,0xC0,0x07,0xEF,0xC0,0x01,0xFF,0xC0,0x00,0xFF,0xE0,0x00,0x3F,0xE0,0x00,0x0F,0xE0,0x00,0x07,0xF0,0x00,0x03,0xF8,0x00,0x01,0xFC,0x00,0x01,0xFF,0x00,0x01,0xFF,0xC0,0x00,0xFF,0xE0,0x00,0xFD,0xF8,0x00,0xFC,0x7E,0x00,0x7E,0x3F,0x00,0x7E,0x0F,0xC0,0x7E,0x03,0xF0,0x3F,0x01,0xF8,0x3F,0x00,0x7E,0x3F,0x00,0x1F,0x9F,0x80,0x0F,0xC0,
// 'Y'
0x59,0x04,0x17,0x1B,0x00,0x18,
0x7C,0x00,0x7C,0xFC,0x01,0xF8,0xF8,0x03,0xE1,0xF8,0x0F,0xC1,0xF8,0x3F,0x01,0xF0,0x7C,0x03,0xF1,0xF8,0x03,0xE3,0xE0,0x07,0xEF,0xC0,0x07,0xFF,0x00,0x0F,0xFE,0x00,0x0F,0xF8,0x00,0x1F,0xF0,0x00,0x1F,0xC0,0x00,0x1F,0x00,0x00,0x3E,0x00,0x00,0x7C,0x00,0x00,0xF8,0x00,0x01,0xF0,0x00,0x03,0xE0,0x00,0x07,0xC0,0x00,0x0F,0x80,0x00,0x1F,0x00,0x00,0x3E,0x00,0x00,0x7C,0x00,0x00,0xF8,0x00,0x01,0xF0,0x00,
// 'Z'
0x5A,0x04,0x12,0x1B,0x01,0x13,
0x7F,0xFF,0xDF,0xFF,0xE7,0xFF,0xF9,0xFF,0xFC,0x7F,0xFF,0x00,0x0F,0x80,0x03,0xE0,0x01,0xF0,0x00,0x7C,0x00,0x3F,0x00,0x0F,0x80,0x07,0xE0,0x01,0xF0,0x00,0xFC,0x00,0x3E,0x00,0x1F,0x80,0x07,0xC0,0x03,0xF0,0x00,0xF8,0x00,0x3E,0x00,0x1F,0x00,0x07,0xC0,0x03,0xFF,0xF8,0xFF,0xFE,0x7F,0xFF,0x9F,0xFF,0xEF,0xFF,0xF8,
// '['
0x5B,0x03,0x08,0x23,0x03,0x0C,
0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,
// '\'
0x5C,0x03,0x10,0x21,0x04,0x18,
0x70,0x00,0x70,0x00,0x70,0x00,0x38,0x00,0x38,0x00,0x3C,0x00,0x1C,0x00,0x1C,0x00,0x1E,0x00,0x0E,0x00,0x0E,0x00,0x07,0x00,0x07,0x00,0x07,0x80,0x03,0x80,0x03,0x80,0x03,0xC0,0x01,0xC0,0x01,0xC0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x70,0x00,0x70,0x00,0x78,0x00,0x38,0x00,0x38,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x0F,
// ']'
0x5D,0x03,0x08,0x23,0x01,0x0C,
0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
// '^'
0x5E,0x04,0x13,0x15,0x02,0x17,
0x00,0xE0,0x00,0x3E,0x00,0x07,0xC0,0x00,0xF8,0x00,0x3F,0x80,0x07,0xF0,0x00,0xFE,0x00,0x3F,0xE0,0x07,0xBC,0x01,0xF7,0xC0,0x3C,0x78,0x07,0x8F,0x01,0xF1,0xF0,0x3C,0x1E,0x07,0x83,0xC1,0xF0,0x7C,0x3C,0x07,0x87,0x80,0xF1,0xF0,0x1F,0x3C,0x01,0xE7,0x80,0x3C,
// '_'
0x5F,0x22,0x13,0x02,0x00,0x13,
0xFF,0xFF,0xFF,0xFF,0xFC,
// '`'
0x60,0x00,0x0A,0x07,0x01,0x10,
0xFC,0x1F,0x83,0xE0,0x7C,0x0F,0x01,0xE0,0x3C,
// 'a'
0x61,0x0B,0x15,0x14,0x01,0x18,
0x01,0xF0,0xF8,0x7F,0xF7,0xC7,0xFF,0xFE,0x7F,0xFF,0xF7,0xFF,0xFF,0xBF,0x83,0xFD,0xF0,0x07,0xFF,0x80,0x3F,0xF8,0x00,0xFF,0xC0,0x07,0xFE,0x00,0x3F,0xF0,0x01,0xFF,0xC0,0x1F,0xBF,0x01,0xFD,0xFC,0x1F,0xE7,0xFF,0xFF,0x3F,0xFF,0xF8,0xFF,0xFF,0xC1,0xFF,0xBE,0x03,0xF1,0xF0,
// 'b'
0x62,0x03,0x15,0x1C,0x02,0x19,
0xF8,0x00,0x07,0xC0,0x00,0x3E,0x00,0x01,0xF0,0x00,0x0F,0x80,0x00,0x7C,0x00,0x03,0xE0,0x00,0x1F,0x00,0x00,0xF8,0x7C,0x07,0xCF,0xFC,0x3F,0xFF,0xF1,0xFF,0xFF,0xCF,0xFF,0xFF,0x7F,0x83,0xFB,0xF0,0x07,0xDF,0x80,0x3F,0xF8,0x00,0xFF,0xC0,0x07,0xFE,0x00,0x3F,0xF0,0x01,0xFF,0xC0,0x1F,0xFE,0x01,0xFB,0xFC,0x1F,0xDF,0xFF,0xFC,0xFF,0xFF,0xE7,0xFF,0xFE,0x3E,0xFF,0xC1,0xF1,0xF8,0x00,
// 'c'
0x63,0x0B,0x14,0x14,0x02,0x18,
0x01,0xFC,0x00,0x7F,0xF8,0x0F,0xFF,0xC1,0xFF,0xFE,0x3F,0xFF,0xF7,0xF0,0x3E,0x7E,0x01,0x8F,0xC0,0x00,0xF8,0x00,0x0F,0x80,0x00,0xF8,0x00,0x0F,0x80,0x00,0xFC,0x00,0x07,0xE0,0x08,0x7F,0x03,0xC3,0xFF,0xFF,0x3F,0xFF,0xE0,0xFF,0xFC,0x07,0xFF,0x80,0x1F,0xE0,
// 'd'
0x64,0x03,0x15,0x1C,0x02,0x19,
0x00,0x00,0xF8,0x00,0x07,0xC0,0x00,0x3E,0x00,0x01,0xF0,0x00,0x0F,0x80,0x00,0x7C,0x00,0x03,0xE0,0x00,0x1F,0x01,0xF0,0xF8,0x7F,0xE7,0xC7,0xFF,0xFE,0x7F,0xFF,0xF7,0xFF,0xFF,0xBF,0x83,0xFD,0xF0,0x07,0xFF,0x80,0x3F,0xF8,0x00,0xFF,0xC0,0x07,0xFE,0x00,0x3F,0xF0,0x01,0xFF,0xC0,0x1F,0xBF,0x01,0xFD,0xFC,0x1F,0xE7,0xFF,0xFF,0x3F,0xFF,0xF8,0xFF,0xFF,0xC1,0xFF,0xBE,0x03,0xF1,0xF0,
// 'e'
0x65,0x0B,0x14,0x14,0x02,0x18,
0x01,0xF8,0x00,0x7F,0xE0,0x1F,0xFF,0x83,0xFF,0xFC,0x3F,0xFF,0xC7,0xF0,0xFE,0x7C,0x03,0xEF,0x80,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x07,0xC0,0x00,0x7F,0x07,0x83,0xFF,0xFE,0x3F,0xFF,0xC1,0xFF,0xF8,0x07,0xFF,0x00,0x1F,0xC0,
// 'f'
0x66,0x03,0x0A,0x1C,0x01,0x0B,
0x0F,0x87,0xF3,0xFC,0xFF,0x3F,0xCF,0x83,0xE0,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0x83,0xE0,0xF8,0x3E,0x0F,0x83,0xE0,0xF8,0x3E,0x0F,0x83,0xE0,0xF8,0x3E,0x0F,0x83,0xE0,0xF8,
// 'g'
0x67,0x0B,0x16,0x1B,0x01,0x19,
0x01,0xF8,0x7C,0x1F,0xF9,0xF0,0xFF,0xFF,0xC7,0xFF,0xFF,0x3F,0xFF,0xFC,0xFE,0x0F,0xF3,0xE0,0x0F,0xDF,0x80,0x3F,0x7C,0x00,0x7D,0xF0,0x01,0xF7,0xC0,0x07,0xDF,0x00,0x1F,0x7E,0x00,0xFC,0xFC,0x03,0xF3,0xF8,0x3F,0xC7,0xFF,0xFF,0x1F,0xFF,0xFC,0x3F,0xFF,0xF0,0x3F,0xF7,0xC0,0x3F,0x1F,0x00,0x00,0xFD,0xFC,0x07,0xE3,0xFF,0xFF,0x8F,0xFF,0xFC,0x1F,0xFF,0xE0,0x1F,0xFF,0x00,0x1F,0xE0,0x00,
// 'h'
0x68,0x03,0x13,0x1C,0x02,0x17,
0xF8,0x00,0x1F,0x00,0x03,0xE0,0x00,0x7C,0x00,0x0F,0x80,0x01,0xF0,0x00,0x3E,0x00,0x07,0xC0,0x00,0xF8,0x7E,0x1F,0x3F,0xE3,0xFF,0xFF,0x7F,0xFF,0xEF,0xFF,0xFF,0xFE,0x1F,0xFF,0x01,0xFF,0xE0,0x1F,0xF8,0x03,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xFF,0x80,0x3F,0xF0,0x07,0xFE,0x00,0xFF,0xC0,0x1F,0xF8,0x03,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xF0,
// 'i'
0x69,0x03,0x05,0x1C,0x02,0x09,
0x77,0xFF,0xFF,0xB8,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
// 'j'
0x6A,0x03,0x09,0x23,0xFE,0x0A,
0x07,0x07,0xC3,0xE1,0xF0,0xF8,0x38,0x00,0x00,0x0F,0x87,0xC3,0xE1,0xF0,0xF8,0x7C,0x3E,0x1F,0x0F,0x87,0xC3,0xE1,0xF0,0xF8,0x7C,0x3E,0x1F,0x0F,0x87,0xC3,0xE1,0xF0,0xF8,0xFF,0xFF,0xFF,0xFF,0x7F,0x9F,0x00,
// 'k'
0x6B,0x03,0x15,0x1C,0x02,0x16,
0xF8,0x00,0x07,0xC0,0x00,0x3E,0x00,0x01,0xF0,0x00,0x0F,0x80,0x00,0x7C,0x00,0x03,0xE0,0x00,0x1F,0x00,0x00,0xF8,0x0F,0xE7,0xC0,0xFE,0x3E,0x0F,0xE1,0xF0,0xFE,0x0F,0x8F,0xE0,0x7C,0x7E,0x03,0xE7,0xE0,0x1F,0x7E,0x00,0xFF,0xE0,0x07,0xFF,0x00,0x3F,0xF8,0x01,0xF7,0xE0,0x0F,0x9F,0x80,0x7C,0x7E,0x03,0xE1,0xF8,0x1F,0x07,0xE0,0xF8,0x1F,0x87,0xC0,0x7E,0x3E,0x01,0xF9,0xF0,0x07,0xE0,
// 'l'
0x6C,0x03,0x05,0x1C,0x02,0x09,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
// 'm'
0x6D,0x0B,0x1F,0x14,0x02,0x24,
0xF8,0x7C,0x07,0xE1,0xF3,0xFC,0x1F,0xF3,0xFF,0xFC,0xFF,0xF7,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0x1F,0xFF,0x03,0xF8,0x1F,0xFE,0x03,0xF0,0x1F,0xF8,0x07,0xC0,0x3F,0xF0,0x0F,0x80,0x7F,0xE0,0x1F,0x00,0xFF,0xC0,0x3E,0x01,0xFF,0x80,0x7C,0x03,0xFF,0x00,0xF8,0x07,0xFE,0x01,0xF0,0x0F,0xFC,0x03,0xE0,0x1F,0xF8,0x07,0xC0,0x3F,0xF0,0x0F,0x80,0x7F,0xE0,0x1F,0x00,0xFF,0xC0,0x3E,0x01,0xF0,
// 'n'
0x6E,0x0B,0x13,0x14,0x02,0x17,
0xF8,0x7C,0x1F,0x3F,0xE3,0xFF,0xFE,0x7F,0xFF,0xEF,0xFF,0xFF,0xFE,0x1F,0xFF,0x81,0xFF,0xE0,0x1F,0xF8,0x03,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xFF,0x80,0x3F,0xF0,0x07,0xFE,0x00,0xFF,0xC0,0x1F,0xF8,0x03,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xF0,
// 'o'
0x6F,0x0B,0x14,0x14,0x02,0x18,
0x01,0xF8,0x00,0x7F,0xE0,0x1F,0xFF,0x83,0xFF,0xFC,0x3F,0xFF,0xC7,0xF0,0xFE,0x7C,0x03,0xEF,0xC0,0x3F,0xF8,0x01,0xFF,0x80,0x1F,0xF8,0x01,0xFF,0x80,0x1F,0xFC,0x03,0xF7,0xC0,0x3E,0x7F,0x0F,0xE3,0xFF,0xFC,0x3F,0xFF,0xC1,0xFF,0xF8,0x07,0xFE,0x00,0x1F,0x80,
// 'p'
0x70,0x0B,0x15,0x1B,0x02,0x19,
0xF8,0x7C,0x07,0xDF,0xFC,0x3F,0xFF,0xF1,0xFF,0xFF,0xCF,0xFF,0xFF,0x7F,0x83,0xFB,0xF0,0x07,0xDF,0x80,0x3F,0xF8,0x00,0xFF,0xC0,0x07,0xFE,0x00,0x3F,0xF0,0x01,0xFF,0xC0,0x1F,0xFE,0x01,0xFB,0xFC,0x1F,0xDF,0xFF,0xFC,0xFF,0xFF,0xE7,0xFF,0xFE,0x3E,0x7F,0xC1,0xF0,0xF8,0x0F,0x80,0x00,0x7C,0x00,0x03,0xE0,0x00,0x1F,0x00,0x00,0xF8,0x00,0x07,0xC0,0x00,0x3E,0x00,0x00,
// 'q'
0x71,0x0B,0x15,0x1B,0x02,0x19,
0x01,0xF0,0xF8,0x7F,0xF7,0xC7,0xFF,0xFE,0x7F,0xFF,0xF7,0xFF,0xFF,0xBF,0x83,0xFD,0xF0,0x07,0xFF,0x80,0x3F,0xF8,0x00,0xFF,0xC0,0x07,0xFE,0x00,0x3F,0xF0,0x01,0xFF,0xC0,0x1F,0xBF,0x01,0xFD,0xFC,0x1F,0xE7,0xFF,0xFF,0x3F,0xFF,0xF8,0xFF,0xFF,0xC1,0xFF,0x3E,0x03,0xE1,0xF0,0x00,0x0F,0x80,0x00,0x7C,0x00,0x03,0xE0,0x00,0x1F,0x00,0x00,0xF8,0x00,0x07,0xC0,0x00,0x3E,
// 'r'
0x72,0x0B,0x0A,0x14,0x02,0x0C,
0xF3,0xFD,0xFF,0xFB,0xFE,0xFF,0xBF,0x0F,0xC3,0xE0,0xF8,0x3E,0x0F,0x83,0xE0,0xF8,0x3E,0x0F,0x83,0xE0,0xF8,0x3E,0x0F,0x83,0xE0,
// 's'
0x73,0x0B,0x0E,0x14,0x01,0x11,
0x07,0xC0,0x7F,0xC3,0xFF,0x9F,0xFF,0x7F,0xF9,0xF1,0xC7,0xC0,0x0F,0x80,0x3F,0x80,0x7F,0x80,0x7F,0x00,0x7E,0x00,0xFC,0x41,0xF3,0x8F,0xDF,0xFF,0xFF,0xFD,0xFF,0xE3,0xFF,0x03,0xF0,
// 't'
0x74,0x03,0x0B,0x1C,0x00,0x0B,
0x1F,0x03,0xE0,0x7C,0x0F,0x81,0xF0,0x3E,0x07,0xC0,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3E,0x07,0xC0,0xF8,0x1F,0x03,0xE0,0x7C,0x0F,0x81,0xF0,0x3E,0x07,0xC0,0xF8,0x1F,0x03,0xE0,0x7C,0x0F,0x80,
// 'u'
0x75,0x0B,0x13,0x14,0x02,0x17,
0xF8,0x03,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xFF,0x80,0x3F,0xF0,0x07,0xFE,0x00,0xFF,0xC0,0x1F,0xF8,0x03,0xFF,0x00,0x7F,0xE0,0x0F,0xFC,0x01,0xFF,0x80,0x3F,0xF8,0x0F,0xDF,0x83,0xF3,0xFF,0xFE,0x3F,0xFF,0x87,0xFF,0xF0,0x3F,0xF8,0x01,0xFC,0x00,
// 'v'
0x76,0x0B,0x15,0x14,0x00,0x15,
0x7C,0x01,0xF3,0xE0,0x0F,0x8F,0x80,0xF8,0x7C,0x07,0xC3,0xF0,0x7E,0x0F,0x83,0xE0,0x7C,0x1F,0x01,0xF1,0xF0,0x0F,0x8F,0x80,0x7E,0xFC,0x01,0xF7,0xC0,0x0F,0xFE,0x00,0x3F,0xE0,0x01,0xFF,0x00,0x0F,0xF8,0x00,0x3F,0x80,0x01,0xFC,0x00,0x07,0xC0,0x00,0x3E,0x00,0x01,0xF0,0x00,
// 'w'
0x77,0x0B,0x1F,0x14,0xFF,0x1E,
0x7C,0x07,0xC0,0x7C,0xF8,0x0F,0x80,0xF9,0xF0,0x1F,0x01,0xF1,0xF0,0x7F,0x07,0xC3,0xE0,0xFE,0x0F,0x87,0xC1,0xFC,0x3F,0x07,0xC7,0xFC,0x7C,0x0F,0x8F,0xF8,0xF8,0x1F,0x9F,0xF3,0xF0,0x1F,0x7D,0xF7,0xC0,0x3E,0xFB,0xEF,0x80,0x7F,0xE3,0xFF,0x00,0x7F,0xC7,0xFC,0x00,0xFF,0x8F,0xF8,0x01,0xFE,0x0F,0xF0,0x01,0xFC,0x1F,0xC0,0x03,0xF8,0x3F,0x80,0x07,0xE0,0x3E,0x00,0x07,0xC0,0x7C,0x00,0x0F,0x80,0xF8,0x00,
// 'x'
0x78,0x0B,0x15,0x14,0x00,0x15,
0x7E,0x03,0xF1,0xF8,0x3F,0x0F,0xC1,0xF8,0x3F,0x1F,0x80,0xFD,0xF8,0x03,0xFF,0x80,0x1F,0xFC,0x00,0x7F,0xC0,0x01,0xFC,0x00,0x0F,0xE0,0x00,0x7F,0x00,0x07,0xFC,0x00,0x7F,0xF0,0x03,0xFF,0x80,0x3F,0x7E,0x03,0xF1,0xF8,0x1F,0x07,0xC1,0xF8,0x3F,0x1F,0x80,0xFD,0xF8,0x03,0xF0,
// 'y'
0x79,0x0B,0x16,0x1B,0x00,0x16,
0xFC,0x00,0xF9,0xF0,0x07,0xE7,0xE0,0x1F,0x0F,0x80,0xFC,0x3E,0x03,0xE0,0x7C,0x0F,0x81,0xF0,0x7E,0x07,0xE1,0xF0,0x0F,0x8F,0xC0,0x3F,0x3E,0x00,0x7D,0xF8,0x01,0xFF,0xC0,0x07,0xFF,0x00,0x0F,0xF8,0x00,0x3F,0xE0,0x00,0x7F,0x00,0x01,0xFC,0x00,0x03,0xE0,0x00,0x0F,0x80,0x00,0x7E,0x00,0x01,0xF0,0x00,0x0F,0xC0,0x00,0x3E,0x00,0x01,0xF8,0x00,0x07,0xC0,0x00,0x3F,0x00,0x00,0xF8,0x00,0x00,
// 'z'
0x7A,0x0B,0x10,0x14,0x00,0x11,
0x7F,0xFF,0x7F,0xFE,0x7F,0xFE,0x7F,0xFC,0x7F,0xFC,0x00,0xF8,0x01,0xF8,0x01,0xF0,0x03,0xF0,0x07,0xE0,0x07,0xE0,0x0F,0xC0,0x0F,0x80,0x1F,0x80,0x1F,0x00,0x3F,0xFE,0x3F,0xFE,0x7F,0xFE,0x7F,0xFE,0xFF,0xFE,
// '{'
0x7B,0x04,0x0D,0x22,0x00,0x0D,
0x00,0xF8,0x1F,0xC1,0xFE,0x1F,0xF0,0xFF,0x87,0xE0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x01,0xF8,0x1F,0x83,0xFC,0x1F,0xC0,0xFC,0x07,0xF0,0x3F,0xC0,0x7E,0x01,0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xFC,0x07,0xFC,0x3F,0xE0,0xFF,0x03,0xF8,0x07,0xC0,
// '|'
0x7C,0x03,0x03,0x23,0x0A,0x17,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
// '}'
0x7D,0x04,0x0D,0x22,0x00,0x0D,
0xF8,0x07,0xF0,0x3F,0xC1,0xFF,0x0F,0xF8,0x0F,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xFC,0x03,0xF0,0x1F,0xE0,0x7F,0x01,0xF8,0x1F,0xC1,0xFE,0x0F,0xC0,0xFC,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x01,0xF8,0x7F,0xC3,0xFE,0x1F,0xE0,0xFE,0x07,0xC0,0x00,
// '~'
0x7E,0x0D,0x14,0x08,0x01,0x17,
0x1F,0x00,0x07,0xFE,0x01,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0xFF,0x80,0x7F,0xE0,0x00,0xFC,

// Terminator
0xFF
};