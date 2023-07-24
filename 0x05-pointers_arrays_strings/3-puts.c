#include "main.h"
#include <stdio.h>
/**
 * _puts - Print string
 * @str:  string to print
 */
void _puts(char *str)
{
	do
		_putchar(*str);
	while (*str++);
	_putchar('\n');
}
