#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers from min val to max val
 * @min:range min val
 * @max: range max val
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;

	a = malloc(sizeof(int) * j);

	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		a[i] = min++;
	}
	return (a);
}
