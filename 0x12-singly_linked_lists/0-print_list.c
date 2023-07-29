#include "list.h"


/**
 * print_list - Prints the itmes in a linked list
 * @head: Pointer to the first element of  the list
 *
 * Return: The number of items in the list
 */
size_t print_list(const list_t *head)
{
	if (head == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	int x = 0;
	list_t *temp = head;

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		x++;
		temp = temp->next;
	}
	return (x);
}
