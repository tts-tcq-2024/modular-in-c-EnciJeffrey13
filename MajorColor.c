// MajorColor.c

#include "ColorCode.h"

static const char* major_colors[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* get_major_color(int index) {
    if (index < 0 || index >= COLOR_PAIR_COUNT) {
        return NULL;
    }
    return major_colors[index];
}
