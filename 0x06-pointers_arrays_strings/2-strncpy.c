#include "main.h"

/**
 * *_strncpy - Copies a string to a pointed
 * @dest: Where the copied string will be
 * @src: The string to be copied
 * @n: Number of characters to copy
 *
 * Return: Returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (n == (i + 1))
		{
			break;
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] += '\0';
	return (dest);
}
