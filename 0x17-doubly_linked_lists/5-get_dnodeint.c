#include "lists.h"
/**
 * get_dnodeint_at_index - Retrievves the nth node of a dlistint_t
 * linked list.
 * @head: a pointer to the head of the dlistint_t list.
 * @index: index of the node to retrieve, starting at 0.
 * Return: pointer to the nth node of the list, or NULL
 * if node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
