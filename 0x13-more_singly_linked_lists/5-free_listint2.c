#include "lists.h"
/**
 * free_listint2 - frees the linked list
 * @head: pointer to the listint_t list to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *res;

	if (head == NULL)
		return;

	while (*head)
	{
		res = (*head)->next;
		free(*head);
		*head = res;
	}
	*head = NULL;
}
