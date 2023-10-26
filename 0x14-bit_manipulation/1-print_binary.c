#include "main.h"

/**
 * print_binary - Prints the binary of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary form.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
