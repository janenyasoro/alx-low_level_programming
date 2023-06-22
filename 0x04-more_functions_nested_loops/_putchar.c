#include <stdio.h>

void print_numbers(void) {
    int i;
    for (i = 0; i <= 9; i++) {
        putchar(i + '0');
    }
    putchar('\n');
}
