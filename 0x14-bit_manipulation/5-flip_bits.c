#include "main.h"

/**
 * flip_bits- the number of bits you would need to flip.
 *
 * @n: int parameter
 * @m: int parameter
 *
 * Return: num of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			x++;
	}

	return (x);
}
