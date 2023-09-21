#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char firstHalf[] = "ABCDEFGHIJKLMabcdefghijklm";
	char secondHalf[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == firstHalf[j])
			{
				str[i] = secondHalf[j];
				break;
			}
			else if (str[i] == secondHalf[j])
			{
				str[i] = firstHalf[j];
				break;
			}
		}
	}

	return (str);
}
