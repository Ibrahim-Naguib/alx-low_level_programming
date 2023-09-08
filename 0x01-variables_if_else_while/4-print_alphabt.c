#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			continue;
		}
		else
		{
			putchar(lower);
			lower++;
		}
	}
	putchar('\n');
	return (0);
}
