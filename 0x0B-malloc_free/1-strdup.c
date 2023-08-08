#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space
 *
 * @str: int
 *
 * Return: return 0 if null and pointer if suc
 */
char *_strdup(char *str)
{
	int s = 0, i;
	char *x;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
		s++
	x = malloc(s * sizeof(*str) + 1);
	if (x == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < s; i++)
			x[i] = str[i];
	}
	return (x);
}
