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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
