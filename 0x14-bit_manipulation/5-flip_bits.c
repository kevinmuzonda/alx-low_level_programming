
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: int value
 * @m: int value
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipper;

	for (flipper = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			flipper++;
		}
	}
	return (flipper);
}
