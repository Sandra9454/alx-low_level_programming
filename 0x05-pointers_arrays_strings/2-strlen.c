#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : string to determine its length
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
