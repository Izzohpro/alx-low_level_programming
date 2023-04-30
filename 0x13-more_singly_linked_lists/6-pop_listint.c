#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: data in the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *res;
	int result;

	if (!head || !*head)
		return (0);
	result = (*head)->n;
	res = (*head)->next;
	free(*head);
	*head = res;
	return (result);
}
