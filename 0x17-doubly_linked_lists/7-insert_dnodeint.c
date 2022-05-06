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
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	i = 0;
	while (i <= idx && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		if (temp == NULL)
			temp->prev = new;
		temp = new;
		return (new);
	}
	else if (temp->next == NULL)
	{
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
		temp = new;
		return (new);
	}
	else if (temp != NULL)
	{
		new->next = temp->next;
		new->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
		return (new);
	}
	else
		return (NULL);
}
