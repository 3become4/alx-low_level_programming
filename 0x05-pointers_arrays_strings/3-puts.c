#include "main.h"

/**
* _puts - prints a string followed by a new line
*
* @str: string 1 pointer
*
* Return: void
*/

void _puts(char *str)
{
	int count;

	for (count = 0; *str != '\0'; str++)
	{
		_putchar(*str[count] + 0);
		count++;
	}
	_putchar('\n');
}
