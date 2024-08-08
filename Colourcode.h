#ifndef COLORCODE_H
#define COLORCODE_H

#include <stdio.h>

#define MAX_COLORPAIR_NAME_CHARS 16

typedef struct {
    const char* majorColor;
    const char* minorColor;
} ColorPair;

const char* MajorColorNames[];
const char* MinorColorNames[];

int numberOfMajorColors();
int numberOfMinorColors();
ColorPair getColorFromPairNumber(int pairNumber);
int getPairNumberFromColor(const char* major, const char* minor);
void printColorCodingManual();

#endif // COLORCODE_H
