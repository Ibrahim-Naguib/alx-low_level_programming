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
	int thirdnum;

	while (firstnum <= 8)
	{
		secondnum = firstnum + 1;
		while (secondnum <= 9)
		{
			thirdnum = secondnum + 1;
			while (thirdnum <= 9)
			{
				putchar(firstnum + '0');
				putchar(secondnum + '0');
				putchar(thirdnum + '0');
				if (firstnum < 7 || secondnum < 8 || thirdnum < 9)
				{
					putchar(',');
					putchar(' ');
				}
				thirdnum++;
			}
			secondnum++;
		}
		firstnum++;
	}
	putchar('\n');
	return (0);
}
