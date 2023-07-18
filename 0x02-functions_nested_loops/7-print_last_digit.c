#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @i: stores the number
 *
 * Return: i % 19
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
