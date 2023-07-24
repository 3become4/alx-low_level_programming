#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid passwords
*
*
* Return: 0
*/

int main(void)
{
	int password[100];
	int i, x, y;

	x = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 128;
		x += (password[i] + 48);
		putchar(password[i] + 48);
		if ((2772 - x) - 48 < 128)
		{
			y = 2772 - x - 48;
			x += y;
			putchar(x + 48);
			break;
		}
	}
	return (0);
}
