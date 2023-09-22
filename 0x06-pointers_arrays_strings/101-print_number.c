#include "main.h"

/**
 * print_number - Print an integer as characters.
 *
 * This function takes an integer as input and prints it as a sequence of
 * characters using _putchar. If the input is negative, a minus sign is printed
 * first.
 *
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int n1;
	n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
