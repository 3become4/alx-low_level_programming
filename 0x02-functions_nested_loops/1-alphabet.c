#include "main.h"

/**
 *print_alphabet - Entry point
 *
 *Description: prints the alphabet, in lowercase, followed by a new line.
 *
 *Return: always 0 (Success)
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
