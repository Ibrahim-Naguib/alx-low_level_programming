#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 *
 * @dest: The destination string where the copy will be stored.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination string.
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
