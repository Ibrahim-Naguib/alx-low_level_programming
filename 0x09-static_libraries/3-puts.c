#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void _puts(char *s)
{
	while (*s != '\0') {
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
