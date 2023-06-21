#include <string.h>
#include "main.h"

/**
 * print_to_98 - Prints from a number to 98
 * @n: Number to start from
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int counter;

	if (n <= 98)
	{
		for (counter = n; counter <= 98; counter++)
		{
			if (counter / 10 > 0)
			{
				_putchar((counter / 10) + '0');
				_putchar((counter % 10) + '0');
			}
			else
			{
				_putchar((counter % 10) + '0');
			}
		}
	}
	else
	{
		for (counter = n; counter <= 98; counter--)
		{
			if (counter / 10 > 0)
			{
				_putchar((counter / 10) + '0');
				_putchar((counter % 10) + '0');
			}
			else
			{
				_putchar((counter % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
