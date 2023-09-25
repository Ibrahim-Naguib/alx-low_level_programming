#include "main.h"

/**
 * _strstr - locates a substring within a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring `needle`
 * within the string `haystack`, or NULL if `needle` is not found.
 */

char *_strstr(char *haystack, char *needle)
{

	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{

			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
