#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print string
 * @s: store string
 */
void _print_rev_recursion(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
