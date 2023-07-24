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
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
