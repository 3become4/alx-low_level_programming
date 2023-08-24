#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: double pointer
 * @str: new string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x = malloc(sizeof(list_t));
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = l;
	x->next = NULL;

	if (!*head)
	{
		*head = x;
		return (x);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = x;

	return (x);
}

