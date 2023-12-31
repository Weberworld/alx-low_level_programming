#include <string.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to use
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n *= -1;
	}
	last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
