#include "main.h"
#include <stddef.h>
/**
 *_strchr - Returns a pointer to the first occurrence
 *of the character c in the string s, or NULL if the
 *character is not found
 *@s:string targeted
 *@c:character targeted
 *Return: returns pointer to first occcurence of c
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
