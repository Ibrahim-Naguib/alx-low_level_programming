#include <stdio.h>

/**
 * main - prints the largest prime factor.
 *
 * Return: void
 */
int main(void)
{
	long num = 612852475143;
	long largestPrime = 0;
	long i;

	while (num % 2 == 0)
	{
		largestPrime = 2;
		num /= 2;
	}
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largestPrime = i;
			num /= i;
		}
	}
	if (num > 1)
	{
		largestPrime = num;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
