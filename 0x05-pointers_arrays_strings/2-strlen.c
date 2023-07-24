#include "main.h"

/**
* _strlen - length of a string.
*
* @s: string 1 pointer
*
* Return: count
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
