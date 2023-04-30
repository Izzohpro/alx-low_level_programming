#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node in a linked list at the index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *res = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(res);
		return (1);
	}
	while (j < index - 1)
	{
		if (!res || !(res->next))
			return (-1);
		res = res->next;
		j++;
	}
	current = res->next;
	res->next = current->next;
	free(current);
	return (1);
}
