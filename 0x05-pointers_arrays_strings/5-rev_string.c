#include "main.h"
#include <stdio.h>
/**
 * rev_string  - Print string
 * @s:  string to print
 */
void rev_string(char *s)
{
	int index = 0, length = 0;
	char t;

	while(s[index++])
		length++;
	for (index = length - 1; index >= length / 2; index--)
	{
		t = s[index];
		s[index] = s[length - index - 1];
		s[length - index -1] = t;
	}
}
