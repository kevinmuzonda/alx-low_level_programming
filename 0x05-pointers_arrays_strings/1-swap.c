#include "main.h"
#include <stdio.h>

/**
  * swap_int - swaps two integers
  * @a: this is the first int 98.
  * @b: this is the second int 42.
  * Return: (a=42 ,b=98)
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
