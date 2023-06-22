#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the character c to stdout
 * @c: The character to print
 * Return: On suceess 1
 * Return: On error -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
