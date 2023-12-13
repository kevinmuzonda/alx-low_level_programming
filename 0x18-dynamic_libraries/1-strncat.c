#include "main.h"

/**
 * _strncat - concatenate two strings n bytes from src
 * @dest: this is a parameter
 * @src: this is a parameter
 * @n: a parameter showing most bytes
 * Return: Always (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
