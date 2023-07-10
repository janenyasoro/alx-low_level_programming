#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 * Description: prints a string
 * On success: return the number of characters printed
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
