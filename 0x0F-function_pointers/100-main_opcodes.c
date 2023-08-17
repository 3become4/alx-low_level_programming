#include <stdio.h>
#include <stdlib.h>

/**
* main - opcodes of its own main function.
*
* @argc: num of arg.
* @argv: pointer array
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int b, i;
	char *x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	x = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", x[i]);
			break;
		}
		printf("%02hhx ", x[i]);
	}
	return (0);
}
