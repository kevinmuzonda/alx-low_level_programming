#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program that prints the name of a file it was compiled from
  *  
  * Return: Always(success)
 */
int main(void)
{
	printf("%s\n",__FILE__);
	return (0);
}
