#include "main.h"
/**
 * _memset - fills the memory
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
