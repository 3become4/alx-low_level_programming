#include "main.h"
/**
 *more_numbers - Entry point
 *
 *Description: prints numbers from 0 to 14
 *
 * Return: result
*/

void more_numbers(void)
{
	int i, l, x;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i < 15; i++)
		{
			x = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				x = i % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
