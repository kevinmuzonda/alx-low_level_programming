#include "main.h"
/**
  * _isupper - a function that checks for uppercase character.
  * @c: is an input integer
  * Return: 1 if c is uppercase or 0 if lowercase
 */
int _isupper(int c)
{
	char i;
	int upper = 0;

	for (i = 'A'; i  <= 'Z'; i++)
	{
		if (i == c)
			upper = 1;
	}
	return (upper);
}
