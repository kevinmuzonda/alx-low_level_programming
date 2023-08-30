#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns length of a string.
 * @s: The string  measured.
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
