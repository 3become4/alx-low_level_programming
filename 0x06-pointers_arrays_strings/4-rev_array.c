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
	int i;
	int x;
	int tmp;

	x = n - 1;
	for (i = 0; i < x; i++)
	{
		tmp = a[i];
		a[i] = a[x];
		a[x] = tmp;
		x--;
	}
}
