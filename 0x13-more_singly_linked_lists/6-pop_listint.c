#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to pointer to the head of the listint list.
 * Return: the head node's data n.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
