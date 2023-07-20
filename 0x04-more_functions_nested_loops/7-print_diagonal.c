#include "main.h"
/**
 *print_diagonal - Entry point
 *
 *Description: draws a diagonal line on the terminal.
 *
 * @n: number
 *
 * Return: result
*/

void print_diagonal(int n)
{
	int i, l;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		for (l = 0; l < i; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
