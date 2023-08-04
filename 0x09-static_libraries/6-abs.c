#include "main.h"

/**
 *_abs - Entry point
 *
 *Description: checks for alphabetic character.
 *
 * @n: input
 *
 *Return: abs of n
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
