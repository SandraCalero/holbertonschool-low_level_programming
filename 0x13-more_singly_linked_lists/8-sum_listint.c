#include "lists.h"

/**
 * sum_listint - gets the sum of all the data (n) of a listint_t linked list
 * @head: Pointer that points to an element of a list.
 *
 * Return: The sum of all the data (n) of a listint_t linked list.
 * 0 if the list is empty,
 */
int sum_listint(listint_t *head)
{
	int i;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (i = 0 ; head != NULL ; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
