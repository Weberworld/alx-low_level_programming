#include "main.h"

/**
 * get_root - Returns the sqrt of a number if it has
 * @start: number to start recursion
 * @n: Number
 *
 * Return: -1 if no sqrt or sqrt num if there is
 */
int get_root(int start, int n)
{
	if (start == n)
	{
		return (-1);
	}
	if ((start * start) == n)
	{
		return (start);
	}
	return (get_root((start + 1), n));
}

/**
 * _sqrt_recursion - Returns the square root of a number
 * @n: Number to find its sqrt
 *
 * Return: -1 if n has no sqrt or the sqrt val if it has
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (get_root(1, n));
}
