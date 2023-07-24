#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 *
 * Return: 0
 */
int main(void)
{
	int pass[80];
	int i, x, y;

	x = 0;	

	srand(time(NULL));

	for (i = 0; i < 80; i++)
	{
		pass[i] = rand() % 78;
		x += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - x) - '0' < 78)
		{
			y = 2772 - x - '0';
			x += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}

