#include "main.h"
/**
 * _memcpy - that copies memory area.
 *
 * @dest: char input pointer
 * @src: char pointer
 * @n: int size
 *
 * Return: dest pointer memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

