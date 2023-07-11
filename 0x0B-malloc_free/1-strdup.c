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
	int x;


	if (str == NULL)
	{
		return (NULL);
	}
	cpy = malloc(sizeof(str));
	if (cpy == NULL)
	{
		return (NULL);
	}
i
	for (x = 0; str[x] != '\0'; x++)
	{
		*(cpy + x) = str[x];
	}
	return (cpy);
}
