#include "lists.h"
#include <stdlib.h>

/**
 **get_nodeint_t - function that returns the nth node of linked list.
 * @head: pointer to 1st elem of the list
 * @index: node position to be retrieved.
 * Return: pointer to retrieved node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
