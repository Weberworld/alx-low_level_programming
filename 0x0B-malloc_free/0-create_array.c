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
	char *arr;
	int x;


	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		*(arr + x) = c;
	}
	free(arr);
	return (arr);
}
