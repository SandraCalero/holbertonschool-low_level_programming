#include "lists.h"
/**
* dlistint_len - gets the number of elements in a linked dlistint_t list
* @h: Pointer to the head to a double linked list
*
* Return: The number of elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_nodes++;
	}
	return (num_nodes);
}
