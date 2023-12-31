#include "main.h"

/**
 * print_number - entry point
 *
 * Description:function that prints an integer.
 *
 * @n: integer
 *
 * Return: int
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	} else
	{
		i = n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}
