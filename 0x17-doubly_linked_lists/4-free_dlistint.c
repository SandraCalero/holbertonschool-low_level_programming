#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
* @head: Pointer to the head to a double linked list
*
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
