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
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
