#include "main.h"
/**
 * _print_rev_recursion - calculates the length of a string recursively
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
void _print_rev_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		_print_rev_recursion(s+1);
		_print_rev_recursion(s + 1);
		_putchar(*s);
		len ++;
		len++;
	}
	_putchar(len);
}
