#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) speak.
 * @str: The input string.
 *
 * Return: The encoded string.
 */

char *leet(char *str)
{
	int i = 0, j = 0, k;
	char leet[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int nums[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = nums[j];
			}
		}
		i++;
	}
	return (str);
}
