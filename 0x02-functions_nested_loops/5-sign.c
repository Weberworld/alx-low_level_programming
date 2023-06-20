#include <string.h>
#include "main.h"

/**
 * print_sign - Returns the signs of a number
 * @n: Number
 *
 * Return: 1 if n is greater than 0, 0 if n is zero
 * and -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
