#include "main.h"

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String to copy
 *
 * Return: Pointer to the new allocated space (success) or Null (failed)
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int x, y;


	if (str == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y] != '\0'; y++)
	{
	}
	cpy = (char *)malloc(sizeof(char) * (y + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (y + 1); x++)
	{
		*(cpy + x) = str[x];
	}
	return (cpy);
}
