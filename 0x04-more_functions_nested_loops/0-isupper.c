#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks for uppercase character
 * Return: 1 if c is uppercase  0 otherwise Always 0.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z') {
        return 1; 
    } else {
        return 0; 
    }
}
