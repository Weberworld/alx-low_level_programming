#include <string.h>
#include "main.h"
/**
 * jack_bauer - Fucntion
 *
 * Description: Prints all secs in a day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	char m = '0';
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hour <= 9)
			{
				_putchar(m);
			}
			if (hour / 10 > 0)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
			}
			else
			{
				_putchar((hour % 10) + '0');
			}
			_putchar(':');
			if (min <= 9)
			{
				_putchar(m);
			}
			if (min / 10 > 0)
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
			else
			{
				_putchar((min % 10) + '0');
			}

			_putchar(_min);
			_putchar('\n');
		}
	}
}
