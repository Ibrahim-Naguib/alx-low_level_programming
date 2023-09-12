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
			if (j == 0)
			{
				_putchar(multi + '0');
			}
			if (multi < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + multi / 10);
				_putchar('0' + multi % 10);
			}
		}
		_putchar('\n');
	}
}
