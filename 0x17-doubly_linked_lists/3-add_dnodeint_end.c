#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list.
 * @head: a double pointer to the head of the dlistint_t list
 * @n: the integer value for the new node.
 * Return: a pointer to the new node, or NULL if memory allocation fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}

