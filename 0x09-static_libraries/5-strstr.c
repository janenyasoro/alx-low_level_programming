#include "main.h"
/**
 *_strstr - The _strstr() function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *@haystack: string where the search is made
 *@needle: string whose occurence is searched in haystack
 *Return:Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *org_ptr = needle;

	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*needle == *haystack)
				return (haystack);
			haystack++;

		}
		if (*needle == '\0' || *haystack == '\0')
		{
			haystack = org_ptr;
			break;
		}
		haystack = org_ptr;
		needle++;
			break;

	}
	return (0);
}
