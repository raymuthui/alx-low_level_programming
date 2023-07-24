#include "main.h"
#include <stdio.h>
/**
 * _strlen - return length
 * @s: store length
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
