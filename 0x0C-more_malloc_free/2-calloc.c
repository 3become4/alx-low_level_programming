#include "main.h"

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
	void *x;
	unsigned int y;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(sizeof(int) * nmemb);

	if (x == 0)
		return (NULL);

	y = sizeof(int) * nmemb;

	while (y--)
		*x++ = 0;
	return (x);
}
