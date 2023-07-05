#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion -  Recursive call to calculate the power
 * returns 0 or 1
 * x - any integer
 * y - any integer
 */

int _pow_recursion(int x, int y)
{
    if (y < 0) {
        return -1;
    }
    if (y == 0) {
        return (1); 
    }
      return (x * _pow_recursion(x, y - 1));  
}
