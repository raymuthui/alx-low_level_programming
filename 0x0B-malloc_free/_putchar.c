#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c
 * @c: The character to print
 *
 * Return: 1 on success
 * On error, -1 and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
