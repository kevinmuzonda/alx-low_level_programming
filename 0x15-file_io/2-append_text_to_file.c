#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: filename
 * @text_content: content to append
 * Return: 1 file exists, -1 on fail & doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int read;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		read = write(file, text_content, letters);

		if (read == -1)
			return (-1);
	}

	close(file);

	return (1);
}
