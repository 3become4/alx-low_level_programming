#include "function_pointers.h"

/**
 * array_iterator -  parameter on each element of an array.
 *
 * @array: int array
 * @size: size
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
	{
		while (array <= x)
			action(*array++);
	}
}
