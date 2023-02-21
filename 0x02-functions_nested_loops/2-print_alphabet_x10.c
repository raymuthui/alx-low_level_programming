#include "main.h"
/**
 * print_alphabet_x10 -> prints alphabet in lowercase 10 times
 *
 * return: always  0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
