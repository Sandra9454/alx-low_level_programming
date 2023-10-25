#include "main.h"
#include <stdio.h>

/**
 * check_prime - function that check if the number is prime
 * @n: number to be checked.
 * @x: iteration number
 * Return: 1 for prime, 0 for else
 */

int check_prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if ((n / x) < x)
		return (1);

	return (check_prime(n, x + 1));
}

/**
 * is_prime_number -  a function returns 1 if the input prime number, otherwise 0.
 * @n: integer to be returned
 * Return: an integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
