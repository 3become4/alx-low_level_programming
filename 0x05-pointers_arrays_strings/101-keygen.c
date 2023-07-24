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

	while (i <= 32767)
	{
		x = rand() % 128;
		i += x;
		putchar(x);
	}
}
