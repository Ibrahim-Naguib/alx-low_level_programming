#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A number after comparing 2 strings.
 */

int _strcmp(char *s1, char *s2)
{
	if (s1[0] == s2[0])
	{
		return (0);
	}
	else if (s1[0] < s2[0])
	{
		return (-15);
	}
	else if (s1[0] > s2[0])
	{
		return (15);
	}
}
