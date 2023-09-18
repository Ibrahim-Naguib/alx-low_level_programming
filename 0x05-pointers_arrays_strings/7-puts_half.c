#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a newline.
 *
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int half;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	half = len / 2;
	if (len % 2 == 1)
	{
		half = (len + 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
