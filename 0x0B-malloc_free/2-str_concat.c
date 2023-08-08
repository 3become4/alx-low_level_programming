#include "main.h"

/**
 * _strlen - Finds the length of a string.
 *
 * @s: input string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: ponter to the s1 then s2
 */

char *str_concat(char *s1, char *s2)
{
	int s1s;
	int s2s;
	int i;
	char *x;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	s1s = _strlen(s1);
	s2s = _strlen(s2);
	x = malloc((s1s + s2s) * sizeof(char) + 1);
	if (x == 0)
		return ('\0');

	for (i = 0; i <= s1s + s2s; i++)
	{
		if (i < s1s)
			x[i] = s1[i];
		else
			x[i] = s2[i - s1s];
	}
	x[i] = '\0';
	return (x);
}
