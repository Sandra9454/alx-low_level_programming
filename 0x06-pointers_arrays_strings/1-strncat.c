#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * @src: string 1.
 * @dest: string 2.
 * @n: number of bytes.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
	{
	dest++;
	}
	while (n > 0 && *src)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	*dest = '\0';

	return (original_dest);
}
