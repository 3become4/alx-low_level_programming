#include "main.h"
/**
 *_isupper - Entry point
 *
 *Description: checks for uppercase character.
 *
 * @c: an input of char
 *
 * Return: 0 if fail 1 if uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
