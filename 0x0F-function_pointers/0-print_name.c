#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - a function that prints a name
  * @name: name of the person
  * @f: pointer
  * Return: Always(success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
