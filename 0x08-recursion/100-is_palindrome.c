#include "main.h"

/**
 * length - Calculate the length of a string recursively.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * palindrome - Check if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @start: The index of the current character from the beginning.
 * @end: The index of the current character from the end.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */

int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = length(s);

	return (is_palindrome(s, 0, length - 1));
}
