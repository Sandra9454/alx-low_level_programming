#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: the number to calculate its factorial
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
	
		return (-1);
	if (n <= 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
	
