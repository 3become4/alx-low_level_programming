#include "main.h"

/**
 * *alloc_grid - 2 dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **x;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	x = malloc(height * sizeof(*x));
	if (x == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		x[h] = malloc(width * sizeof(**x));
		if (x[h] == NULL)
		{
			for (w = 0; w < h;  w++)
				free(x[w]);
			free(x);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			x[h][w] = 0;
		}
	}
	return (x);
}
