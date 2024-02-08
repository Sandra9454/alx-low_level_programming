#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness.
 * @union: data type
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c[sizeof(unsigned int)];
	}
	x = {1};

	return (x.c[0]);
}
