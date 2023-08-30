#include "lists.h"
/**
 * free_listint2 - saves memory by freeing a linked list
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *short;

	if (head == NULL)
		return;
	while (*head)
	{
		short = (*head)->next;
		free(*head);
		*head = short;
	}
	*head = NULL;
}
