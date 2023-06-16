#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 * @head: pointer to the head of the dlistint_t.
 * @index: Index of the node to delete.
 * Return: If success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *zam = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (zam == NULL)
			return (-1);
		zam = zam->next;
	}

	if (zam == *head)
	{
		*head = zam->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		zam->prev->next = zam->next;
		if (zam->next != NULL)
			zam->next->prev = zam->prev;
	}

	free(zam);
	return (1);
}
