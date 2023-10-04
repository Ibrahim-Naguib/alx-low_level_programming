#include "main.h"
#include <stdlib.h>

/**
 * wordcount - Count the number of words in a string.
 * @str: The input string to count words in.
 *
 * This function counts the number of words in the input string @str.
 * Words are considered separated by spaces (' '). Consecutive spaces
 * are not counted as multiple words.
 *
 * Return: The total number of words in the input string.
 */

int wordcount(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				count++;
		}
		else if (str[i] == 0)
			count++;
	}
	count++;
	return (count);
}

/**
 * strtow - Split a string into an array of words.
 * @str: The input string to split into words.
 *
 * This function splits the input string @str into an array of words
 * and returns a double-pointer to the resulting matrix.
 *
 * Return: A pointer to a matrix of words or NULL if memory allocation fails.
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wordcount(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
