#include "main.h"
/**
 * int _isalpha - checks the alphabetic order
 * c - the input character to check
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c);
{

if ((c >= 65 && c <=90) || (c>=97 && c <= 122))
{
	return (1);
	else
		return (0);
}
return (0);
}

