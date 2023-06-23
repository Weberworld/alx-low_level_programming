#include "main.h"

/**
 * print_diagonal - Print diagonal a numbers of times
 * @n: Number of times
 */
void print_diagonal(int n)
{
	if (n >= 2)
	{
		int start;

		for (start = 0; start < n; start++)
		{
			putchar(' ');
		}
		putchar('\\');
	}
	else if (n == 1)
	{
		putchar('\\');
	}
	putchar('\n');
}
