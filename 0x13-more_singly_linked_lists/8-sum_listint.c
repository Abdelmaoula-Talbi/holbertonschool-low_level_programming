#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list.
 * @head: pointer to the head of listint list.
 * Return: sum of all data (n).
 */
int sum_listint(listint_t *head)
{
	int sum, i;

	if (head == NULL)
		return (0);
	sum = 0;
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

