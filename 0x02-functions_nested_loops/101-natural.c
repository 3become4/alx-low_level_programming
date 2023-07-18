#include "main.h"

/**
 *main - Entry point
 *
 *Description: prints the sum of all the multiples of 3 or 5 below 1024
 *
 *
 * Return: always 0
*/

int main(void)
{
	int s, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			s += i;
	}
	printf("%d\n", s);

	return (0);
}
