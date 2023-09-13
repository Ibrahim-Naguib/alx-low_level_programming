#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long a, b, sum, result;

	a = 0;
	b = 1;
	result = 0;

	for (i = 0; i < 34; i++)
	{
		sum = a + b;
		if (sum % 2 == 0)
		{
			result += sum;
		}
		a = b;
		b = sum;
	}
	printf("%lu", result);
	printf("\n");
	return (0);
}
