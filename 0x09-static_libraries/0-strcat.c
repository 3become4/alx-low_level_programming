#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (dest[i])
		i++;

	while (src[l])
	{
		dest[i++] = src[l];
		l++;
	}

	return (dest);
}

