#include "main.h"

/**
 * *create_array - Creates an array of char of a given size and
 * initialise it with a specific char
 * @size: Size of the array
 * @c: Char to intialise array with
 *
 * Return: Pointer to the char array (success) or Null(failed)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	unsigned int x;


	for (x = 0; x < size; x++)
	{
		*(arr + x) = c;
	}
	return (arr);
}
