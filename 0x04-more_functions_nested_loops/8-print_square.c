#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size:  is the size of the square
 * @#: The character to print the square
 * Return: Nothing
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} 
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
