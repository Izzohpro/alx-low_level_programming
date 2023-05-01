#include "lists.h"
/**
 * free_listint_safe - frees the linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int zino;
	listint_t *res;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		zino = *h - (*h)->next;
	if (zino > 0)
	{
		res = (*h)->next;
		free(*h);
		*h = res;
		len++;
	}
	else
	{
		free(*h);
		*h = NULL;
		len++;
		break;
	}
	}
	*h = NULL;
	return (len);
}
