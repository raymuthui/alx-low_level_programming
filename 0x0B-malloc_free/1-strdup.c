#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns pointer to newly allocated space
 * @str: string to allocate
 *
 * Return: string
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *mst;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	mst = malloc(i * sizeof(char));
	for (j = 0; str[j]; j++)
		mst[j] = str[j];
	return (mst);
}
