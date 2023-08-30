#include "main.h"
#include <stdio.h>

/**
  * square_root - function that returns a sqaure root
  * @i: input number.
  * @j: second input.
  * Return: always(succes).
 */
int square_root(int i, int j)
{
	if (i * i > j)
	{
		return (-1);
	}
	else if (i * i == j)
	{
		return (j);
	}
	return (square_root(i, j + 1));
}
/**
  * _sqrt_recursion - a function that returns a sqaure root
  * @n: number to find the square root
  * Return: Always (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 1));
}
