#include "main.h"

/**
 *  more_numbers- Prints the numbers from 0 to 14.
 *
 * Description: This function prints the numbers 0 to 14.
 * It does not take any parameters and does not return a value.
 */

void more_numbers(void)
{
	int i, j;
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
