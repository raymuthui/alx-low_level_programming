#include "lists.h"
/**
 * pop_listint - gets rid of the head node
 * @head: points to the first element
 * Return: data
 */
int pop_listint(listint **head)
{
	listint *temp;
	int d;

	if (!head || !*head)
		return (0);

	d = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
