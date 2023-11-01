#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @num1: first number
 * @num2: 2nd number
 * @argc: argument coun
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int product;

	if (argc != 3)
	{

	printf("Error\n");
	return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
