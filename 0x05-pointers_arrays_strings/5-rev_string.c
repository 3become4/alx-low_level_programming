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
	int i = 0;
	int l;
	char x;

	while (s[i] && s[i] != '\0')
		i++;
	for (l = 0; l < i; l--)
	{
		x = s[l];
		s[l] = s[i - l];
		s[i - 1 - l] = x;
	}

}
