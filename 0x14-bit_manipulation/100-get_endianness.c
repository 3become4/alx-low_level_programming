#include "main.h"

/**
 * get_endianness-checks the endianness.
 *
 *
 * Return: num of endianness
 */
int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char *) &x;

	return ((int)*y);
}
