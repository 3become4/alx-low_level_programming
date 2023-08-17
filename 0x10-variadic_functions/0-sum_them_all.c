#include "variadic_functions.h"

/**
* sum_them_all - sum of all its parameters.
*
* @n: num of permpassed.
* @...: perms to sum
*
* Return: 0 if 0 or sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, s = 0;

	if (!n)
		return (0);
	va_start(x, n);

	for (i = 0; i < n; i++)
		s += va_arg(x, int);

	va_end(x);

	return (s);
}

