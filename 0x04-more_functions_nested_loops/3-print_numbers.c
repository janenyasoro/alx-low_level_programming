#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Returns - (0)
 */

void _putchar(char c);

void print_numbers(void) {
    int i;
    for (i = 0; i <= 9; i++) {
        _putchar(i + '0');
    }
    _putchar('\n');
}

