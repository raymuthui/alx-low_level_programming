#include "main.h"
#include <stdio.h>
/**
 * print_rev  - Print string
 * @s:  string to print
 */
void print_rev(char *s)
{
	const char *end = s;

	while (*end != '\0')
		end++;
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
