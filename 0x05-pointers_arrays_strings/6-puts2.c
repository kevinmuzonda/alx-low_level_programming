#include "main.h"

/**
  * puts2 - prints every character of a string
  * @str: the string characters being printed.
  * Return: Always(success).
 */
void puts2(char *str)
{
	int n = 0, a = 0;

	while (str[a++])
	{
		n++;
	}
	for (a = 0; a < n; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
