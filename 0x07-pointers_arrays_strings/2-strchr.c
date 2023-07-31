#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a char in string
 * @s: string
 * @c: character to search
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
