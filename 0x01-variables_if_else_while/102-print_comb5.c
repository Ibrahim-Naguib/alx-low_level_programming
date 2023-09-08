#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstnum = 0;
	int secondnum = 0;
	int thirdnum = 0;
	int fourthnum = 0;

	while (firstnum <= 9)
	{
		while (secondnum <= 9)
		{
			while (thirdnum <= 9)
			{
				fourthnum = thirdnum + 1;
				while (fourthnum <= 9)
				{
					putchar(firstnum + '0');
					putchar(secondnum + '0');
					putchar(' ');
					putchar(thirdnum + '0');
					putchar(fourthnum + '0');
					if (firstnum < 9 || secondnum < 9 || thirdnum < 9 || fourthnum < 9)
					{
						putchar(',');
						putchar(' ');
					}
					fourthnum++;
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
