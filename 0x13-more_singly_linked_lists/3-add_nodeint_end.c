#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of the list
 * @head: points to the first element
 * @n: new element
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *brand;
	listint_t *temp = *head;

	size = malloc(sizeof(listint_t));
	if (!brand)
		return (NULL);
	brand->n = n;
	brand->next = NULL;
	if (*head == NULL)
	{
		*head = brand;
		return (brand);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = brand;

	return (brand);
}
