#include "lists.h"
/**
 * dlistint - returns elements in a linked dlistint_t
 * @h: pointer to the head of the doubly linked list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
