#include "main.h"
/**
 *_isdigit - Entry point
 *
 *Description: checks for a digit (0 through 9).
 *
 * @c: an input of char
 *
 * Return: 0 if fail 1 if digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
