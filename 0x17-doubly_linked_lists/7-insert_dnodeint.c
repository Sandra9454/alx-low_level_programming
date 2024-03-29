#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head
 * @idx: the index of the list where the new node should be added.
 * starting at 0.
 * @n: integer value for the new node.
 * Return: address of the new node, or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	current = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint (h, n));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	for (i = 0; current != NULL && i < idx; i++)
	{
		if (i == idx - 1)
	{
		if (current->next == NULL)
			return (add_dnodeint_end(h, n));
		new_node->next = current->next;
		new_node->prev = current;
		current->next->prev = new_node;
		current->next = new_node;
		return (new_node);
	}
	current = current->next;
	}

	free(new_node);
	return (NULL);
}

