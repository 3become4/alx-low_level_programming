#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: str
 * @s2: str
 *
 * Return: return 0 if fail and new mix if suc
 */
char *str_concat(char *s1, char *s2)
{
	int s1s = 0, s2s = 0, i;
	char *x;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[s1s] != '\0')
		s1s++;
	while (s2[s2s] != '\0')
		s2s++;

	x = malloc((s1s + s2s) * sizeof(char) + 1);
	if (x == 0)
		return (0);
	for (i = 0; i < s1s + s2s; i++)
	{
		if (i < s1s)
			x[i] = s1[i];
		else
			x[i] = s2[i - s1s];
	}
	x[i] = '\0';
	return (x);
}
