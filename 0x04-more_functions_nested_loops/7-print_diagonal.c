#include "main.h"

/**
 * print_diagonal - Print diagonal a numbers of times
 * @n: Number of times
 */
void print_diagonal(int n)
{
	if (n >= 2)
	{
		int col, row;

		for (col = 0; col < n; col++)
		{
			for (row = 0; row < col; row++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (col < (n - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
