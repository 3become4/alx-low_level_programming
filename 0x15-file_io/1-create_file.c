#include "main.h"

/**
 * create_file - create_file
 *
 * @filename: filename
 * @text_content:text content in file
 *
 * Return: 1 on success, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, l);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

