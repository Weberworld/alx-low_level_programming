#include <string.h>
#include "main.h"

/**
 * _islower - Checks if a given char is in lowercase
 * @c: Character to check
 *
 * Return: 1 if char is lowercase and 0 if not
 */
int _islower(char c)
{
	if ((c <= 122)
			&&
			(c >= 97))
	{
		return (1);
	}
	return (0);
}
