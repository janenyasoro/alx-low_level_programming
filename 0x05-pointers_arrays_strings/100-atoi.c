#include "main.h"
/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
int _atoi(char *s) {
    int sign = 1;
    int result = 0;

       if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

        while (*s != '\0') {
        if (*s >= '0' && *s <= '9') {
            result = result * 10 + (*s - '0');
            s++;
        } else 
	{
            break;
        }
    }

    return sign * result;
}

int main() {
    char str1[] = "123";
    char str2[] = "-456";
    char str3[] = "abc";
    char str4[] = "+789";

    int num1 = _atoi(str1);
    int num2 = _atoi(str2);
    int num3 = _atoi(str3);
    int num4 = _atoi(str4);

    printf("Converted numbers: %d, %d, %d, %d\n", num1, num2, num3, num4);

    return 0;
}
