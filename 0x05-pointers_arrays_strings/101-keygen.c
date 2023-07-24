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
		password[i] = rand() % 78;
		x += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - x) - '0' < 78)
		{
			y = 2772 - x - '0';
			x += y;
			putchar(x + '0');
			break;
		}
	}
	return (0);
}
