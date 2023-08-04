#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers
 *
 * @argc: int
 * @argv: const arg
 *
 *
 * Return: 0 if success 1 if fail
 */
int main(int argc, char const *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
