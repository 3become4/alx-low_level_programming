#include "main.h"

/**
 *print_last_digit - Entry point
 *
 *Description:  prints the last digit of a number.
 *
 * @n: input
 *
 *Return: last of n
*/

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;
	_putchar(l + 48);
	return (l);
}
