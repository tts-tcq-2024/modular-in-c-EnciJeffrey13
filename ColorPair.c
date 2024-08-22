// // ColorPair.c

// #include "ColorCode.h"
// #include <string.h>

// int get_color_pair_number(const char* major_color, const char* minor_color) {
//     int major_index = -1;
//     int minor_index = -1;

//     for (int i = 0; i < COLOR_PAIR_COUNT; i++) {
//         if (strcmp(get_major_color(i), major_color) == 0) {
//             major_index = i;
//         }
//         if (strcmp(get_minor_color(i), minor_color) == 0) {
//             minor_index = i;
//         }
//     }

//     if (major_index == -1 || minor_index == -1) {
//         return -1;
//     }

//     return major_index * COLOR_PAIR_COUNT + minor_index + 1;
// }

// void print_color_reference_manual() {
//     printf("Color Code Reference Manual:\n");
//     for (int i = 0; i < COLOR_PAIR_COUNT; i++) {
//         for (int j = 0; j < COLOR_PAIR_COUNT; j++) {
//             printf("Pair %d: %s, %s\n", i * COLOR_PAIR_COUNT + j + 1, get_major_color(i), get_minor_color(j));
//         }
//     }
// }
