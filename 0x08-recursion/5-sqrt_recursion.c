#include <stdio.h>
#include "main.h"
/**
 * sqrt_recursive - the recursive squareroot
 * @n - starting integer
 * @start - the starting point
 * @end - the end point
 */

int sqrt_recursive(int n, int start, int end)
{
    if (start > end) 
    {
        return -1;
    }
  
    int mid = (start + end) / 2;
    if (mid * mid == n) {
        return mid; 
    } else if (mid * mid > n)
    {
        return sqrt_recursive(n, start, mid - 1);
    } else {
        return sqrt_recursive(n, mid + 1, end); 
  }
}

int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1;  
    }
    return sqrt_recursive(n, 0, n);  
}

