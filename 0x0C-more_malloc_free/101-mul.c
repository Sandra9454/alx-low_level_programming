#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - function that check if a string consist of digits
 * @s: string to be checked
 * Return: 0 on success.
 */

int is_digit(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	return (0);
	while (s[i] != '\0')
	{
	if (s[i] < '0' || s[i] > '9')
	return (0);
	i++;
	}
	return (1);
}

/**
 * main - function to be conducted
 * @argc: argugment count
 * @argv: argument vector
 * Return: 0 on success
 */
	int main(int argc, char *argv[])
{
	unsigned long int num1, num2, product;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
	write(1, "Error\n", 6);
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%lu\n", product);

	return (0);
}
