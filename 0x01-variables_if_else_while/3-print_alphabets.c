#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char ch;
	char ch1;
	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
		for (ch1 = 'A'; ch1 < 'Z'; ch1++)
		{
			putchar(ch1);
		}
	putchar('\n');
	return (0);
}
