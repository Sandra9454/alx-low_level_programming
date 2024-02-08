#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: integer to be used
 * @m: integer to be flipped.
 * Return: count.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		xor = xor & (xor - 1);
		count++;
	}
	return (count);
}
