#include "main.h"
#include <stdio.h>

/**
 * print_binary -  function that prints binary representation of a number.
 * @n: an integer
 * Return: 0 on success
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
	print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}
