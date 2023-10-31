#include "main.h"
#include <stdlib.h>

/**
 * *create_array - unction that creates an array of chars, and initializes it
 * @c : character to initialize it.
 * @size: size of the array
 * Return: a pointer in success or NULL otherwise.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
