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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
