#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Returns - (0)
 */

void print_numbers(void)
{
   char c;
    for (c = 0; c <= 9; c++) {
        _putchar(c);
    }
    _putchar('\n');
}

