#include "main.h"
/**
 * _strspn - length of a prefix substring
 *
 * @s: char input pointer
 * @accept: char pointer
 *
 * Return: number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i + 1);
			j++;
		}

		i++;
	}
	return (i);
}
