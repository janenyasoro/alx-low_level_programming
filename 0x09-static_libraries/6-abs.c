#include "main.h"
/**
 * _abs - prints the absolute value of a number
 *@i: number targeted
 *Return: returns 0
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	return (r);
}
