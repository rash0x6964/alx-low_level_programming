#include "main.h"

/**
 * create_file - Creates a file and fill it
 * @filename: the name of the file u should create.
 * @text_content: string u should write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content && text_content[len])
		len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

