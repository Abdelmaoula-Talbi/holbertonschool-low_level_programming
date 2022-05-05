#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: dlistint_t list.
 * Return: number of nodes of the dlistint_t list h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
