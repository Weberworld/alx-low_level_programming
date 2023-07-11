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
	if (str == NULL)
	{
		return (NULL);
	}
	char *cpy;
	int x;


	cpy = malloc(sizeof(str));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (x = 0; x != '\0'; x++)
	{
		*(cpy + x) = str[0];
	}
	*(cpy + x) = '\n';
	return (cpy);
}
