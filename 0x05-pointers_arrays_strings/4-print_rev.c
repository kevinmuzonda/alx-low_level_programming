#include "main.h"

/**
  * print_rev - prints a string in reverse format with newline
  * @s: pointer to the string.
  * Return: Always (success).
 */
void print_rev(char *s)
{
	int reverse = 0;

	while (s[reverse])
	{
		reverse++;
	}
	while (reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar('\n');
}
