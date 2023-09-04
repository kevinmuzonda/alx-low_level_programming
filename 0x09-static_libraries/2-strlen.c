#include "main.h"

/**
  * _strlen - Function returns the length of a string
  * @s: points to  a string
  * Return: Always  (success).
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;

	}
	return (length);
}
