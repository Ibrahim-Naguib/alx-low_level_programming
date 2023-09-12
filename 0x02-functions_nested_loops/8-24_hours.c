#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: last number.
 */
void jack_bauer(void)
{
	int hour, minute, second;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			for (second = 0; second <= 59; second++)
			{
				_putchar('0' + (hour / 10));
				_putchar('0' + (hour % 10));
				_putchar(':');
				_putchar('0' + (minute / 10));
				_putchar('0' + (minute % 10));
				_putchar('\n');
			}
		}
	}
}
