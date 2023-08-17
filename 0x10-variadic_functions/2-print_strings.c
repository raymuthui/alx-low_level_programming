#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: argument count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *value;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, char *);
		if (value == NULL)
			printf("(nil)");
		printf("%s", value);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
