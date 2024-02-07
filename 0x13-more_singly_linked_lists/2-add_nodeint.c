#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: a pointer to the head of the listint_t
 * @n: the integer of the new node to contain.
 * Return: the address of th new element, otherwise NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
