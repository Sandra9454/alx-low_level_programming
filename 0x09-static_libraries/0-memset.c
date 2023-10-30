#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: string
 * @n: memory to be filled
 * @b: bytes used to fill the memory
 * Return: pointer to memory s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
