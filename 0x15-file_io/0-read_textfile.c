#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output
 * @filename: name of the file.
 * @letters: number of letters to read
 *           
 *
 * Return: the actual number of letters it could read and print
 *         if the file can not be opened or read, return 0
 *         if filename is NULL return 0
 *         if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rea, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rea = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, r);

	if (op == -1 || rea == -1 || wr == -1 || wr != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (wr);
}
