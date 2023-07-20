#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for digits 0 through 9
 * @c: stores the digit
 *
 * Return: 1 success, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
