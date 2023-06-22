#include "main.h"

/**
 * more_numbers - Function
 *
 * Description: print all digits 10z
 */
void more_numbers(void)
{
	int times, i;

	for (times = 0; times < 10; times++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i / 10 > 0)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
