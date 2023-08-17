#include "3-calc.h"

/**
 * main - Prints the result operations.
 *
 * @argc: num of arg.
 * @argv: pointer array
 *
 * Return: 0
 */
 int main(int argc, char **argv)
 {
 	int x, y;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	op_func = get_op_func(argv[2]);
	y = atoi(argv[3]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == "/" || argv[2][0] == "%"))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(x, y));
	return (0);
 }
