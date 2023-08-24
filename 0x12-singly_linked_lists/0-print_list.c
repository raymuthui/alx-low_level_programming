#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints list
 * @h: linked list
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t size = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		size++;
	}
	return (size);
}
