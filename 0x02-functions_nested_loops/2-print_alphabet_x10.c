#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int ch;
	int l;

	for (l = 1; l <= 10; l++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
