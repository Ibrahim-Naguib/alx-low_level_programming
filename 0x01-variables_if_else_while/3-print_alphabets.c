#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z' || lower <= 'Z')
	{
		putchar(lower);
		lower++;
		if (lower == 'z')
			lower = 'Z';
	}
	return (0);
}

