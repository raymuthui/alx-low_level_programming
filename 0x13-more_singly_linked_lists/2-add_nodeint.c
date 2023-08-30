#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: points to head of the list
 * @n: integer for the node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);
	list->n = n;
	list->next = *head;
	*head = list;
	return (list);
}
