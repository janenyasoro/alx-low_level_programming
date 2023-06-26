#include "main.h"
#include<studio.h>
/**
 *  _strlen - returns the length of the string
 *  char *s - counts the string
 */
int _strlen(char *s)
       	int length = 0;
	while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}
