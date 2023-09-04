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
	int x, y, l;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, l);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}

