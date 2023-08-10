#include "main.h"

/**
 * fillmem - allocates memory for an array.
 *
 *
 * @y: char
 * @x: char
 * @z: int unsigned
 *
 *
 * Return: pointer to x
 */
char *fillmem(char *x, char y, unsigned int z)
{
	unsigned int i;

	for (i = 0; i < z; i++)
	{
		x[i] = y;
	}

	return (x);
}



/**
 * _calloc - allocates memory for an array.
 *
 *
 * @size: int unsigned
 * @nmemb: int unsigned
 *
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	fillmem(x, 0, nmemb * size);

	return (x);

}
