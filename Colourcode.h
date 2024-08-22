

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
