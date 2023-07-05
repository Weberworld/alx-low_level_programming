#include "main.h"

/**
 * _strlen_recursion - Gets the lenght of a string
 * @s: String to count
 *
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
