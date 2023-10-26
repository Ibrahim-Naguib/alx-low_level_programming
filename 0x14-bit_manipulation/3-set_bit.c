#include "main.h"

/**
 * set_bit - Sets a bit at a specific index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set.
 *
 * Return: 1 if the operation is successful, or -1 not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
