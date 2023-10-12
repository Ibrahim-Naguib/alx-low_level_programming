#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings.
 * @separator: The character to separate the strings.
 * @n: The number of strings to print.
 * @...: The variable arguments list containing the strings.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (*str != '\0')
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL)
		{
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		else if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	va_end(args);
}
