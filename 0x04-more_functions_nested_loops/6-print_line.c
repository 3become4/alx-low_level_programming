#include "main.h"
/**
 *print_line - Entry point
 *
 *Description: draws a straight line in the terminal.
 *
 * @n: number
 *
 * Return: result
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
