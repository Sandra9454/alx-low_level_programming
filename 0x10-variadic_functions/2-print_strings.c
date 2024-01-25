#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints strings, followed by a new line.
 * @separator: string printed between numbers
 * @n: number of integers passed to function
 * @...: numbers to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int index;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char*);

		if (str == NULL)
			printf("(nill)");

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
