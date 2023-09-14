#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9.
 *
 * Description: This function prints the numbers 0 to 9 but will skip 2 and 4.
 * It does not take any parameters and does not return a value.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}

