#include "main.h"

/**
* _atoi -  prints n elements of an array
*
* @s: char pointer 1
*
* Return: dest
*/

int _atoi(char *s)
{
	int x = 0;
	int y = 1;

	do {
		if (*s == '-')
			y *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');
		else if (x > 0)
			break;
	} while (*s++);
	return (x * y);
}
