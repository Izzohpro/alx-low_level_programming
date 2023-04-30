#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: listint_t list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *res;

	while (head)
	{
	res = head->next;
	free(head);
	head = res;
	}
}
