#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 (Success)
 * On error, -1 and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
