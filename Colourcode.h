// #ifndef COLORCODE_H
// #define COLORCODE_H

// #include <stdio.h>

// #define MAX_COLORPAIR_NAME_CHARS 16

// typedef struct {
//     const char* majorColor;
//     const char* minorColor;
// } ColorPair;

// const char* MajorColorNames[];
// const char* MinorColorNames[];

// int numberOfMajorColors();
// int numberOfMinorColors();
// ColorPair getColorFromPairNumber(int pairNumber);
// int getPairNumberFromColor(const char* major, const char* minor);
// void printColorCodingManual();

// #endif // COLORCODE_H
// ColorCode.h

#ifndef COLOR_CODE_H
#define COLOR_CODE_H

#include <stdio.h>

#define COLOR_PAIR_COUNT 5 // For simplicity, reduced the count for short example

// Function prototypes
const char* get_major_color(int index);
const char* get_minor_color(int index);
int get_color_pair_number(const char* major_color, const char* minor_color);
void print_color_reference_manual();

#endif // COLOR_CODE_H
