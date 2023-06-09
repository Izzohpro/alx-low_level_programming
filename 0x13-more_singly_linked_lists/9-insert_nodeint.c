#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the node is added
 * @n: data to input in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *res = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (j = 0; res && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = res->next;
			res->next = new;
			return (new);
		}
		else
			res = res->next;
	}
	return (NULL);
}

