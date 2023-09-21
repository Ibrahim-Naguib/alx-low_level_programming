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
	int i = 0, j = 0;
	char special[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				if (str[i - 1] == special[j])
					str[i] -= 32;
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (str[i - 1] == special[j])
					{
						str[i] -= 32;
						break;
					}
				}

			}
		}
		i++;
	}
	return (str);
}
