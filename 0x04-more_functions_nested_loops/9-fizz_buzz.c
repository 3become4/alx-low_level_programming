#include "main.h"
/**
 *main - Entry point
 *
 *Description: 1 to 100, with conditions.
 *
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}

	return (0);
}
