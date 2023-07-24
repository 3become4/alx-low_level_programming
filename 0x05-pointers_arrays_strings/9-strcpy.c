#include "main.h"

/**
* _strcpy -  prints n elements of an array
*
* @dest: char pointer 1
* @src: char  pointer 2
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
