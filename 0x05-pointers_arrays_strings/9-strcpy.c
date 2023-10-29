#include "main.h"

/**
 * *_strcpy - function that copies from one dest to a buffer.
 * @src : firt point of copy
 * @dest: destination of the copied string
 * Return:  the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
