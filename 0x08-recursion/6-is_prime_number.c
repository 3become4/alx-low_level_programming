#include "main.h"
/**
 * funx -  is a prime number
 *
 * @x: int
 * @y: int
 *
 * Return: 1 is a prime number 0 isnt
 */
int funx(int x, int y)
{
	if (x == 2)
		return (1);
	else if (x % y == 0 || x <= 1)
		return (0);
	else
		return (funx(x, y + 1));
}
/**
 * is_prime_number -  is a prime number
 *
 * @n: int
 *
 * Return: 1 is a prime number 0 isnt
 */
int is_prime_number(int n)
{
	return (funx(n, 2));
}
