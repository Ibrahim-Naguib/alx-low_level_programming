#include <stdio.h>

/**
 * print_triangle - prints a triangle of #.
 *
 * @size: size of the triangle.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
