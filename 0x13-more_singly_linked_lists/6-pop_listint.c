#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the head of list
 * Return: int.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
