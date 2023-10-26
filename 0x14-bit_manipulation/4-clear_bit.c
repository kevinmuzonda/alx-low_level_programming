#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: ptr of an unsigned long int
 * @index: index to change
 * Return: 1 if it worked, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
	{
		*n ^= i;
	}
	return (1);
}
