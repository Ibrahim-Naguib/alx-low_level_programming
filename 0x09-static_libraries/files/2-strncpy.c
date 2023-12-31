#include "main.h"

/**
 * _strncpy - Copies a string from src to dest.
 *
 * @dest: The destination string where the copy will be stored.
 * @src: The source string to be copied.
 * @n: The number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
