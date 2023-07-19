#ilude "main.h"
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
	int i;
	unsigned long l1 = 0, r1 = 1, n3;
	unsigned long l1_h1, l1_h2, r1_h1, r1_h2;
	unsigned long h1, h2;

	for (i = 0; i < 92; i++)
	{
		n3 = l1 + r1;
		printf("%lu, ", n3);
		l1 = r1;
		r1 = n3;
	}
	l1_h1 = l1 / 10000000000;
	r1_h1 = r1 / 10000000000;
	l1_h2 = l1 % 10000000000;
	r1_h2 = r1 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		h1 = l1_h1 + r1_h1;
		h2 = l1_h2 + r1_h2;
		if ((l1_h2 + r1_h2) > 9999999999)
		{
		h1 += 1;
		h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
			printf(", ");

		l1_h1 = r1_h1;
		l1_h2 = r1_h2;
		r1_h1 = h1;
		r1_h2 = h2;
	}
	printf("\n");
	return (0);
}
