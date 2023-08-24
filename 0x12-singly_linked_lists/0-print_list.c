#include "lists.h"

/**
 * strl - str len
 *
 * @str: pointer
 *
 * Return: len
 */
 int strl(char *x)
 {
 	int i = 0;

 	if (!x)
 		return (0);
 	while(*x++)
 		i++
 	return (i);
 }

/**
 * print_list - all the elements of a list_t list
 *
 * @h: pointer
 *
 * Return: all the elements of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", strl(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

