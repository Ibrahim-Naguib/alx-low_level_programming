#include "main.h"

/**
 * prime - Helper function to recursively check if a number is prime.
 * @n: The number to be checked.
 * @i: The current divisor being tested.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
