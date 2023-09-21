#include "main.h"

/**
 * cap_string - Capitalizes words.
 *
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i = 0;
	int digit = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 'A')
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				digit = 1;
			}
			else if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				if (!digit)
				{
					str[i + 1] = str[i + 1] - 32;
				}
				digit = 0;
			}
		}
		i++;
	}
	return (str);
}
