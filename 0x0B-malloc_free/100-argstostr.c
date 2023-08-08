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
	int s, c0, c1, c2 = 0;
	char *x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (c0 = 0; c0 < ac; c0++)
	{
		for (c1 = 0; av[c0][c1] != '\0'; c1++)
		{
			s += 1;
		}
		s += 1;
	}
	s += 1;

	x = malloc(sizeof(char) * s);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (c0 = 0; c0 < ac; c0++)
	{
		for (c1 = 0; av[c0][c1] != '\0'; c1++)
		{
			x[c2] = av[c0][c1];
			c2++;
		}
		x[c2] = '\n';
		c2++;
	}
	x[c2] = '\0';
	return (x);
}
