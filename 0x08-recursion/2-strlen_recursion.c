#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion -  Recursive call to move to the next character
 * return 0 - Base case: end of string reached, return length 0
 * @s - string to be counted
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return 0;
    }

    return 1 + _strlen_recursion(s + 1);
}
