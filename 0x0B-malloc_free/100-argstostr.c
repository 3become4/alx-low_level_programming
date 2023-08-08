#include "main.h"

/**
 * *argstostr -  concatenates all arguments in program
 *
 * @ac: int
 * @av: char
 *
 * Return: arrgument pointer.
 */

char *argstostr(int ac, char **av)
{
	int i, c0, c1 = 0, c2 = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (c0 = 0; av[i][c0]; c0++)
			c2++;
	}
	c2 += ac;

	x = malloc(sizeof(char) * c2 + 1);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (c0 = 0; av[i][c0]; c0++)
	{
		x[c1] = av[i][c0];
		c1++;
	}
	if (x[c1] == '\0')
	{
		x[c1++] = '\n';
	}
	}
	return (x);

}
