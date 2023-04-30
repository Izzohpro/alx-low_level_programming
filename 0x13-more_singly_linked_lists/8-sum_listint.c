#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *res = head;

	while (res)
	{
		sum += res->n;
		res = res->next;
	}
	return (sum);
}

