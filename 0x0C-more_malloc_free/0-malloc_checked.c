#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - allocate space in the heap for the arg -- store
* the arg in the space allocated & return pointer to the mem location
* @b: unsigned int agruement
* Return: void heap_space
*/
void *malloc_checked(unsigned int b)
{
	void *heap_space;

	heap_space = malloc(b);
	if (heap_space == NULL)
		exit(98);
	return (heap_space);
}
