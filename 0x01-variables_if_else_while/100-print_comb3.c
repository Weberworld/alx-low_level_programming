#include <stdio.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Description: Combinations of two numbers 0 - 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x != y)
				&&
					(x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
			}
		}
		putchar(',');
		if (x < 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
