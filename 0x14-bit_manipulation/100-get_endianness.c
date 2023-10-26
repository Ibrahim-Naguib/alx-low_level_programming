#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if the machine is little-endian, 1 if it is big-endian.
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
