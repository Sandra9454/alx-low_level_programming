#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @src: string 1
 * @dest: destination of the copied string
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
