#include <string.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: Character to be checked
 *
 * Return: 1 if  char is an alphabet and 0 if not
 */
int _isalpha(char c)
{
	if ((c <= 122)
			&&
			(c >= 65))
	{
		return (1);
	}
	return (0);
}
