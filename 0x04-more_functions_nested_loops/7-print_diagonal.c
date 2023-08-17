#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
