#include "main.h"

/**
 * malloc_checked - calculate minimum number of coins
 *
 * @b: int unsigned
 *
 *
 * Return: x pointer
 */
void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);
	return (x);
}
