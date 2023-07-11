#include <stdlib.h>
#include "main.h"
/**
* create_array - create aray and initialize it with specified char
* @size: size of array to create
* @c: charater to insert to the array
* Return: pointer to array created
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *init_ptr;

	if (size == 0)
		return (0);
	init_ptr = malloc(sizeof(char) * size);
	if (init_ptr == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		init_ptr[i] = c;
	}
	init_ptr[i] = '\0';
	return (init_ptr);
}
