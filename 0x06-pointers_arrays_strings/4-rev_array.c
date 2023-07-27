#include "main.h"
/**
 * reverse_array - reverses int array.
 *
 * @a: int pointer
 * @n: int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *x = *a;
	int i = 0;

	while (x[i])
	{
		a[(n - 1) - i] = x[i];
		i++;
	}
}
