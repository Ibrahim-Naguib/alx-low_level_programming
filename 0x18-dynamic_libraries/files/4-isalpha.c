#include "main.h"

/**
 * _isalpha - Checks if c is alpha
 *
 * @c: The character to check.
 *
 * Return: 1 if alpha, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || c >= 97 && c <= 122 )
	{
		return (1);
	}
	return (0);
}
