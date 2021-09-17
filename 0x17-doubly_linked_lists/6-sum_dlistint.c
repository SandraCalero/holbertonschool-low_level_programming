#include "lists.h"
/**
 * sum_dlistint - gets the sum of all the data (n) of a dlistint_t linked list
 * @head: Pointer to a head of a double linked list
 *
 * Return: The sum of all the data (n) of a dlistint_t linked list
 * If the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
