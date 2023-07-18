#include "main.h"

/**
 *main - Entry point
 *
 *Description: prints the sum of the even-valued terms
 *
 *
 * Return: always 0
*/

int main(void)
{
	long l = 0, r = 1, s;
	float t;

	while (1)
	{
		s = l + r;

		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			t += s;

		l = r;
		r = s;
	}
	printf("%.0f\n", t);

	return (0);
}
