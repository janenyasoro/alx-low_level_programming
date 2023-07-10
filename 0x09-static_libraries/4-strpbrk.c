#include "main.h"
/**
 *_strpbrk - The _strpbrk() function locates the first
 * occurrence in the string s of any of the bytes in
 *the string accept
 *@s: string where search is made
 *@accept: string where searched bytes are located
 *Return:Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *origin = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = origin;
		s++;
	}
	return (0);
}
