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
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}

