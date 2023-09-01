#include "main.h"

/**
 * set_bit- returns the value of a bit at a given index.
 *
 * @n: int parameter
 * @index: index for the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
