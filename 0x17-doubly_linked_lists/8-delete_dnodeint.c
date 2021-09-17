#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: Pointer to the head of a double linked list.
 * @index: The index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
		{
			*head = current->next;
			current->next->prev = NULL;
		}
		else
			*head = NULL;
		free(current);
		return (1);
	}
	while (current->next != NULL)
	{
		current = current->next;
		count++;
		if (count == index)
		{
			if (current->next == NULL)
			{
				current->prev->next = NULL;
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
	}
	return (-1);
}
