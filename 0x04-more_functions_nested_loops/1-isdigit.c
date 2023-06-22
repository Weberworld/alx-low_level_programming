#include "main.h"

/**
 * _isdigit - Checks if an input is digit
 * @n: Input to check
 *
 * Return: 1 if it is a digit and 0 if it is not
 */
int _isdigit(int n)
{
	if ((n >= 48)
			&&
			(n <= 57))
	{
		return (1);
	}
	return (0);
}
