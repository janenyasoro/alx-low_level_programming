#include "main.h"
#include <stdlib.h>

/**
*  _strcpy - copy string to another
* @dest: reipient
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
/**
* _strlen - check string legthn
* @s: pointer to array of chaacters
* Return: len-length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* _strdup - copy string to the heap
* @str: pointer to string arg--to be copied to buffer in heap
* Return: pointer to heap buffer
*/
char *_strdup(char *str)
{
	char *heap_buffer;

	if (str == NULL)
		return (0);
	if (sizeof(str) < 1)
		return (0);
	heap_buffer = malloc(sizeof(char) * (_strlen(str) + 1));
	if (heap_buffer == 0)
		return (0);
	_strcpy(heap_buffer, str);
	return (heap_buffer);
}
