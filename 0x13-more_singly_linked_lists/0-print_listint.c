#include "lists.h"
/**
 * print_listint - prints elements of all the linked list
 * @h: linked list of type listint_t to print
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t result = 0;

	while (h)
	{
		printf("%d\n", h->n);
		result++;
	h = h->next;
	}
	return (result);
}
