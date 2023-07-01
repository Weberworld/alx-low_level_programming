#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: First str
 * @src: Str that will be joined to the first one
 *
 * Return: The jointed string as one string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	/* Gets the last index of the first word */
	while (dest[i] != '\0')
	{
		i++
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* since all c srrings must end with '\0' */
	dest[i] = '\0';
	return (dest);
}
