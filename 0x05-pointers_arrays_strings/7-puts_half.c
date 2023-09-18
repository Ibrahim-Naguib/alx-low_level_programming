#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a newline.
 *
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		half = ((len - 1) / 2);
	}
	else
	{
		half = len / 2;
	}
	while (str[half])
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
