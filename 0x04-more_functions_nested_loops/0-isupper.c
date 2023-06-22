#include "main.h"

/**
 * _isupper - Functions that check ifa char is an uppercase
 * @c: character to be checked
 *
 * Return: 1 if it is upper and 0 if not
 */
int _isupper(int c)
{
	if ((c >= 65)
		&&
		(c <= 90))
	{
		return (1);
	}
	return (0);
}
