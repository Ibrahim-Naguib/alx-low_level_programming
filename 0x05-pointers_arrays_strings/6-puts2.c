#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a newline.
 *
 * @str: The string to be printed.
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str += 2;
	}
	_putchar('\n');
}
