#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *cat;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	cat = malloc(i + j + 1);

	if (cat == NULL)
		return (0);

	for (; k < i; k++)
		cat[k] = s1[k];
	for (; l < j; l++)
		cat[i + l] = s2[l];
	cat[i + j] = '\0';
	return (cat);
}
