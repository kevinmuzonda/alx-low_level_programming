#include "main.h"

/**
 * char *_strcpy - a function that copies the string
 * @dest: copy to
 * @src: copy from
 * Return: always (succes)
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (x = 0; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
