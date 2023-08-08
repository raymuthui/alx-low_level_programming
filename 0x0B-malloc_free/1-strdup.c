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
	int i, j;
	char *mst;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	mst = malloc((i + 1) * sizeof(char));
	if (mst == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		mst[j] = str[j];
	return (mst);
}
