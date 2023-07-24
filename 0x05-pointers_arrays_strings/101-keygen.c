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
	int i;
	char x;

	srand(time(NULL));
	while (i <= 2850)
	{
		x = rand() % 128;
		i += x;
		putchar(x);
	}
	putchar(2977 - i);
	return (0);
}
