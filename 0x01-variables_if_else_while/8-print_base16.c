#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Description: base 16 lowercase
 *
 *Return: always 0 (Success)
*/

int main(void)
{
	int x = 48;

	while (x <= 102)
	{
		putchar(x);
		if (x == 57)
		{
			x = 96;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
