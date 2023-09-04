#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: filename
 * @letters:letters in file
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	bufer = malloc(sizeof(char) * letters);
	z = read(x, bufer, letters);
	y = write(STDOUT_FILENO, bufer, z);

	free(bufer);
	close(x);
	return (y);
}

