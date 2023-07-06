#include "main.h"

/**
 * prime_checker - Checks a number recursively if it can be
 * divided by a preceding number
 * @start: Recursion starting point
 * @n: Number to check
 *
 * Return: 1 if n is prime and 0 if not
 */
int prime_checker(int start, int n)
{
	if (start != n)
	{
		if ((n % start) == 0)
		{
			return (0);
		}
		return (prime_checker((start + 1), n));
	}
	return (1);
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 for prime numbers and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (prime_checker(2, n));
}
