#include "main.h"
/**
 *print_square - Entry point
 *
 *Description: prints a square
 *
 * @size: number
 *
 * Return: result
*/

void print_square(int size)
{
	int i, x;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
