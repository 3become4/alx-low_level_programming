#include "main.h"

/**
* puts_half - prints half of a string
*
* @str: string pointer
*
* Return: void
*/

void puts_half(char *str)
{
	int l = 0;

	while (str[l] && str[l] != '\0')
		l++;
	for (l /= 2; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
