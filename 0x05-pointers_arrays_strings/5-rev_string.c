#include "main.h"

/**
* rev_string - reverses a string.
*
* @s: string pointer
*
* Return: void
*/

void rev_string(char *s)
{
	int l = 0;
	int i;
	char x;

	while (s[l] && s[l] != '\0')
		++l;
	for (i = 0; i < l / 2; i++)
	{
		x = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = x;
	}
}
