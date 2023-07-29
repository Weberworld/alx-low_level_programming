#include "lists.h"


/**
 * print_list - Prints the itmes in a linked list
 * @head: Pointer to the first element of  the list
 *
 * Return: The number of items in the list
 */
size_t print_list(const list_t *head)
{
	size_t x = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		x++;
	}
	return (x);
}
