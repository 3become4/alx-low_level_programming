#include "main.h"
/**
 * array_range - creates an array of integers.
 *
 *
 * @min: int
 * @max: int
 *
 *
 * Return: new array pointer
 */
int *array_range(int min, int max)
{
	int *x;
	int s, i;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	x = malloc(sizeof(int) * s);

	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		x[i] = min++;

	return (x);
}
