#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: a pointer to pointer to the first element in the linked list.
 * @str: string of the new node.
 * Return: pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->str = strdup(str);
	new_n->len = strlen(str);
	new_n->next = (*head);
	(*head) = new_n;
	return (new_n);
}
