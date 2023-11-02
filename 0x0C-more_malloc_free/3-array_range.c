#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum number of integers
 * @max: maximum number of integer
 * Return: pointer in success, NULL otherwise
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	return (NULL);

	for (i = 0; min <= max; i++, min++)
	array[i] = min;

	return (array);
}
