#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and print it 
 * @filename: name of the file
 * @letters: number of letters to read
 *           
 * Return: the actual number of letters it could read and print
 *         if the file can not be opened or read, return 0
 *         if filename is NULL return 0
 *         if write fails or does not write the expected amount of bytes, return 0
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
