#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf(" FizzBuzz");
			else
				printf(" Fizz");
		}
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
