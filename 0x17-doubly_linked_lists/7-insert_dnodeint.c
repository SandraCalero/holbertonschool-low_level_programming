#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Pointer to the head of a double linked list
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0
 * @n: The data for the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		(*h)->prev = new_node;
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		count++;
		if (count == idx)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}
	return (NULL);
}
