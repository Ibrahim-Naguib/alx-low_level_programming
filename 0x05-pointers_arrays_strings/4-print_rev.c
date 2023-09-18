#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a newline.
 *
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
