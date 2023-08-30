#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 *
 * @head: pointer to first
 * @index: index
 *
 * Return: the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *now = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	while (i < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		i++;
	}


	now = x->next;
	x->next = now->next;
	free(now);

	return (1);
}
