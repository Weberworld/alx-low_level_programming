#include "main.h"

/**
 * print_line - print number of lines inputed
 * @n: Numbers of line to be print
 */
void print_line(int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
