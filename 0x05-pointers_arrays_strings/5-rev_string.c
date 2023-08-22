#include "main.h"

/**
  * rev_string - prints a string in reverse
  * @s: pointer to a string.
  * Return: always (success).
 */
void rev_string(char *s)
{
	int n = 0, r = 0;
	char str[20];

	while (*(s + n))
	{
		*(str + n) = *(s + n);
		n++;
	}
	n = n  - 1;
	while (n >= 0)
	{
		*(s + n) = *(str + r);
		r++;
		n--;
	}
}
