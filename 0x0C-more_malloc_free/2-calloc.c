#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: n elements
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ch = malloc(nmemb * size);

	if (ch == NULL)
	{
		return (NULL);
	}

	i = 0;

	do {
		ch[i] = 0;
		i++;
	} while (i < (nmemb * size));
	return (ch);
}
