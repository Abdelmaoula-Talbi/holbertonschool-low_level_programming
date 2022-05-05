#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the dlistint_t list.
 * @h: dlistint_t doubly linked list.
 * Return: number of elements in the list h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
