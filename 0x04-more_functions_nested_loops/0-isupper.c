#include "main.h"

/**
 * _isupper - Checks if a character is a uppercase letter.
 *
 * @c: The character to check.
 *
 * Return: 1 if the character is a uppercase letter, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}

