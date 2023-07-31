#include "main.h"
/**
 * _memcpy - copies the memory
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
