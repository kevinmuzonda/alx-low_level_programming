#include "main.h"

/**
  * _strstr - finds an occurrence of the substring
  * @haystack: searches for a specific word/character
  * @needle: puts to word together.
  * Return: Always (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
