#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file u wanna read
 * @letters: the number of letters it should read and print
 * Return: number of letters it could read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, w, r;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (w);
}
