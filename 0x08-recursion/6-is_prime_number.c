#include "main.h"
#include <stdio.h>

int the_prime(int n, int i);

/**
 * is_prime_number - prime or not
 * @n: number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_prime(n, n - 1));
}

/**
 * the_prime - calculates if no is prime recursively
 * @n: number
 * @i: iterator
 *
 * Return: 1 if prime, 0 otherwise
 */
int the_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (the_prime(n, i - 1));
}
