#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: the name of the file
 * @letters: number of letters should be read and printed.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the number of bytes the function read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Op, Rea, Wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	Op = open(filename, O_RDONLY);
	Rea = read(Op, buff, letters);
	Wr = write(STDOUT_FILENO, buff, Rea);

	if (Op == -1 || Rea == -1 || Wr == -1 || Wr != Rea)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(Op);

	return (Wr);
}
