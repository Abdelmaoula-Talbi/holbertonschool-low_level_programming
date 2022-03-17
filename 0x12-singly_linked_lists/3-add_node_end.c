#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the first node of the list.
 * @str: string of the new node.
 * Return: pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *last;

	new_n = malloc(sizeof(list_t));
	last = *head;
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->str = strdup(str);
	new_n->len = strlen(str);
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return(new_n);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_n;
	return (new_n);
}
