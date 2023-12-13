#include "main.h"

/**
  * _puts - prints a string with a new line
  * @str: is a string.
  * Return: always (success)
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
