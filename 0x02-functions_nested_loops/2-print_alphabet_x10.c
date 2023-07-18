#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 *Description: prints 10 times the alphabet, in lowercase.
 *
 *Return: always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 'a'; i < 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
