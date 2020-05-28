#include <stdint.h>

uint16_t analyzerColors[36] =
{
	0x0F00,0x0F10,0x0F20,0x0F30,0x0F40,0x0F50,0x0F60,0x0F70,
	0x0F80,0x0F90,0x0FA0,0x0FB0,0x0FC0,0x0FD0,0x0FE0,0x0FF0,
	0x0EF0,0x0DF0,0x0CF0,0x0BF0,0x0AF0,0x09F0,0x08F0,0x07F0,
	0x06F0,0x05F0,0x04F0,0x03F0,0x02F0,0x01F0,0x00F0,0x00E0,
	0x00D0,0x00C0,0x00B0,0x00A0
};

// Final unpack length: 11000
// Decoded length: 2750 (first four bytes of buffer)
const uint8_t spectrumVisualsPackedBMP[2217] =
{
	0x00,0x00,0x0A,0xBE,0xCC,0x2D,0x55,0x65,0x55,0x55,0x56,0x6A,0xCC,0x2C,0xAA,0xB6,
	0xAA,0xAA,0xAB,0x6A,0xCC,0x2C,0xAA,0xB6,0xAA,0xAA,0xAB,0x6A,0xCC,0x08,0xAA,0xA5,
	0x56,0x55,0x69,0x55,0x69,0x56,0x95,0x56,0x55,0x69,0x69,0x66,0xA9,0xAA,0xAA,0x95,
	0x69,0x69,0x69,0x56,0x96,0xAA,0x5A,0x59,0x55,0x65,0x55,0x95,0x5A,0xCC,0x05,0xAA,
	0xB6,0xA9,0x56,0xAB,0x6A,0xCC,0x08,0xAA,0x97,0xFF,0x5F,0x59,0x7F,0xF5,0xF5,0xAD,
	0x7F,0x5F,0x59,0x79,0x75,0xA5,0xEA,0xAA,0x5F,0x59,0x59,0x75,0xF5,0x97,0xAA,0x5E,
	0x5E,0xF5,0xF5,0xFF,0xD7,0xD6,0xCC,0x05,0xAA,0xB6,0xA5,0xF5,0xAB,0x6A,0xCC,0x08,
	0xAA,0xA5,0x5A,0x55,0x7D,0x56,0xA5,0xEB,0xE9,0x7A,0x55,0x7D,0x79,0x75,0x55,0xEA,
	0xAA,0x55,0x5D,0x55,0x75,0x55,0xD7,0xAA,0x95,0x7E,0x97,0xE5,0x5A,0x95,0x5F,0xCC,
	0x05,0xAA,0xB6,0xA5,0x55,0xEB,0x6A,0xCC,0x08,0xAA,0xAB,0xD6,0x5F,0xF9,0x7F,0xA5,
	0xE5,0xA9,0x7A,0x5D,0x79,0x79,0x75,0xF5,0xEA,0xAA,0x5F,0x5D,0x75,0x75,0xF5,0xD7,
	0xAA,0xA5,0xFA,0x5F,0xA5,0xFE,0x97,0x5E,0xCC,0x05,0xAA,0xB6,0xA5,0xF5,0xEB,0x6A,
	0xCC,0x08,0xAA,0x95,0x5F,0x5E,0xA9,0x55,0x69,0x57,0xE9,0x7A,0x5E,0x5A,0x55,0xF5,
	0xE5,0xEA,0xAA,0x5E,0x5D,0x79,0x75,0xE5,0xD5,0x56,0xA5,0xE9,0x55,0x65,0x55,0x97,
	0x96,0xCC,0x05,0xAA,0xB6,0xA5,0xE5,0xEB,0x6A,0xCC,0x08,0xAA,0xAF,0xFE,0xBE,0xAA,
	0xFF,0xFA,0xFF,0xAA,0xFA,0xBE,0xBE,0xBF,0xEB,0xEB,0xEA,0xAA,0xBE,0xBE,0xFA,0xFB,
	0xEB,0xEF,0xFF,0xAB,0xEA,0xFF,0xFB,0xFF,0xEF,0xAF,0xCC,0x05,0xAA,0xB6,0xAB,0xEB,
	0xEB,0x6A,0xCC,0x2C,0xAA,0xB6,0xAA,0xAA,0xAB,0xBF,0xCC,0x2C,0xFF,0xFB,0xFF,0xFF,
	0xFF,0xCC,0x30,0x55,0x56,0x6A,0xCC,0x2F,0xAA,0xAB,0x6A,0xCC,0x2F,0xAA,0xAB,0x6A,
	0xAA,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,
	0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,
	0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0x55,0x56,0xAA,
	0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,
	0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,
	0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,
	0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,
	0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,
	0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,
	0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,
	0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,
	0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,
	0xAB,0x6A,0xAB,0x6A,0xAB,0x6A,0xAB,0xAA,0xAB,0x6A,0xAA,0xBF,0xFF,0xBF,0xFF,0xBF,
	0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,
	0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,
	0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xAA,0xAB,0x6A,0xCC,0x2F,0xAA,0xAB,
	0x6A,0xCC,0x2F,0xAA,0xAB,0xBF,0xCC,0x30,0xFF
};

uint32_t analyzerColorsRGB24[36];
