#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to a pointer that points to an element of a list.
 * @idx: The index of the list where the new node should be added. Starts at 0.
 * @n: Integer as a data in a node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node = *head;
	unsigned int count = 0;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (prev_node != NULL)
	{
		if (count == (idx - 1))
		{
			new_node->next = prev_node->next;
			prev_node->next = new_node;
			return (new_node);
		}
		count++;
		prev_node = prev_node->next;
	}
	return (NULL);
}
