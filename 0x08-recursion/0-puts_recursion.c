#include "main.h"

/**
 * _puts_recursion - Print a string recursively
 * @s: Pointer to the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	putchar(*s);
	_puts_recursion(s + 1);
}
