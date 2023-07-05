#include "main.h"
/**
 * _print_rev_recursion - calculates the length of a string recursively
 * @s: the string to calculate the length of the string
 * Return: the length of the string
 */
#include <stdio.h>
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	 _putchar(*s);
} 
