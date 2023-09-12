#include "main.h"
/**
 * print_alphabet - Prints the alphabet 10 times
 *
 * Return: Void.
 */
void print_alphabet(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	_putchar('\n');
	}
}
