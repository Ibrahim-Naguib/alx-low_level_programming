#include <stdio.h>
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
	int i, j;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
		else
		{
			for (j = n; j >= 98; j--)
			{
				printf("%d", j);
				if (j != 98)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
