#include "main.h"
/**
 * flip_bits - counts no of bits to change
 * @n: first number
 * @m: second number
 * Return: no of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long in m)
{
	int i, count = 0;
	unsigned long int present;
	unsigned long int pow = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = pow >> i;
		if (present & 1)
			count++;
	}
	return (count);
}
