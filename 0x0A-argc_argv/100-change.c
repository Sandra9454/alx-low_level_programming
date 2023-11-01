#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	long unsigned i;
	int cents = atoi(argv[1]);
	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < sizeof(denominations) / sizeof(int); i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
