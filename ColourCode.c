#include "ColorCode.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors() {
    return sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
}

int numberOfMinorColors() {
    return sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}

ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int majorColorIndex = (pairNumber - 1) / numberOfMinorColors();
    int minorColorIndex = (pairNumber - 1) % numberOfMinorColors();
    colorPair.majorColor = MajorColorNames[majorColorIndex];
    colorPair.minorColor = MinorColorNames[minorColorIndex];
    return colorPair;
}

int getPairNumberFromColor(const char* major, const char* minor) {
    int majorIndex = -1, minorIndex = -1;
    for (int i = 0; i < numberOfMajorColors(); i++) {
        if (strcmp(major, MajorColorNames[i]) == 0) {
            majorIndex = i;
            break;
        }
    }
    for (int i = 0; i < numberOfMinorColors(); i++) {
        if (strcmp(minor, MinorColorNames[i]) == 0) {
            minorIndex = i;
            break;
        }
    }
    if (majorIndex == -1 || minorIndex == -1) {
        return -1;
    }
    return (majorIndex * numberOfMinorColors()) + (minorIndex + 1);
}

void printColorCodingManual() {
    printf("Pair Number\tMajor Color\tMinor Color\n");
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors() * numberOfMinorColors(); pairNumber++) {
        ColorPair colorPair = getColorFromPairNumber(pairNumber);
        printf("%d\t\t%s\t\t%s\n", pairNumber, colorPair.majorColor, colorPair.minorColor);
    }
}
