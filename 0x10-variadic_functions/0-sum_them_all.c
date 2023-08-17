#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums its parameters
 * @n: no of parameters to sum up
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	va_start(list, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}
