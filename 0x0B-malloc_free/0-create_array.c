#include "main.h"
/**
 * create_array - creates an array initializes with specific char
 *
 * @size: int
 * @c: char pointer st
 *
 * Return: 1 if the strings are identical
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);
	while (size--)
		x[size] = c;
	return (0);
}
