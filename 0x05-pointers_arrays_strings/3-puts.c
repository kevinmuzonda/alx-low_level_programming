#include "main.h"

/**
  * _puts - prints a string with a new line
  * @str: is a string.
  * Return: always (success)
 */
void _puts(char *str)
{
	int x;

	 while(str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
