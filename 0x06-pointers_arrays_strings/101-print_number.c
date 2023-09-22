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
	if (n == 0)
	{
		_putchar('0');
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int reversed = 0;

	while (n > 0)
	{
		int digit = n % 10;

		reversed = reversed * 10 + digit;
		n /= 10;
	}

	while (reversed > 0)
	{
		int digit = reversed % 10;

		_putchar('0' + digit);
		reversed /= 10;
	}
}
