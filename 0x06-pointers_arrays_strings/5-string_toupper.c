#include "main.h"

/**
 * string_toupper - Converts lowercase letters in a string to uppercase.
 *
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
