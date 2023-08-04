#include <stdio.h>
/**
 * main -  prints the number of arguments passed 
 *
 * @argc: int
 * @argv: const arg
 *
 *
 * Return: void
 */
int main(int argc, char const *argv[])
{
	(void) argc;
	printf("%d\n", (argc - 1));
	return (0);
}
