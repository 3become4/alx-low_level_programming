#include "main.h"

/**
 *main - Entry point
 *
 *Description: prints the first 50 Fibonacci numbers
 *
 *
 * Return: always 0
*/

int main(void)
{
	int i;
	long l = 0, r = 1, s;

	for (i = 0; i < 50; i++)
	{
		s = l + r;
		printf("%lu", s);

		l = r;
		r = s;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
