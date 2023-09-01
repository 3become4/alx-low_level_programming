#include "main.h"

/**
 * binary_to_uint-  converts a binary number to an unsigned int.
 *
 * @b: char pointer
 *
 * Return: the converted number, or 0 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int l, x;

	if (!b)
		return (0);

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, x = 1; l >= 0; l--, x *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			i += x;
		}
	}

	return (i);
}
