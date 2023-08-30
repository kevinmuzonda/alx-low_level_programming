#include "main.h"

/**
  * factorial - function that returns a given number
  * @n: an integer number
  * Return: Always (success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
