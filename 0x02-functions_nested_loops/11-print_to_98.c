#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print numbers
 * @n: store initial value
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	else if (n == 98)
	{
		_putchar(n);
		_putchar('\n');
	}
	else
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
