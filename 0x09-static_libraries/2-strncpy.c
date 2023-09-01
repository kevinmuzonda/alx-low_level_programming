#include "main.h"

/**
  * _strncpy - copies a string2 into string1
  * @dest: this is a parameter
  * @src: this is a parameter
  * @n: value
  * Return: Always (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
