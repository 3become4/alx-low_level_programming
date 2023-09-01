#include "main.h"

/**
 * clear_bit- ets the value of a bit to 0 at a given index.
 *
 * @n: int parameter
 * @index: index for the bit
 *
 * Return: 1 if it worked, or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
