#include "main.h"

/**
 * *_strncat - Concatenates  two string at most of a given num
 * @dest: First word
 * @src: Second word that will be joined with dest
 * @n: Numbers of second word that should be joined
 *
 * Return: the joinet string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (n > j)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		break;
	}
	return (dest);
}
