#include "main.h"
/**
 *print_most_numbers - Entry point
 *
 *Description: prints numbers from 0 to 9 not 2 | 4
 *
 * Return: result
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
