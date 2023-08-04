#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: char input pointer
 * @accept: char pointer
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *x;

	i = 0;
	while (s[i] && s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				x = &s[i];
				return (x);
			}
			j++;
		}

		i++;
	}
	return (0);
}
