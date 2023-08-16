#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints elements
 * @array: array
 * @size: elements
 * @action: regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
