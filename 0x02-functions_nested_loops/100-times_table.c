#include "main.h"
/**
 * print_times_table- prints the n times table
 *
 *@n: number of times
 *
 * Return: table.
 */
void print_times_table(int n)
{
	int i, j, multi;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = j * i;
				if (j == 0)
				{
					_putchar(multi + '0');
				} else if (multi < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi + '0');
				} else if (multi >= 10 && multi < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi / 10) + '0');
					_putchar((multi % 10) + '0');
				} else if (multi >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
