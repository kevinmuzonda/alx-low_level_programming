#include "main.h"

/**
  * more_numbers - A function that prints more numbers.
  *
  * Return: Always (Success).
 */
void more_numbers(void)
{
	int a;
	int b = 0;

	for (; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}

