#include "main.h"
/**
 *print_numbers - Entry point
 *
 *Description: prints the numbers from 0 to 9
 *
 * Return: result
*/

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + 48);
		_putchar('\n');
	}
	return (0);
}
