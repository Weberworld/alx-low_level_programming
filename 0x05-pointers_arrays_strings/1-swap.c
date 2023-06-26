#include <string.h>
#include "main.h"

/**
 * swap_int - Swap the values of two intergers
 * @a: First num
 * @b: Second num
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
