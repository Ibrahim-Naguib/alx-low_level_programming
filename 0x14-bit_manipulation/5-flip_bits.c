#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that need to be flipped to convert n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
