#include "main.h"

/**
  * print_numbers - a function that prints numbers
  *
  * Return: Always return (Success).
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
