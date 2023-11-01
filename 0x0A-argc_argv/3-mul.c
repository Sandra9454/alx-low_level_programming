#include "main.h"
#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument coun
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int output;

	if (argc != 3)
	{

	printf("Error\n");
	return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int output = num1 * num2;

	printf("%d\n", output);

	return (0);
}
