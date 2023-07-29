#include "lists.h"

/**
 * list_len - Returns the number of items in a list
 * @head: Pointer to the first element of the list
 *
 * Return: Number of list items
 */
size_t list_len(const list_t *head)
{
	size_t x;

	x = 0;
	while (head != NULL)
	{
		head = head->next;
		x++;
	}
	return (x);
}
