#include "main.h"
#include <stdio.h>

/**
  * _puts - prints a string with a new line
  * @str: is a string.
  * Return: always (success)
 */
void _puts(char *str)
{
	int x;

	do {
		_putchar(str[x]);
		x++;
	} while (str[x]);
	_putchar('\n');
}
