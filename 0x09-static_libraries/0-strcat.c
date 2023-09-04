#include "main.h"

/**
  * _strcat - Concatenate two strings.
  * @dest: this is a parameter.
  * @src: this is a parameter.
  * Return: Always (sucess).
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}

