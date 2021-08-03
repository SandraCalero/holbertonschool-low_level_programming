#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: Pointer to a pointer that points to an element of a list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
