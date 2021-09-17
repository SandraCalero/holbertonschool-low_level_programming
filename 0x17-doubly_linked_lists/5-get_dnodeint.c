#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node of a dlistint_t linked list
 * @head: Pointer to the head of a double linked list
 * @index: The index of the node, starting from 0
 *
 * Return: The nth node of a dlistint_t linked list. If the node does not
 * exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (head != NULL)
	{
		head = head->next;
		count++;
		if (count == index)
			return (head);
	}
	return (NULL);
}
