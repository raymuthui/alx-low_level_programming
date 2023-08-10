#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to space containing new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int j = 0;

	while (s1 && s1[s1len])
		s1len++;
	while (s2 && s2[s2len])
		s2len++;
	if (n >= s2len)
		str = malloc(sizeof(char) * s1len + n + 1);
	else
		str = malloc(sizeof(char) * s1len + s2len + 1);
	if (!str)
		return (NULL);
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < s2len && i < (s1len + n))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	while (n >= s2len && i < (s1len + s2len))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
