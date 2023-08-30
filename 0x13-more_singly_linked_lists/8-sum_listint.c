#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t
 *
 * @head: pointer to first
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	while (x)
	{
		sum += x->n;
		x = x->next;
	}

	return (sum);
}

