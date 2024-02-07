#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function that returns the number of elements
 *  in a linked listint_t list
 *  @h: a pointer to the head of listin_t
 *  Return: number of elements in listin_t
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
