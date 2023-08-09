#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * isDigits - checks if all are digits
 * str - input
 *
 * Return: 1
 */
int isDigits(char *str)
{
	unsigned int i;
	
	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
			return 0;
	}
	return 1;
}
/**
 * main - entry
 * argc: count
 * argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int value;

	for (i = 1; i < argc; i++)
	{
		if (isDigits(argv[i]))
		{
			value = atoi(argv[i]);
			sum = sum + value;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
