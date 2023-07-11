#include "main.h"

/**
 * _strlen - Counts the lenght of a string
 * @str: String to count
 *
 * Return: Lenght of the string (success)
 */
unsigned int _strlen(char *str)
{
	unsgined int x;


	for (x = 0; str[x] != '\0'; x++)
	{
	}
	return (x);
}

/**
 * *str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: Second str to be joined to s1
 *
 * Return: Pointer to the new allocated joint str space or NULL (failed)
 */
char *str_concat(char *s1, char *s2)
{
	char *joint;
	unsigned int a, b, x, y;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = _strlen(s1);
	b = strlen(s2);
	joint = (char *)malloc(sizeof(char) * (a + b + 1));
	if (joint == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < a; x++)
	{
		joint[x] = s1[x];
	}
	for (y = 0; y < b; y++, x++)
	{
		joint[x] == s2[y];
	}
	return (joint);
}
