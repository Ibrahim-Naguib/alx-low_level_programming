#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter.
 *
 * @c: The character to check.
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
