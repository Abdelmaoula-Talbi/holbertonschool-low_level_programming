#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list.
 * @index: index of the node to return, starting at 0.
 * Return: the node at the position index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		head = head->next;
		if ((i + 2)== index)
			return(head->next);
	}
	return (NULL);
}
