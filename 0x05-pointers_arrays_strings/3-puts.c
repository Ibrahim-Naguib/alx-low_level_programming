#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 *
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
