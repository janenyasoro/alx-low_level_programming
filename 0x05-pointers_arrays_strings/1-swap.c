#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 *int  a - number to be swapped
 * int b - integer to swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
