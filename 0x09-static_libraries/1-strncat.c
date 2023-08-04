#include "main.h"
/**
 * _strncat - concatenates two strings.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int limit
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (dest[i])
		i++;

	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[i + l] = src[l];
	dest[i + l] = '\0';

	return (dest);
}

