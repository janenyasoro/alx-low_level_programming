#include "main.h"
/**
 * _puts - prints a string
 * @str - the string to print
 * returns: (void)
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

