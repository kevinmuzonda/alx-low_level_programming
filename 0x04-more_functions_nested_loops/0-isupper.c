#include "main.h"
/**
  * _isupper - a function that checks for uppercase character.
  * @c: is an input integer
  * Return: 1 if c is uppercase or 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
