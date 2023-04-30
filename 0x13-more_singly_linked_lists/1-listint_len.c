#include "lists.h"

/**
 * listint_len - returns number of the elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t result = 0;

	while (h)
	{
		result++;
	h = h->next;
	}
	return (result);

}
