#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of integers.
 * @separator: The character to separate the integers.
 * @n: The number of integers to print.
 * @...: The variable arguments list containing the integers.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
		{
			if (i != n - 1)
			{
				printf("%s", separator);
				printf(" ");
			}
		}
		else if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	va_end(args);
}
