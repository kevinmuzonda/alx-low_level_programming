#include <stdio.h>
#include "main.h"

/**
  * main - prints numbers from 1 - 100
  * For multiples of 3 we print Fizz instead.
  * For multioles of five we print Buzz
  * Return: Always (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("Buzz \n");
	return (0);
}
