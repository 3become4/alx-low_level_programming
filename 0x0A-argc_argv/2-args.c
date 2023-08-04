#include <stdio.h>
/**
 * main -  all arguments it receives
 *
 * @argc: int
 * @argv: const arg
 *
 *
 * Return: void
 */
int main(int argc, char const *argv[])
{
	int i;

	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
