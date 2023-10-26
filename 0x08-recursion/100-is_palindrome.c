#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to be mesured
 * Return: 1 in sucess and 0 upon not.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_chars - compares two characters from a string
 * @x1: input
 * @x2: input
 * Return: 1 in sucess, 0 in not.
 */

int comparator(char *s, int x1, int x2)
{
	if (*(s + x1) == *(s + x2))
		if (x1 == x2 || x1 == x2 + 1)
			return (1);
	if (x1 < x2)
	return (0 + comparator(s, x1 + 1, x2 - 1));
	else
	return (0);
}

/**
 * is_palindrome - function returns 1 if a string pallandromic and 0 if not.
 * @s: string to be checked
 * Return: 1 in success and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
