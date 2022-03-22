#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked listint_t list and set the head to NULL.
 * @head: pointer to pointer to the head of listint_t list.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
