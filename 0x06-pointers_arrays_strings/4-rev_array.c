#include "main.h"

/**
 * reverse_array - Reverese an array
 * @a: Array to be reversed
 * @n: Size of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, new;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i; j > 0; j--)
		{
			new = a[j];
			a[j] = a[j - 1];
			*(a + (j - 1)) = new;
		}
	}
}
