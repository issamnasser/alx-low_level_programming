#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end
 *                      of file
 *
 * @filename: the name of the file
 * @text_content: text content
 *
 * Return: 1 on success or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, app_status, words = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;
		app_status = write(file, text_content, words);
		if (app_status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
