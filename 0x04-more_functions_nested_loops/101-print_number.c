#include <stdio.h>

/**
 * print_number - prints an integer.
 *
 * @n: number to be printed.
 * Return: void
 */

void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		putchar('0');
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

		for (int j = i - 1; j >= 0; j--)
		{
			putchar(digits[j] + '0');
		}
	}
}
