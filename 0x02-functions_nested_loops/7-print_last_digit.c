#include "main.h"

/**
 * print_last_digit -> prints the last digit of a number
 * @n: stores the number
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
