#include "main.h"
/**
 * stlen - str len
 *
 * @l: int
 *
 * Return: str len
 */
int stlen(char *l)
{
	if (*l == '\0')
		return (0);
	return (1 + _strlen_recursion(l + 1));
}
/**
 * checker - checks if the string is right
 *
 * @x: char pointer
 * @y: int
 * @l: int
 *
 * Return: actual checker
 */
int checker(char *x, int y, int l)
{
	if (*(x + y) != *(x + l - 1))
		return (0);
	if (y >= l)
		return (1);
	return (check_pal(x, y + 1, l - 1));
}

/**
 * is_palindrome -  if a string is a palindrome
 *
 * @s: char
 *
 * Return: 1 is palindrome.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, stlen(s)));
}
