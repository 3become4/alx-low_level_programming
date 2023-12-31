#include "main.h"
/**
 * _strlen_recursion -   length of a string.
 *
 * @s: char pointer
 *
 *
 * Return: len of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
