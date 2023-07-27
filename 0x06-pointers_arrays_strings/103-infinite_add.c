#include "main.h"
/**
 * infinite_add - adds two numbers.
 *
 * @n1: char input
 * @n2: char input
 * @r: char input
 * @size_r: int size
 *
 * Return: void
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, l, ln, x, y, z, a;

	i = l = a = 0;
	while (n1[i] != '\0')
		i++;
	while  (n2[l] != '\0')
		l++;
	if (i > l)
		ln = i;
	else
		ln = l;
	if (ln + 1 > size_r)
		return (0);
	r[ln] = '\0';
	for (x = ln - 1; x >= 0; x--)
	{
		i--;
		l--;
		if (i >= 0)
			y = n1[i] - '0';
		else
			y = 0;
		if (l >= 0)
			z = n2[l] - '0';
		else
			z = 0;
		r[x] = (y + z + a) % 10 + '0';
		a = (y + z + a) / 10;
	}
	if (a == 1)
	{
		r[ln + 1] = '\0';
		if (ln + 2 > size_r)
			return (0);
		while (ln-- >= 0)
			r[ln + 1] = r[ln];
		r[0] = a + '0';
	}
	return (r);
}

