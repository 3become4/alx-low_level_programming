#include "main.h"

/**
 * create_file - create_file
 *
 * @filename: filename
 * @text_content:text content in file
 *
 * Return: number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	int x, l;
	ssize_t b = 0;

	for (l = 0; text_content[l])
		l++

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_CREAT | O_RDWR | O_TRUNC | S_IWUSR);
	if (x == -1)
		return (-1);
	if (l)
		b = write(x, text_content, l);
	close(x);
	if (b == l)
		return (1);
	else
		return (-1)
}

