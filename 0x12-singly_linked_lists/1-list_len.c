#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: linked list.
 * Return: number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
