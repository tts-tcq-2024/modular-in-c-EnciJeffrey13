// TestColorCode.c

#include "ColorCode.h"
#include <assert.h>
#include <string.h>

void test_major_color() {
    assert(strcmp(get_major_color(0), "White") == 0);
    assert(strcmp(get_major_color(4), "Violet") == 0);
    assert(get_major_color(-1) == NULL);
    assert(get_major_color(5) == NULL);
}

void test_minor_color() {
    assert(strcmp(get_minor_color(0), "Blue") == 0);
    assert(strcmp(get_minor_color(4), "Slate") == 0);
    assert(get_minor_color(-1) == NULL);
    assert(get_minor_color(5) == NULL);
}

void test_color_pair_number() {
    assert(get_color_pair_number("White", "Blue") == 1);
    assert(get_color_pair_number("Yellow", "Slate") == 20);
    assert(get_color_pair_number("Invalid", "Blue") == -1);
}

void test_print_reference_manual() {
    print_color_reference_manual();  // Manually verify the output
}

int main() {
    test_major_color();
    test_minor_color();
    test_color_pair_number();
    test_print_reference_manual();
    printf("All tests passed!\n");
    return 0;
}
