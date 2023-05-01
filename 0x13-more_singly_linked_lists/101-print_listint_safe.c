#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to be checked.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mbe, *aturu;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	mbe = head->next;
	aturu = (head->next)->next;

	while (aturu)
	{
		if (mbe == aturu)
		{
			mbe = head;
		while (mbe != aturu)
		{
			nodes++;
			mbe = mbe->next;
			aturu = aturu->next;
		}
		mbe = mbe->next;
		while (mbe != aturu)
		{
			nodes++;
			mbe = mbe->next;
		}
		return (nodes);
		}
		mbe = mbe->next;
		aturu = (aturu->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

