#include "main.h"
/**
 * funx - natural square root of a number.
 *
 * @x: int
 * @y: int
 *
 * Return: natural square root of a number.
 */
int funx(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (funx(x, y + 1));
	else
		return (-1);
/**
 * _sqrt_recursion - natural square root of a number.
 *
 * @n: int
 *
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (funx(n, 1));
}
