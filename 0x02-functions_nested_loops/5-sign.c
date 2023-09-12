#include "main.h"
/**
 * print_sign - prints a sign after checking the number
 *
 * @n: The number to check.
 *
 * Return: 1 greater than 0, 0 if 0 and -1 if lower than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		_putchar('\n');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		_putchar('\n');
		return (-1);
	}
	return (0);
}
