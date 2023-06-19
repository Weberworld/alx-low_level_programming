#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Three numberrs combinations
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if ((x != y)
						&&
						(y != z))
				{
					if ((x < y)
							&&
							(y  < z))
					{
						putchar('0' + x);
						putchar('0' + y);
						putchar('0' + z);
					if ((x + y + z) != 24)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
