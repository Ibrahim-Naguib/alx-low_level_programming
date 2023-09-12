#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks if c is lowercase
 *
 * @c: The character to check.
 *
 * Return: 1 if alpha, 0 otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
