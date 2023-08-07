#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print it to POSIX stdout
 * @filename: A pointer to the name the file
 * @letters: The number of letter the function should read and print.
 * Return: If the function fail or filename is NULL 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	i = open(filename, O_RDONLY);
	r = read(i, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (i == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(i);

	return (w);
}
