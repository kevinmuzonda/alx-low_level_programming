#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: contains integer
 * @argv: contains string variables
 * Return: always(success)
*/
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;
	printf("%d\n", sum);
	return (0);
}
