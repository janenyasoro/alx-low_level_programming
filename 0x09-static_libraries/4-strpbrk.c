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
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return (NULL);
}
