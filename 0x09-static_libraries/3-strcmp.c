#include "main.h"

/**
 * _strcmp - Compares two strings using the ascii value of each character
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 or the difference between the ascii value of the first different
 * characters
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;

	while (diff == 0)
	{
		if ((s1[i] != '\0') && (s2[i] != '\0'))
		{
			diff = s1 - s2;
			i++;
		}
		break;
	}
	return (0);
}
