#include "main.h"
#include <stdio.h>

int the_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns natural square root
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_sqrt_recursion(n, 0));
}

/**
 * the_sqrt_recursion - recurses to find the sqrt
 * @n: number
 * @i: iterator
 *
 * Return: square root
 */
int the_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (the_sqrt_recursion(n, i + 1));
}
