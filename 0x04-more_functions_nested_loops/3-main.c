#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
#include <stdio.h>

void print_numbers(void) {
    int i;
    for (i = 0; i <= 9; i++) {
        putchar(i + '0');
    }
    putchar('\n');
}
