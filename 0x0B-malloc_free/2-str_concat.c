#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: second string
 *
 * Return: full string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
