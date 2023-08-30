#include "lists.h"
/**
 * get_nodeint_at_index - returns node at specific index
 * @head: head node
 * @index: index of the node we return
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
