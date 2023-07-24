#include "main.h"

/**
* print_rev - prints a string, in reverse
*
* @s: string 1 pointer
*
* Return: void
*/

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
