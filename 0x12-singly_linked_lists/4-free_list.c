#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - that frees a list_t list.
 *
 * @head: pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *x, *y;

	x = head;
	while (x)
	{
		y = x->next;
		free(x->str);
		free(x);
		x= y;
	}
}

