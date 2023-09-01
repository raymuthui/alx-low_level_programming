#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: points to number to change
 * @index: the index of bit to clear
 * Return: 1 success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
