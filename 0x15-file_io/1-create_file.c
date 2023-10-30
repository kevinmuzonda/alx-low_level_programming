#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename
 * @text_content: content writed
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file, letters, read;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	read = write(file, text_content, letters);

	if (read == -1)
		return (-1);
	close(file);

	return (1);
}
