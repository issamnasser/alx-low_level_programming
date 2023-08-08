#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buff
 * @file: The name of the file buff is storing chars for
 *
 * Return: the newly-allocated buff
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int C;

	C = close(fd);

	if (C == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of file to another
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if success
 *
 * Description: If the argument count is incorrect/exit code 97
 *              If file_from is not exist or cannot be read/exit code 98
 *              If file_to can not be created or written to/exit code 99
 *              If file_to or file_from can not be closed/exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, Rea, Wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	Rea = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || Rea == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		Wr = write(to, buff, Rea);
		if (to == -1 || Wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		Rea = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (Rea > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
