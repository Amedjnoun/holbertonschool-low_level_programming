#include "main.h"

/**
 * check_prime - checks if a number is prime
 * @n: number to check
 * @i: number to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, ++i));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}
