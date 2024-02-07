#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: a pointer to the head of listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
