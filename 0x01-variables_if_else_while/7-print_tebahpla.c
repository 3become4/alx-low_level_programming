#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Description: all single digit numbers of base 10 starting from 0
 *
 *Return: always 0 (Success)
*/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		x++;
	}
	putchar("\n");
	return (0);
}
