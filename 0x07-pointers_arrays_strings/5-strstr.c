#include "main.h"
/**
 * _strstr - locates a substring.
 *
 * @haystack: char input pointer
 * @needle: char pointer
 *
 * Return: pointer to the beginning of the located needle.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		*h = haystack;
		*n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}
