#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to first
 * @index: the nth node
 *
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x;
	unsigned int i;

	for (x = head, i = 0; x && i < index; x = x->next, i++)
		;
	return (x);
}
