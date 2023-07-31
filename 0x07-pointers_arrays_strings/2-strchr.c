#include "main.h"
/**
 * _strchr - that copies memory area.
 *
 * @s: char input pointer
 * @c: char
 *
 * Return: pointer 1st instance of c occurance or null.
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + (i - 1));
		i++;
	}
	return (0);
}
