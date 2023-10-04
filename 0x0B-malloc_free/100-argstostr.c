#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command line arguments into a single string.
 * @ac: The number of command line arguments.
 * @av: An array of command line argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, k = 0, len = 0;

	if (ac <= 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	args = malloc(sizeof(char) * len + 1);
	if (args == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			args[k] = av[i][j];
			k++;
		}
		if (args[k] == '\0')
			args[k++] = '\n';
	}
	return (args);
}
