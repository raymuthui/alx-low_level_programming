#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("00000011010010");
	printf("%u\n", n);
	return (0);
}
