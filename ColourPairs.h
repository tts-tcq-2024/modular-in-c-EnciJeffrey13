#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <stdio.h>

#define MAX_COLORPAIR_NAME_CHARS 16

// Enum definitions for major and minor colors
typedef enum {
    WHITE,
    RED,
    BLACK,
    YELLOW,
    VIOLET,
    NUMBER_OF_MAJOR_COLORS // Automatically keeps track of the number of major colors
} MajorColor;

typedef enum {
    BLUE,
    ORANGE,
    GREEN,
    BROWN,
    SLATE,
    NUMBER_OF_MINOR_COLORS // Automatically keeps track of the number of minor colors
} MinorColor;

// Array of major and minor color names
extern const char* MajorColorNames[NUMBER_OF_MAJOR_COLORS];
extern const char* MinorColorNames[NUMBER_OF_MINOR_COLORS];

// Struct definition for color pair
typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

// Function to get color pair name
void getColorPairName(const ColorPair* colorPair, char* colorPairName);

// Function to print all color pairs
void printColorPairs();

#endif // COLORPAIR_H
