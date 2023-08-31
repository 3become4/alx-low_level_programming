#include "lists.h"

/**
 * binary_to_uint-  converts a binary number to an unsigned int.
 *
 * @b: char pointer
 *
 * Return: the converted number, or 0 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		x = 2 * x + (*b - '0');
		*b++;
	}
	return (x);
}

