#include <unistd.h>
/**
 *main - Entry point
 *
 *Description: print a sentance using write
 *	int write(int fd , void *buf, size_t n)
 *
 *Return: always 1 (fail)
*/

int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, x, strlen(x));
	return (1);
}
