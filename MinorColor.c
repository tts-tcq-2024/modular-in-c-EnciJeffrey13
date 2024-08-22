// MinorColor.c

#include "ColorCode.h"

static const char* minor_colors[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const char* get_minor_color(int index) {
    if (index < 0 || index >= COLOR_PAIR_COUNT) {
        return NULL;
    }
    return minor_colors[index];
}
