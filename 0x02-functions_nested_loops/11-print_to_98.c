#include "main.h"
/**
 * print_to_98 - print all numbers to 98
 *
 * @n: The given number.
 *
 * Return: all numbers to 98.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, \n", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
