#include "main.h"

/**
 * _strchr -  locates a character in a string.
 *
 * @s: pointer to the string.
 * @c: char to locate.
 *
 * Return: a pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
