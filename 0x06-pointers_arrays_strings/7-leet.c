#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @n: string input
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, l;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (l = 0; l < 10; l++)
		{
			if (n[i] == x[l])
			{
				n[i] = y[l];
			}
		}
	}
	return (n);
}

