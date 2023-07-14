#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Description: all different combinations of two digits no repeat
 *
 *Return: always 0 (Success)
*/

int main(void)
{
	int x = 0;
	int y = 0;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			if (x < y)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
