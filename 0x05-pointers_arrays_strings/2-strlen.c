#include "main.h"
/**
 *  _strlen - returns the length of the string
 *  @s - counts the string
 *  Return: string length
 */

int _strlen(char *s)
{
    int len = 0;
    for (; *s != '\0'; s++) 
    {
        len++;
    }
    return len;
}


