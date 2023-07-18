#include "main.h"
#include <stdio.h>
/**
 * _isalpha - entry
 * @c: character
 *
 * Return: 1 success, 0 otherwise
 */
int _isalpha(int c)
{
	return(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	
}
