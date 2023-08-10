#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 *
 * @ptr: void pointer
 * @old_size: int unsigned
 * @new_size: int unsigned
 *
 *
 * Return: pointer to the block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	char *y;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	x = malloc(new_size);
	if (!x)
		return (NULL);

	y = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			x[i] = y[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			x[i] = y[i];
	}

	free(ptr);
	return (x);
}
