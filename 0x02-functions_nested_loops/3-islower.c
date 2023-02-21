#include "main.h"

/**
 *_islower -> checks if the character is lowercase
 *
 * @c: parameter to store character
 * Return: returns 0 or 1 depending on condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
