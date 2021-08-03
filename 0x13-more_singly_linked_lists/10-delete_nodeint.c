#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: Pointer to a pointer that points to an element of a list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *ptr_next;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	for (count = 0 ; current_node != NULL && count < (index - 1) ; count++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}
	ptr_next = current_node->next->next;
	free(current_node->next);
	current_node->next = ptr_next;
	return (1);
}
