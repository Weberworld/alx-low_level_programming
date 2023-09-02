#include "main.h"

/**
 * *_strchr - Locates a character in a String
 * @s: String to search
 * @c: character to search for
 *
 * Return: other charaters starting from the position of
 * character c in the string
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (s + x);
		}
		x++;
	}
	if (s[x] == c)
	{
		return (s + x);
	}
	return ('\0');
}
