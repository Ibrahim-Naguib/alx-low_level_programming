#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
		_puts("Error");
		exit(98);
	}
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	print_number(mul);
	_putchar('\n');
	return (0);
}
