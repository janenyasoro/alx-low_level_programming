#include "lists.h"

/**
 *sum_dlistint - Finds the sum of all the data (n) in a linked list
 *@head: Pointer to the list
 *
 * Return: The sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
