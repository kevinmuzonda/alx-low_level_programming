#include "main.h"

/**
  * rev_string - prints a string in reverse
  * @s: pointer to a string.
  * Return: always (success).
 */
void rev_string(char *s)
{
	
	int a = 0, b = 0;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}

	while (b < a--)
	{
		c = s[b];
		s[b++] = s[a];
		s[a] = c;
	}
}
