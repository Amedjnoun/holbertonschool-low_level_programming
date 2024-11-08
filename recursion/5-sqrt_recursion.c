#include "main.h"

/**
 * find_sqrt - finds the square root of a number
 * @n: number to find the square root of
 * @i: number to check
 *
 * Return: square root of n
 */

int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, ++i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
