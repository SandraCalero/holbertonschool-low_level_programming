#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer that points to an element of a list.
 *
 * Return: The head node’s data (n). If the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptraux;

	if (*head == NULL)
		return (0);
	ptraux = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = ptraux;
	return (n);
}
