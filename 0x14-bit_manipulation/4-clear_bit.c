#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: an integer
 * @index: index to be returned
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int  mask;

	if (index >= sizeof(*n) * 9)
		return (-1);

	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
