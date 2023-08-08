#include "main.h"

/**
 * wordc -  count the words
 * @s: string
 *
 * Return: number of words
 */
int wordc(char *s)
{
	int i, x = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				x++;
		}
		else if (i == 0)
			x++;
	}
	x++;
	return (x);
}

/**
 * *strtow -  that splits a string into words
 *
 * @str: char string
 *
 * Return: split of strings
 */

char **strtow(char *str)
{
	int i, j, x, l, z = 0, wc = 0;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);
	z = wordc(str);
	if (z == 1)
		return (NULL);
	a = (char **)malloc(z * sizeof(char *));
	if (a == NULL)
		return (NULL);
	a[z - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[j + i] != ' ' && str[i + j]; j++)
				;
			j++;
			a[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (a[wc] == NULL)
			{
				for (x = 0; x < wc; x++)
					free(a[x]);
				free(a[z - 1]);
				free(a);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				a[wc][l] = str[i + l];
			a[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (a);
}
