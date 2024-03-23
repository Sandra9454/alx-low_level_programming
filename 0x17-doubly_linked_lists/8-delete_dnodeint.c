#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: double pointer to the head of the listint_t list.
 * @index: index of the node that should be deleted, starting at 0.
 * Return: 1 if it succeeded, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && 1 < index)
	{
		temp = current;
		current = current->next;
		i++;
	}

	if (current->next != NULL)
	{
		current->next->prev = temp;
	}
	temp->next = current->next;

	free(current);
	return (1);
}
