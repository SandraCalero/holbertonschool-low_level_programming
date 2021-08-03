#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: Pointer to a pointer that points to an element of a list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	/*base case*/
	if (head != NULL)
	{
		/*recursive case*/
		free_listint(head->next);
		free(head);
	}
}
