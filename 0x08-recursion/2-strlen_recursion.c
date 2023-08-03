#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Returns string length
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
