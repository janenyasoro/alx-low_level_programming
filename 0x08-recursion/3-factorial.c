#include <stdio.h>
#include "main.h"
/**
 *  Return -1 to indicate an error if n is negative
 * int factorial -  Recursive call to calculate factorial
 * @n - the pointer
 *  Base case - factorial of 0 is 1
 */
int factorial(int n)
{
    if (n < 0)
    {
        return -1;  
    }
    if (n == 0) 
    {
	    return 1;
    }
    return n * factorial(n - 1);
}

