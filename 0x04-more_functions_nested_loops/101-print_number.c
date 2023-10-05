#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: number to be printed.
 * Return: void
 */

void print_number(int n)
{
	int num = n;
	int j;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		int digits[10];
		int i = 0;

		while (num > 0)
		{
			digits[i] = num % 10;
			num /= 10;
			i++;
		}

		for (j = i - 1; j >= 0; j--)
		{
			_putchar(digits[j] + '0');
		}
	}
}
