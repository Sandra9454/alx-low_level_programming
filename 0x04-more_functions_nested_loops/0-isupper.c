#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character to be checked
 * Return: return 1 inn success and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
