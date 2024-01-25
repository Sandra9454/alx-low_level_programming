#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function returns the sum of all its parameters.
 * @n: number of parameters passed to the function
 * @...: number of variables to calculate the sum
 * Return: if n == 0 - 0.
 * otherwise return the sum of all.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
