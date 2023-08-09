#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - convert ascii to integer
 * @str: string to convert
 *
 * Return: int
 */
int _atoi(char *str)
{
	int i = 0;
	int n = 0;
	int result;
	int sign = 1;

	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	result = sign * n;
	return (result);
}
/**
 * main - entry
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, multi;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	multi = a * b;
	printf("%d\n", multi);

	return (0);
}
