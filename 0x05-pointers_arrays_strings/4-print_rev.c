#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a newline.
 *
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
