#include "main.h"

/**
 *_isalpha - Entry point
 *
 *Description: checks for alphabetic character.
 *
 * @c: check for input
 *
 *Return: 1 (if lower case) and 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
