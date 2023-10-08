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
	unsigned long int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
	} while (*s++);
	return (num * sign);
}

/**
 * _puts - Prints a string followed by a new line.
 * @s: string to be printed
 *
 * Return: void
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
 * print_number - prints an integer.
 *
 * @n: number to be printed.
 * Return: void
 */

void print_number(unsigned long int n)
{
	int temp = num;
	int numDigits = 0, i, digit;

	while (temp > 0)
	{
		temp /= 10;
		numDigits++;
	}
	for (i = 0; i < numDigits; i++)
	{
		digit = num % 10;
		_putchar('0' + digit);
		num /= 10;
	}
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

	void(argc);
	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_number(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
