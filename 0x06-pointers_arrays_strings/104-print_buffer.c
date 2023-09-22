#include <stdio.h>
#include "main.h"

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
	}

	for (int i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}
		for (int j = 0; j < 10; j++)
		{
			if (i + j < size) {
				if (b[i + j] >= 32 && b[i + j] <= 126)
					_putchar(b[i + j]);
				else
					_putchar('.');
			}
			else
			{
				break;
			}
		}

		printf("\n");
	}
}
