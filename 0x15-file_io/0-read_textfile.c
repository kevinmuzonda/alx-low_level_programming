#include "main.h"

/**
  * read_textfile - reads a text file and prints itto POSIX stdout
  * @filename: name of the file
  * @letters: amout of letters printed out
  * Return: actual amount of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nrd, count;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
	{
		return (0);
	}
	nrd = read(file, buffer, letters);
	count = write(STDOUT_FILENO, buffer, nrd);

	close(file);
	free(buffer);

	return (count);
}
