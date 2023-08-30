#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Returns no of elements
 * @h: points to head of list
 *
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
