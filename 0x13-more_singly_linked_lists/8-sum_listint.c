#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - unction that returns the sum of all the data (n)
 * in linked lists.
 * @head: pointer to the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
