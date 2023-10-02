#include "main.h"

/**
 * _strncat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to copy.
 *
 * Return: A pointer to the destination string `dest`.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j < n)
			dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
