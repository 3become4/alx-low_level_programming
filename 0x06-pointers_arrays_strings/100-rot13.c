#include "main.h"
/**
 * rot13 - encodes a string into rot13
 *
 * @n: string input
 *
 * Return: n
 */
char *rot13(char *n)
{
	int i, l;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (l = 0; l < 52; l++)
		{
			if (n[i] == x[l])
			{
				n[i] = y[l];
				break;
			}
		}
	}
	return (n);
}

