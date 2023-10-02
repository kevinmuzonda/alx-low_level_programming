#include "main.h"

/**
 * main - checker entry point
 * @argc: total arguments argv
 * @argv: array arguments
 * Return: always success 0
 */
int main(int argc, char **argv)
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, " Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);

		if (to == -1  || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
/**
  * close_file - function that  closes the file
  * @file: file information
  * Return: always (success)
  */
void close_file(int f)
{
	int c;

	c = close(f);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %di\n", f);
		exit(100);
	}
}
/**
 * create_buffer - set buffer to 1024
 * @filename: name of file
 * Return: always (success)
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cant write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
