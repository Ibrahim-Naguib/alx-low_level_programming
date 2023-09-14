#include "main.h"

/**
 * print_diagonal - Prints a diagonal line.
 *
 * @n: The number of \ to print.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
	putchar('\n');
}

