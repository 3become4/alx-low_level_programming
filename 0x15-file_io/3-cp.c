
#include "main.h"


/**
 * create_buffer - 1024 bytes for buffer
 *
 * @file: file name
 *
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *x;

	x = malloc(sizeof(char) * 1024);

	if (x == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (x);
}

/**
 * close_file - closes file
 *
 * @fd: The file to be closed
 *
 * Return: void
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main -  copies the content of a file to another file.
 *
 * @argc: num of args
 * @argv: pointer to args
 *
 * Return: 0 or fail
 */
int main(int argc, char *argv[])
{
	int from, to;
	char *buff;
	int r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
