#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: an integer
 * Rerturn: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - caculate the square root  of a number
 * @n: number to caculate the sqrt
 * @x: iterate number
 * Return: the square root
 */

int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (x);
	return (_sqrt(n, x + 1));

}

