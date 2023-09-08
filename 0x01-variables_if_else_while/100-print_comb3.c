#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstnum = 0;
	int secondnum;

	while (firstnum <= 8)
	{
		secondnum = firstnum + 1;
		while (secondnum <= 9)
		{
			putchar(firstnum + '0');
			putchar(secondnum + '0');
			if (firstnum < 8 || secondnum < 9)
			{
				putchar(',');
				putchar(' ');
			}
			secondnum++;
		}
		firstnum++;
	}
	putchar('\n');
	return (0);
}
