#include "main.h"

/**
 * *_memset - Fills the first n bytes of the memory area pointed to by s
 * with a constant byte of b
 * @s: Starting address of the  m emory to be filled
 * @b: Value to be filled
 * @n: Starting number of bytes to be filled
 *
 * Return: Returns a char pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = *s; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
