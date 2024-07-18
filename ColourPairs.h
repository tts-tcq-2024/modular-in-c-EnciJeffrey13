#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS 16

typedef enum {
    WHITE,
    RED,
    BLACK,
    YELLOW,
    VIOLET,
    NUMBER_OF_MAJOR_COLORS
} MajorColor;

typedef enum {
    BLUE,
    ORANGE,
    GREEN,
    BROWN,
    SLATE,
    NUMBER_OF_MINOR_COLORS
} MinorColor;

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

const char* MajorColorNames[NUMBER_OF_MAJOR_COLORS] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[NUMBER_OF_MINOR_COLORS] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int GetNumberFromGivenColorPair(const ColorPair* colorPair) {
    return colorPair->majorColor * NUMBER_OF_MINOR_COLORS + colorPair->minorColor + 1;
}

ColorPair GetColorPairFromGivenNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (MajorColor)(zeroBasedPairNumber / NUMBER_OF_MINOR_COLORS);
    colorPair.minorColor = (MinorColor)(zeroBasedPairNumber % NUMBER_OF_MINOR_COLORS);
    return colorPair;
}

void PrintColorPairToString(const ColorPair* colorPair, char* buffer) {
    snprintf(buffer, MAX_COLORPAIR_NAME_CHARS, "%s %s",
             MajorColorNames[colorPair->majorColor],
             MinorColorNames[colorPair->minorColor]);
}

void testNumberToColorPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = GetColorPairFromGivenNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    PrintColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testColorPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetNumberFromGivenColorPair(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToColorPair(4, WHITE, BROWN);
    testNumberToColorPair(5, WHITE, SLATE);
    testColorPairToNumber(BLACK, ORANGE, 12);
    testColorPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
