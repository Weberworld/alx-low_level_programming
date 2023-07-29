#include "list.h"


/**
 * print_list - Prints the itmes in a linked list
 * @head: Pointer to the first element of  the list
 *
 * Return: The number of items in the list
 */
size_t print_list(const list_t *head)
{
	int x = 0;
	list_t *temp = head;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s", 0, "(nil)");
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		x++;
	}
	return (x);
}
