#include <string.h>
#include "main.h"

/**
 * times_table - prints xtables up to 9x
 *
 * Desription: Prints the 9 time table
 * Return: void
 */
void times_table(void)
{
	int a, r, c, times, counter;

	/* for the 0x */
	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	/* The times table from 1 - 9 */
	for (r = 1; r <= 9; r++)
	{
		counter = 0;
		for (c = 0; c <= 9; c++)
		{
			times = (r * counter);
			if (times /10 > 0)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			counter++;
		}
		_putchar('\n');
	}
}
