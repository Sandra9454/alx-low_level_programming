#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @src: string 1
 * @dest: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;


	while (*dest)
	{
	dest++;
	}

	while (*src)
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return (original_dest);
}
