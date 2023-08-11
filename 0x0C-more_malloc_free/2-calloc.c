#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *ptbyte - fill memory with constant byte
 * @str: to be filled
 * @c: char to copy
 * @n: times to copy c
 *
 * Return: pointer to memory area str
 */
char *ptbyte(char *str, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		str[i] = c;
	}
	return (str);
}
/**
 * *_calloc - allocates memory
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	ptbyte(ptr, 0, nmemb * size);

	return (ptr);
}
