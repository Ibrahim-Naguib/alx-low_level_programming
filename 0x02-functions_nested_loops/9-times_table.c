#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: last number.
 */
void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multi = i * j;
			if (multi < 10)
			{
				_putchar('0' + multi);
			}
			else
			{
				_putchar('0' + multi / 10);
				_putchar('0' + multi % 10);

			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

			}
		}
		_putchar('\n');
	}
}
