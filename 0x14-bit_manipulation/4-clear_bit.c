#include "main.h"

/**
 * clear_bit - Clears a bit at a specific index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if the operation is successful, or -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
