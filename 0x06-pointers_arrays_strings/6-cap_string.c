#include "main.h"
/**
 * cap_string - all uppercase.
 *
 * @s: string input
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;
	int l = 0;
	int dd = 0;
	char d[] = " \t\n,.!?\"(){}";

	while (s[i] && s[i] != '\0')
	{
		for (l = 0; l < 12; l++)
		{
			if (s[i] == d[l])
				dd = 1;
		}
		if (s[i] >= 97 && s[i] <= 122 && dd == 1)
		{
			s[i] = s[i] - 32;
			dd = 0;
		}
		i++;
	}
	return (s);
}
