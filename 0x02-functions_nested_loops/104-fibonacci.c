#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long a, b, sum;

	a = 0;
	b = 1;
	for (i = 0; i < 99; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i != 98)
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
