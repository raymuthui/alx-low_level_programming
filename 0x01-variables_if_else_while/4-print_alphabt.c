#include <stdio.h>

/**
 * main -entry
 *
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b == 'q' || b == 'e')
		{
			continue;
		}
		putchar(b);
	}
	putchar('\n');

	return (0);
}
