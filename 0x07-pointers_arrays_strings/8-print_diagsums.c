#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix as a one-dimensional array.
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
