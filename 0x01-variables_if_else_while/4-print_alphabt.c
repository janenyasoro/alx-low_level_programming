#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
