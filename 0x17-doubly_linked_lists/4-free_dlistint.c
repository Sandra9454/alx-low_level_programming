#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: a pointer to head of dlistint-t list to be freed.
 * Return: the freed dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
