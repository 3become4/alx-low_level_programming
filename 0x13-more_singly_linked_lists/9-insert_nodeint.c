#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position.
 *
 * @head: pointer to first
 * @idx: index
 * @n: data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (i = 0; y && i < idx; i++)
	{
		if (i == idx - 1)
		{
			x->next = y->next;
			y->next = x;
			return (x);
		}
		else
			y = y->next;
	}

	return (NULL);
}

