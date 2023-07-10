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
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		int j, start;

		start = i;
		j = 0;
		while (haystack[i] == needle[j] &&
		       needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + start);
		i = start + 1;
	}
	return (NULL);
}
