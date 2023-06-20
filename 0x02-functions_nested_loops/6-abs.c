#include <string.h>
#include "main.h"

/**
 * _abs - Prints the absolute value
 * @n: Number to get its abs
 *
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
