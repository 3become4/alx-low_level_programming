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
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
