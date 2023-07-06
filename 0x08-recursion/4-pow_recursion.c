#include "main.h"

/**
 * _pow_recursion - Returns x raised to the power of 1
 * @x: Whole number
 * @y: indice
 *
 * Return: -1 if y is lower than 0 or returns x to the
 * power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
