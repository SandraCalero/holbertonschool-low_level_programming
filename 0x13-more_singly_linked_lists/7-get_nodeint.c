#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list.
 * @head: Pointer that points to an element of a list.
 * @index: is the index of the node, starting at 0.
 *
 * Return: The nth node of a listint_t linked list.
 * if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		count++;
		current_node = current_node->next;
	}
	return (NULL);
}
