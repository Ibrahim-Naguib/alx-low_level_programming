#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to search within.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of `s` which consist only
 * of bytes from `accept`.
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i] ; j++)
		{

			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
