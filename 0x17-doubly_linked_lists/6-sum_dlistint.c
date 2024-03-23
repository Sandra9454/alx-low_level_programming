#include "lists.h"
/**
 * sum_dlistint - calculates sum of all data (n) of
 * a dlistint_t linked lists.
 * @head: a pointer to the head of the dlistint_t list.
 * Return: the sum of all data (n) of the list, if
 * empty return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
