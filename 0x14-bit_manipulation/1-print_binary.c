#include "main.h"
/**
 * print_binary - prints the binary rep
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
