#include "main.h"

/**
 *nl - Entry point
 *
 *Description:  get len of num
 *
 * @x: a number
 *
 * Return: len of num
*/

int nl(int x)
{
	int l = 0;

	if (!x)
		return (1);
	while (x)
	{
		x = x / 10;
		l += 1;
	}
	return (l);
}
/**
 *main - Entry point
 *
 *Description:  the first 98 Fibonacci numbers, starting with 1 and 2
 *
 *
 * Return: always 0
*/

int main(void)
{
	int i, init;
	long l = 1, r = 2, s, end = 100000000, l1 = 0, r1 = 0, s1 = 0;

	for (i = 0; i <= 98; i++)
	{
		if (l1 > 0)
			printf("%lu", l1);
		init = nl(end) - 1 - nl(l);
		while (l1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", l);

		s = (l + r) % end;
		s1 = l1 + r1 + (l + r) / end;
		l = r;
		l1 = r1;
		r = s;
		r1 = s1;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
