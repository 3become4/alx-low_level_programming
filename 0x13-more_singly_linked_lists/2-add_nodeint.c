#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 *
 * @head: pointer to first
 * @n: data
 *
 * Return: nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
