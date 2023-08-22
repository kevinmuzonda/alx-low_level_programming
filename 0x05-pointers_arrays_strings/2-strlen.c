#include "main.h"

/**
  * _strlen - Function returns the length of a string
  * @s: points to  a string
  * Return: Always  (success).
 */
int _strlen(char *s)
{
	int length = 0;

	do {
		length++;

	} while (s[length] != '\0');
	return (length);
}
