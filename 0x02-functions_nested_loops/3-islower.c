#include <stdio.h>
#include "main.h"
/**
 * _islower - entry
 * @c: stores the character
 *
 * Return: 1 if lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
