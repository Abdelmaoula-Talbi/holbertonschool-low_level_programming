#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to the head of the list.
 * @idx: index of the list where the new node should be added, starting at 0.
 * @n: integer data stored in the new node.
 * Return:  the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *temp = *h, *temp2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	i = 0;
	while (i <= idx && temp != NULL)
	{
		if (i == idx - 1)
		{
			temp2 = temp->next;
			temp->next = new;
			temp2->prev = new;
			new->next = temp2;
			new->prev = temp;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
