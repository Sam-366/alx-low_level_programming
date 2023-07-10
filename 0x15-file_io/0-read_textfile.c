#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - function that reads a textfile
  * @filename: file name
  * @letters: number of characters
  * Return: number of letters.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}

