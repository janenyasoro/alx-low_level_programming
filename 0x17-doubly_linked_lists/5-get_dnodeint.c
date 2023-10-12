#include "lists.h"

/**
 *get_dnodeint_at_index - Gets the nth node in the list
 *@head: Pointer to the linked list
 *@index: nth position to get
 *
 * Return: Pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}

	return (NULL);
}
