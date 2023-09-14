#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 *
 * Description: This function prints the numbers 0 to 9.
 * It does not take any parameters and does not return a value.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

