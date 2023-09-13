#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, a, b, sum;

	a = 0;
	b = 1;

	printf("%d, ", 0);
	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%d", sum);
		if (i != 49)
		{
			printf(",");
			printf(" ");
		}
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
