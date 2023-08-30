#include "lists.h"

/**
 * free_listint_safe- function that frees a listint_t list.
 *
 * @h: pointer to first
 *
 * Return: free elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int x;
	listint_t *y;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			y = (*h)->next;
			free(*h);
			*h = y;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}

