#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints all arguments it receives
  * @argc: contains integer arguments
  * @argv: contains string arguments
  * Return: always(success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
