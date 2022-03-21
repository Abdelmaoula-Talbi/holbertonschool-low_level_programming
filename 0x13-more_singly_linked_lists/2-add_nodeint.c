#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of a listint_t list.
 * @head: pointer to pointer to the first node in the listint_t list.
 * @n: integer member of the listint_t list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
