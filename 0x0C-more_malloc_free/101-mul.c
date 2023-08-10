#include "main.h"

/**
 * isdig - character is digit
 *
 * @x: int
 *
 * Return: 1 or 0
 */
int isdig(int x)
{
	return (x >= '0' && x <= '9');
}

/**
 * stlen - st len
 *
 * @x: char pointer
 *
 * Return: len of st
 */

int stlen(char *x)
{
	int i = 0;

	while (*x++)
		i++;
	return (i);
}

/**
 * strmult - mult str
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: prod of str
 */


char *strmult(char *s1, char *s2)
{
	char *x;
	int l1, l2, a, b, c, d;

	l1 = stlen(s1);
	l2 = stlen(s2);
	x = malloc(a = d = l1 + l2);
	if (!x)
		printf("Error\n"), exit(98);
	while (a--)
		x[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!isdig(s1[l1]))
		{
			free(x);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = stlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!isdig(s2[l2]))
			{
				free(x);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += x[l1 + l2 + 1] + (a * b);
			x[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			x[l1 + l2 + 1] += c;
	}
	return (x);
}



/**
 * main - reallocates a memory block using malloc and free
 *
 *
 * @argc: int number if points
 * @argv: char vector
 *
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *x;
	int y, z, w;

	if (argc != 3)
		printf("Error\n"), exit(98);

	w = stlen(argv[1]) + stlen(argv[2]);
	x = strmult(argv[1], argv[2]);
	z = 0;
	y = 0;
	while (z < w)
	{
		if (x[z])
			y = 1;
		if (y)
			_putchar(x[z] + '0');
		z++;
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(x);
	return (0);
}
