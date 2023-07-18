#include "main.h"

/**
 *_islower - Entry point
 *
 *Description: checks for lowercase character.
 *
 * @c: input of function
 *
 *Return: 1 (if lower case) and 0 (Success)
*/

int _islower(int c);
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
