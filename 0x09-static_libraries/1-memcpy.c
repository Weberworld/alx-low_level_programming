#include "main.h"

/**
 * *_memcpy - Copies num of bytes from a pointer to another
 * @src: Pointer to be copied
 * @dest: Where the pointer will be copied to
 * @n: Number  of bytes
 *
 * Return: returns the dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = *(src + x);
	}
	return (dest);
}
