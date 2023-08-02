#include "main.h"
/**
 * factorial - factorial
 *
 * @n: char pointer
 *
 *
 * Return: factorial of string -1 if error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
