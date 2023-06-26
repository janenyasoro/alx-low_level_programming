#include "main.h"
/**
 *  _strlen - returns the length of the string
 *  @s - counts the string
 *  Return: string length
 */
int _strlen(char *s)
       	int c = 0;
	for (; *s != '\0'; s++)
{
        c++;
    }

    return (c);
}
