#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>


/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * is_number - Check if a string represents a valid number.
 * @str: The input string to check.
 *
 * Return: 1 if str is a valid number, 0 otherwise.
 */

int _isdigit(char *str)
{
	int i;

	if (str == NULL || str[0] == '\0')
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * print_number - prints an integer.
 *
 * @n: number to be printed.
 * Return: void
 */

void print_number(unsigned int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}

/**
 * main - Multiply two numbers provided as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 if successful, 1 if an error occurs.
 */

int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error ");
		exit(98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	print_number(mul);
	_putchar('\n');
	return (0);
}

