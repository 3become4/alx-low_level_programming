#include "main.h"
#include <math.h>
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
		x = floor(log10(abs(end))) + 1;
		y = floor(log10(abs(l))) + 1;
		init = x - 1 - y;
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
