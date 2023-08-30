#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 *
 * @h: linked list
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}

