#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: last number.
 */
void jack_bauer(void)
{
int num1, num2, num3, num4;

	num1 = num2 = num3 = num4 = '0';
	while (num1 <= '2')
	{
		while (num2 <= '3')
		{
			while (num3 <= '5')
			{
				while (num4 <= '9')
				{
				if (((num3 + num4) > (num1 + num2) && num3 >= num1) || num1 < num3)
				{
				_putchar(num1);
				_putchar(num2);
				_putchar(':');
				_putchar(num3);
				_putchar(num4);
				}
					num4++;
				}
				num4 = '0';
				num3++;
			}
			num3 = '0';
			num2++;
		}
		num2 = '0';
		num1++;
	}

	_putchar('\n');

}
