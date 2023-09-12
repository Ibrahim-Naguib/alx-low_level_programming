#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: last number.
 */
void times_table(void)
{
	int i, j, multi;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = i * j;
				if (j == 0)
				{
					_putchar(multi + '0');
				}
				else if (multi < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + multi);
				}
				else if (multi >= 10 && multi < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (multi / 10));
					_putchar('0' + (multi % 10));
				}
				else if (multi >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (multi / 100));
					_putchar('0' + (multi / 10));
					_putchar('0' + (multi % 10));
				}
			}
			_putchar('\n');
		}
	}
}
