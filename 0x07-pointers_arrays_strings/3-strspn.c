#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring
 * @s: String to search
 * @accept: bytes to search for
 *
 * Return: Num of bytes of the initial segment of s
 * which consists of obly bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, seen;

	for (x = 0; s[x] != '\0'; x++)
	{
		seen = 1;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				seen = 0;
				break;
			}
		}
		if (seen == 1)
		{
			break;
		}
	}
	return (x);
}
