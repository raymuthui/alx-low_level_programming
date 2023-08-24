#include "lists.h"
#include <string.h>
/**
 * add_node - adds node
 * @head: head of list
 * @str: content
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	while (str[len])
		len++;
	if (str == NULL)
		return (NULL);
	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return NULL;
	newNode->str = strdup(str);
	newNode->len = len;
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
