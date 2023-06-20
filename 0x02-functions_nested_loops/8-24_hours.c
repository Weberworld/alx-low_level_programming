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
				putchar(m);
			}
			char h = '0' + hour;

			putchar(h);
			putchar(':');
			if (min <= 9)
			{
				putchar(m);
			}
			char _min = '0' + min;

			putchar(_min);
			putchar('\n');
		}
	}
}

int main(void)
{
	jack_bauer();
	return (0);
}
