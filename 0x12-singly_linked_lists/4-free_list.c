#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: Pointer to a pointer that points to an element of a list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->next);
		free(head->str);
		free(head);
	}
}
