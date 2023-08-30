#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 *
 * @head: pointer to first
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (i);
}

