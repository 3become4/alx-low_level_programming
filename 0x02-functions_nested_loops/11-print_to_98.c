#include "main.h"

/**
 *print_to_98 - Entry point
 *
 *Description: all natural numbers from n to 98
 *
 * @n: input 1
 *
 *Return: all natural numbers from n to 98
*/

int print_to_98(int n)
{
	int c;

	if (n > 98)
		for (c = n; c > 98; c--)
			printf("%d, ", c);
	else
		for (c = n; c < 98; c++)
			printf("%d, ", c);
	printf("98\n");
}
