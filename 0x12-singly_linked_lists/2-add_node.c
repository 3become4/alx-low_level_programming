#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node at the beginning of a list_t list.
 *
 * @head: double pointer
 * @str: new string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int l = 0;

	while (str[l])
		l++;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = l;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
