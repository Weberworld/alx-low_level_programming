#include "main.h"

/**
 * print_square - Prints a square of # using a given size
 * @size: size of the square
 */
void print_square(int size)
{
	int row, col;

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar('#');
		}
		if (col != (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
