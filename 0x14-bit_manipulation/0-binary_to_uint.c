#include "main.h"

/**
  * binary_to_uint- converts a binary to an unsigned int
  * @b: binary value
  * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int un = 0;
	int len = 0;
	int binary = 0;

	if (b == NULL)
	{
		return (0);
	}
	un = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			un += binary;
		}
	}
	return (un);
}
