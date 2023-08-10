#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: char pointer
 * @s2: char pointer
 * @n: int unsigned
 *
 *
 * Return: x pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i, j, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;

	x = malloc(s1l + n + 1);
	if (x == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		x[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		x[i + j] = s2[j];

	x[i + j + 1] = '\0';
	return (x);
}
