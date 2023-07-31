#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @b: char input
 * @s: char pointer
 * @n: int size
 *
 * Return: s pointer memory
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

