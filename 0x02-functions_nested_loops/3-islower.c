#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if a character is a lowercase letter.
 *
 * @c: The character to check.
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
