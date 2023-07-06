#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: Number to calculate
 *
 * Return: The factorial of the number (n!)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((n == 1)
			||
			(n == 0))
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
